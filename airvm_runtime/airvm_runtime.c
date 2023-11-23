#include "airvm_runtime.h"
#include "airvm_opcode.h"

#include "airvm_bcfmt.h"
#include "airvm_bcfmt_enum.h"

#include <math.h>
#include <stdatomic.h>
#include <stdio.h>

// 函数栈帧
typedef struct airvm_funcstack *airvm_funcstack_t;
struct airvm_funcstack
{
    airvm_funcstack_t prev; // 上一个栈帧
    airvm_func_t func;      // 当前帧函数
    uint32_t PC;            // 程序计数器
    uint32_t reg_set[];     // 当前帧寄存器集
};
// 虚拟机执行器上下文
struct airvm_actuator
{
    // 当前函数栈帧
    airvm_funcstack_t stack;
    // 当前函数返回值
    union
    {
        uintptr_t ptr; // 地址

        // 返回的有符号整数
        int8_t i8;
        int16_t i16;
        int32_t i32;
        int64_t i64;
        // 返回的无符号整数
        uint8_t u8;
        uint16_t u16;
        uint32_t u32;
        uint64_t u64;
        // 返回的浮点数
        flt32_t f32;
        flt64_t f64;
    };
    // 异常对象句柄
    uintptr_t exception;
};

// 虚拟机执行的函数
struct airvm_function
{
    uint32_t func_flag;  // 函数标记
    uint32_t name_index; // 名称字符串索引
    uintptr_t func_data; // 背景数据地址
    uint16_t reg_count;  // 函数需要的寄存器数量
    uint16_t arg_count;  // 函数的参数数量
    uint32_t ins_count;  // 函数的指令条数（以 uint16_t 为单位）
    uint16_t ins_set[];  // 指令数据
};

// 全局字节码文件存储
uint32_t gVMFiles = 0;
bcfmt_file_t gVMFilev[1024] = {};

// 全局接口
airvm_interface_t gVMINF = {
    .airvm_alloc_actor = airvm_alloc_actor,
    .airvm_free_actor = airvm_free_actor,
    .airvm_set_func = airvm_set_func,
    .airvm_run = airvm_run,
};

// 虚拟机环境初始化
uintptr_t airvm_init(const airvm_config *config)
{
    // 加载文件
    uintptr_t content = airvm_load_file(config->mainfile);
    // 分析文件
    if (airvm_parse_file(content) == 0)
    {
        return content;
    }
    printf("\n%s: Failed to parse file!\n", ((bcfmt_file_t)(content))->filename.str);
    return 0;
}
// 虚拟机环境终结化
void airvm_terminal()
{
    for (uint32_t i = 0; i < gVMFiles; ++i)
        airvm_unload_file((uintptr_t *)&gVMFilev[i]);
}

uintptr_t airvm_load_file(const char *path)
{
    // 分配文件信息内存
    uintptr_t nlen = strlen(path);
    uintptr_t size = sizeof(bcfmt_file) + nlen + 1;
    bcfmt_file_t file = malloc(size);
    memset(file, 0, size);
    // 文件名称拷贝
    file->filename.len = nlen;
    memcpy_s((char *)file->filename.str, nlen, path, nlen);

// 加载文件数据
#ifdef Airvm_Plat_Window
    file->fileHD = CreateFile(path, GENERIC_READ, FILE_SHARE_READ, NULL,
                              OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
    file->size = GetFileSize(file->fileHD, NULL);
    file->mapHD = CreateFileMapping(file->fileHD, NULL, PAGE_WRITECOPY, 0, file->size, NULL);

    file->address = (uintptr_t)MapViewOfFile(file->mapHD, FILE_MAP_COPY, 0, 0, 0);
#endif
    // 记录句柄
    gVMFilev[gVMFiles] = file;
    ++gVMFiles;
    return (uintptr_t)file;
}

void airvm_unload_file(uintptr_t *handle)
{
    if (*handle == 0)
        return;

    bcfmt_file_t file = (bcfmt_file_t)*handle;

#ifdef Airvm_Plat_Window
    UnmapViewOfFile((LPVOID)file->address);
    CloseHandle((HANDLE)file->mapHD);
    CloseHandle((HANDLE)file->fileHD);
#endif

    free((void *)*handle);
    *handle = 0;
}

static inline void airvm_load_dll_files(bcfmt_file_t file)
{
    for (uint32_t i = 0; i < file->tabnat->count; ++i)
    {
        bcfmt_string_t *name = file->tabstr->item[file->tabnat->item[i].name];
#ifdef Airvm_Plat_Window
        HANDLE dll = LoadLibrary(name->str);
        if (dll == 0)
        {
            printf("%s: File does not exist!\n", name->str);
            exit(-1);
        }
        airvm_native_init init = (airvm_native_init)GetProcAddress(dll, "nat_dll_init");
        if (init == 0)
        {
            printf("%s: Func( nat_dll_init ) does not exist!\n", name->str);
            exit(-1);
        }
        airvm_native_mate_t meta = init(&gVMINF, file->tabnat->item[i].version);
        if (meta == 0)
        {
            printf("%s: Version Incompatible!\n", name->str);
            exit(-1);
        }
        file->tabnat->item[i].handle = (uintptr_t)dll;
        file->tabnat->item[i].nat = meta;
#endif
    }
}

int32_t airvm_parse_file(uintptr_t handle)
{
    if (handle == 0)
        return -1;
    bcfmt_file_t file = (bcfmt_file_t)handle;
    if (file->address == 0)
        return -1;

    file->header = (bcfmt_header_t *)file->address;
    file->segtab = (bcfmt_segtab_t *)(file->address + sizeof(bcfmt_header_t));

    // 段后数据偏移
    uintptr_t offset = sizeof(bcfmt_header_t) + sizeof(uint32_t) * (file->segtab->count * 2 + 1);
    // 获取各部分数据的地址
    for (uint32_t i = 0; i < file->segtab->count; ++i)
    {
        switch (file->segtab->item[i].kind)
        {
            // 字符串信息
        case airvm_bcfmt_segtab_item_kind_string_table:
        {
            file->tabstr = (bcfmt_strstab_t *)(file->address + offset + file->segtab->item[i].offset);
            continue;
        }
        break;
        case airvm_bcfmt_segtab_item_kind_string_data:
        {
            file->areastr = (file->address + offset + file->segtab->item[i].offset);
            continue;
        }
        break;
        // 主机插件
        case airvm_bcfmt_segtab_item_kind_host_dll:
        {
            file->tabnat = (bcfmt_nattab_t *)(file->address + offset + file->segtab->item[i].offset);
            continue;
        }
        break;
        // 函数信息
        case airvm_bcfmt_segtab_item_kind_function_table:
        {
            file->tabfunc = (bcfmt_functab_t *)(file->address + offset + file->segtab->item[i].offset);
            continue;
        }
        break;
        case airvm_bcfmt_segtab_item_kind_function_data:
        {
            file->areafunc = (file->address + offset + file->segtab->item[i].offset);
            continue;
        }
        break;

        default:
        {
            printf("%s: Unknown segment type( 0x%X )!\n",
                   file->filename.str, file->segtab->item[i].kind);
            exit(-1);
        }
        break;
        }
    }

    // 开始分析各索引的地址
    for (uint32_t i = 0; i < file->tabstr->count; ++i)
    {
        file->tabstr->item[i] = (bcfmt_string_t *)(file->areastr + (uintptr_t)(file->tabstr->item[i]));
        printf("%d:%s\n", file->tabstr->item[i]->len, file->tabstr->item[i]->str);
    }
    for (uint32_t i = 0; i < file->tabfunc->count; ++i)
    {
        file->tabfunc->item[i] = (file->areafunc + (uintptr_t)(file->tabfunc->item[i]));
        // printf("%d:%s\n",file->tabstr->item[i]->len,file->tabstr->item[i]->str);
    }
    // 加载dll库
    airvm_load_dll_files(file);
    return 0;
}

airvm_func_t airvm_get_entry(uintptr_t handle)
{
    bcfmt_file_t file = (bcfmt_file_t)handle;
    uint32_t serial = file->header->flag;
    assert(serial < file->tabfunc->count);
    airvm_func_t entry = (airvm_func_t)file->tabfunc->item[serial];
    return entry;
}

airvm_actor_t airvm_alloc_actor()
{
    airvm_actor_t actor = (airvm_actor_t)malloc(sizeof(struct airvm_actuator));
    memset(actor, 0, sizeof(struct airvm_actuator));
    return actor;
}

void airvm_free_actor(airvm_actor_t *actor)
{
    airvm_actor_t tmp = *actor;
    if (tmp == NULL)
        return;
    *actor = NULL;
    // 释放还存在的函数栈
    airvm_funcstack_t stack = tmp->stack;
    while (stack != NULL)
    {
        airvm_funcstack_t tmp = stack->prev;
        free(stack);
        stack = tmp;
    }
    // 释放上下文句柄
    free(tmp);
}

// 构建函数栈
static inline void airvm_build_stack(airvm_actor_t actor, airvm_func_t func)
{
    // func 不能为 null
    assert(func != 0);
    // 计算栈帧大小
    uint32_t sfsize = sizeof(struct airvm_funcstack) + sizeof(uint32_t) * func->reg_count;
    // 分配内存
    airvm_funcstack_t stack = (airvm_funcstack_t)malloc(sfsize);
    memset(stack, 0, sfsize);
    // 初始化
    stack->func = func;
    stack->prev = actor->stack;
    // 更新当前的栈帧
    actor->stack = stack;
}

void airvm_set_func(airvm_actor_t actor, airvm_func_t func)
{
    airvm_build_stack(actor, func);
}

#ifndef insresult
#define insresult(...) printf(__VA_ARGS__)
#endif

// 处理返回指令的公共代码
#define insreturn()                  \
    do                               \
    {                                \
        actor->stack = statck->prev; \
        free(statck);                \
        statck = actor->stack;       \
                                     \
        if (statck == NULL)          \
            return;                  \
        reg = statck->reg_set;       \
        pc = &statck->PC;            \
        func = statck->func;         \
        reg_cout = func->reg_count;  \
        insarr = func->ins_set;      \
        ins_cout = func->ins_count;  \
    } while (0);

// 处理函数调用的通用公共代码
#define inscallfunc()               \
    do                              \
    {                               \
        statck = actor->stack;      \
        reg = statck->reg_set;      \
        pc = &statck->PC;           \
        func = statck->func;        \
        reg_cout = func->reg_count; \
        insarr = func->ins_set;     \
        ins_cout = func->ins_count; \
    } while (0);

// 通过编号获取函数
static inline airvm_func_t airvm_get_func(airvm_func_t current, uint32_t serial)
{
    for (uint32_t i = 0; i < gVMFiles; ++i)
    {
        uintptr_t start = gVMFilev[i]->address;
        uintptr_t end = start + gVMFilev[i]->size;
        if (start < (uintptr_t)current && (uintptr_t)current < end)
        {
            if (serial < gVMFilev[i]->tabfunc->count)
                return (airvm_func_t)gVMFilev[i]->tabfunc->item[serial];
            else
            {
                printf("%s: Function number overflow %u < %u!",
                       gVMFilev[i]->filename.str,
                       gVMFilev[i]->tabfunc->count - 1, serial);
                return 0;
            }
        }
    }
    return 0;
}
// 获取函数的名称
static inline bcfmt_string_t *airvm_get_func_name(airvm_func_t current)
{
    for (uint32_t i = 0; i < gVMFiles; ++i)
    {
        uintptr_t start = gVMFilev[i]->address;
        uintptr_t end = start + gVMFilev[i]->size;
        if (start < (uintptr_t)current && (uintptr_t)current < end)
        {
            if (current->name_index < gVMFilev[i]->tabstr->count)
                return gVMFilev[i]->tabstr->item[current->name_index];
            else
            {
                printf("%s: Function name string number overflow %u < %u!",
                       gVMFilev[i]->filename.str,
                       gVMFilev[i]->tabfunc->count - 1, current->name_index);
                return 0;
            }
        }
    }
    return 0;
}
// 获取插件函数
static inline airvm_native_func_t *airvm_get_native_func(airvm_func_t current, uint16_t dll, uint32_t func)
{
    for (uint32_t i = 0; i < gVMFiles; ++i)
    {
        uintptr_t start = gVMFilev[i]->address;
        uintptr_t end = start + gVMFilev[i]->size;
        if (start < (uintptr_t)current && (uintptr_t)current < end)
        {
            if (dll < gVMFilev[i]->tabnat->count && func < gVMFilev[i]->tabnat->item[dll].nat->tabfun->fun_count)
            {
                return &(gVMFilev[i]->tabnat->item[dll].nat->tabfun->funcs[func]);
            }
            else
            {
                printf("%s: Dll or Function number overflow ! dll: %u  func: %u  \n",
                       gVMFilev[i]->filename.str,
                       dll, func);
                return 0;
            }
        }
    }
    return 0;
}

void airvm_run(airvm_actor_t actor)
{
    airvm_funcstack_t statck = actor->stack;
    if (statck == NULL)
        return;
    airvm_func_t func = statck->func;

    assert(actor != 0 && func != 0);

    uint16_t ins = 0;
    uint32_t *reg = statck->reg_set;
    uint32_t *pc = &statck->PC;
    uint32_t reg_cout = func->reg_count;
    uint16_t *insarr = func->ins_set;
    uint32_t ins_cout = func->ins_count;

    // 开始解析执行指令
    while (*pc < ins_cout)
    {
        // 获取指令
        ins = insarr[*pc];
        const uint16_t op = (ins & 0xFF00) >> 8;
        switch (op)
        {
        case op_nop:
        {
            insresult("%4X: nop\n", *pc);
            printf("%4d: This nop instruction should not be run!\n", *pc);
            exit(-1);
            ++*pc;
            continue;
        }
        break;
        // 4 bit 常量赋值: 8-4-4
#include "inline/airvm_const_r4.inl"
        // 8 bit 常量赋值：8-8-8-8
#include "inline/airvm_const_r8_subop.inl"
        // 16 bit 常量赋值：8-8-16
        // 32/64 bit 常量赋值：8-8-32/8-8-64
#include "inline/airvm_const_r8.inl"
        // 16/32/64 bit 常量赋值：8-8-16-16/8-8-16-32/8-8-16-64
#include "inline/airvm_const_r16_subop.inl"
        // 寄存器间赋值：op des,src  : src => des :8-4-4
#include "inline/airvm_mov_r4.inl"
        // 寄存器间赋值:op subop,des,src  : src => des :8-8-8-8
#include "inline/airvm_mov_r8.inl"
        // 寄存器间赋值:op subop,des,src  : src => des :8-8-16-16
#include "inline/airvm_mov_r16.inl"

        // 数据加载、存储: op subop,des,src,offset
        /*#include "inline/airvm_ldst_r4.inl"
        #include "inline/airvm_ldst_r16.inl"
        #include "inline/airvm_ldst_r8.inl"
        */

        // 数学二地址码：op subop,des,src  : src => des
#include "inline/airvm_math2_r16.inl"
#include "inline/airvm_math2_r8.inl"
        // 数学三地址运算子码
#include "inline/airvm_math3_r16.inl"
#include "inline/airvm_math3_r4.inl"
#include "inline/airvm_math3_r8.inl"
        // 直接跳转指令 goto imm
#include "inline/airvm_goto.inl"
        // 分支跳转指令：jbrz subop,src,imm
#include "inline/airvm_jbrz_r16_imm16.inl"
#include "inline/airvm_jbrz_r16_imm32.inl"
#include "inline/airvm_jbrz_r4_imm12.inl"
#include "inline/airvm_jbrz_r8_imm24.inl"
#include "inline/airvm_jbrz_r8_imm8.inl"
        // 分支跳转指令：jbr subop,src,src2,imm
#include "inline/airvm_jbr_r16_imm16.inl"
#include "inline/airvm_jbr_r16_imm32.inl"
#include "inline/airvm_jbr_r4_imm8.inl"
#include "inline/airvm_jbr_r8_imm16.inl"
#include "inline/airvm_jbr_r8_imm32.inl"
        // 返回指令
#include "inline/airvm_return.inl"
        // 返回值获取
#include "inline/airvm_getret.inl"

        // 函数相关指令
        case op_func_subop: // 8-8-16
        {
            uint32_t subop = ins & 0x00FF;

            switch (subop)
            {
                // 主机函数调用
                // func subop,dllserial,funcserial,argcnt,arg,arg1,...,argn
            case subop_call_r4_native_func: // 8-8-16-32-4,4-4-4-...-4
            {
                // dll动态库编号
                uint32_t dllserial = insarr[*pc + 1];
                // 主机函数编号
                uint32_t funcserial = (insarr[*pc + 3] << 16) | insarr[*pc + 2];
                // 获取参数数量
                uint32_t argcnt = insarr[*pc + 4] & 0xF;
                uint32_t align = (argcnt + 4) & (~3);
                // 计算并偏移量
                uint32_t shift = 4 + (align >> 2);
                insresult("%4X: call_r4_native_func\n", *pc);
                // 获取主机函数接口
                airvm_native_func_t *nat = airvm_get_native_func(func, dllserial, funcserial);
                assert(nat != 0);
                insresult("\t%u-%u : %s \n\targ: %u\n", dllserial, funcserial, nat->name->str, argcnt);

                // 分配并填充参数
                uint32_t *argv = NULL;
                if (argcnt != 0)
                {
                    argv = (uint32_t *)malloc(argcnt * sizeof(uint32_t));
                    uint32_t *argreg = argv;
                    uint8_t *arv = (uint8_t *)&insarr[*pc + 4];

                    // 取第一个参数寄存器
                    uint32_t ari = (*arv) >> 4;
                    *argreg = reg[ari];
                    insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                    ++arv;
                    ++argreg;
                    uint32_t argcnt2 = argcnt - 1;
                    for (uint32_t i = 0; i < argcnt2; ++i)
                    {
                        if (i % 2 == 0)
                            ari = (*arv) & 0xF;
                        else
                        {
                            ari = (*arv) >> 4;
                            ++arv;
                        }
                        *argreg = reg[ari];
                        insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                        ++argreg;
                    }
                }
                // 调用函数
                uintptr_t ret = nat->entry(argcnt, argv, (uintptr_t)&actor->ptr);
                // 释放参数
                if (argv != 0)
                    free(argv);

                *pc += shift;
                continue;
            }
            break;

            // 主机函数调用
            // func subop,dllserial,funcserial,argcnt,arg,arg1,...,argn
            case subop_call_r8_native_func: // 8-8-16-32-8,8-8-8-...-8
            {
                // dll动态库编号
                uint32_t dllserial = insarr[*pc + 1];
                // 主机函数编号
                uint32_t funcserial = (insarr[*pc + 3] << 16) | insarr[*pc + 2];
                // 获取参数数量
                uint32_t argcnt = insarr[*pc + 4] & 0xFF;
                uint32_t align = (argcnt + 2) & (~1);
                // 计算并偏移量
                uint32_t shift = 4 + (align >> 1);
                insresult("%4X: call_r8_native_func\n", *pc);
                // 获取主机函数接口
                airvm_native_func_t *nat = airvm_get_native_func(func, dllserial, funcserial);
                assert(nat != 0);
                insresult("\t%u-%u : %s \n\targ: %u\n", dllserial, funcserial, nat->name->str, argcnt);

                // 分配并填充参数
                uint32_t *argv = NULL;
                if (argcnt != 0)
                {
                    argv = (uint32_t *)malloc(argcnt * sizeof(uint32_t));
                    uint32_t *argreg = argv;
                    uint8_t *arv = (uint8_t *)&insarr[*pc + 4];
                    arv += 1;

                    uint32_t ari = 0;

                    for (uint32_t i = 0; i < argcnt; ++i)
                    {
                        ari = (*arv);
                        ++arv;
                        *argreg = reg[ari];
                        insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                        ++argreg;
                    }
                }
                // 调用函数
                uintptr_t ret = nat->entry(argcnt, argv, (uintptr_t)&actor->ptr);
                // 释放参数
                if (argv != 0)
                    free(argv);

                *pc += shift;
                continue;
            }
            break;
            // 主机函数调用
            // func subop,dllserial,funcserial,argcnt,arg,arg1,...,argn
            case subop_call_r16_native_func: // 8-8-16-32-16,16-16-16-...-16
            {
                // dll动态库编号
                uint32_t dllserial = insarr[*pc + 1];
                // 主机函数编号
                uint32_t funcserial = (insarr[*pc + 3] << 16) | insarr[*pc + 2];
                // 获取参数数量
                uint32_t argcnt = insarr[*pc + 4];
                // 计算并偏移量
                uint32_t shift = 5 + argcnt;
                insresult("%4X: call_r16_native_func\n", *pc);
                // 获取主机函数接口
                airvm_native_func_t *nat = airvm_get_native_func(func, dllserial, funcserial);
                assert(nat != 0);
                insresult("\t%u-%u : %s \n\targ: %u\n", dllserial, funcserial, nat->name->str, argcnt);

                // 分配并填充参数
                uint32_t *argv = NULL;
                if (argcnt != 0)
                {
                    argv = (uint32_t *)malloc(argcnt * sizeof(uint32_t));
                    uint32_t *argreg = argv;
                    uint16_t *arv = (uint16_t *)&insarr[*pc + 5];
                    uint32_t ari = 0;

                    for (uint32_t i = 0; i < argcnt; ++i)
                    {
                        ari = (*arv);
                        ++arv;
                        *argreg = reg[ari];
                        insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                        ++argreg;
                    }
                }
                // 调用函数
                uintptr_t ret = nat->entry(argcnt, argv, (uintptr_t)&actor->ptr);
                // 释放参数
                if (argv != 0)
                    free(argv);

                *pc += shift;
                continue;
            }
            break;

                // 静态函数调用:func subop,funcserial,argcnt,arg,arg1,...,argn
            case subop_call_r4_static_func: // 8-8-32-4,4-4-4-...-4
            {
                // 静态函数编号
                uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
                // 获取参数数量
                uint32_t argcnt = insarr[*pc + 3] & 0xF;
                uint32_t align = (argcnt + 4) & (~3);
                // 计算并偏移量
                uint32_t shift = 3 + (align >> 2);
                insresult("%4X: call_r4_static_func\n", *pc);
                // 获取函数地址
                airvm_func_t call = airvm_get_func(func, funcserial);
                assert(call != 0 && call->arg_count == argcnt);
                // 构建栈并传递参数
                airvm_build_stack(actor, call);
                insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
                if (argcnt != 0)
                {
                    uint32_t argshift = call->reg_count - call->arg_count;
                    uint32_t *argreg = &(actor->stack->reg_set[argshift]);
                    uint8_t *arv = (uint8_t *)&insarr[*pc + 3];

                    // 取第一个参数寄存器
                    uint32_t ari = (*arv) >> 4;
                    *argreg = reg[ari];
                    insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                    ++arv;
                    ++argreg;
                    argcnt -= 1;
                    for (uint32_t i = 0; i < argcnt; ++i)
                    {
                        if (i % 2 == 0)
                            ari = (*arv) & 0xF;
                        else
                        {
                            ari = (*arv) >> 4;
                            ++arv;
                        }
                        *argreg = reg[ari];
                        insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                        ++argreg;
                    }
                }

                *pc += shift;
                insresult("\n\tresult: %X\n\n", *pc);
                // 更新运行参数
                inscallfunc();
                continue;
            }
            break;

                // 静态函数调用:func subop,funcserial,argcnt,arg,arg1,...,argn
            case subop_call_r8_static_func: // 8-8-32-8,8-8-8-...-8
            {
                // 静态函数编号
                uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
                // 获取参数数量
                uint32_t argcnt = insarr[*pc + 3] & 0xFF;
                uint32_t align = (argcnt + 2) & (~1);
                // 计算并偏移量
                uint32_t shift = 3 + (align >> 1);
                insresult("%4X: call_r8_static_func\n", *pc);
                // 获取函数地址
                airvm_func_t call = airvm_get_func(func, funcserial);
                assert(call != 0 && call->arg_count == argcnt);
                // 构建栈并传递参数
                airvm_build_stack(actor, call);
                insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
                if (argcnt != 0)
                {
                    uint32_t argshift = call->reg_count - call->arg_count;
                    uint32_t *argreg = &(actor->stack->reg_set[argshift]);
                    uint8_t *arv = (uint8_t *)&insarr[*pc + 3];
                    arv += 1;

                    uint32_t ari = 0;

                    for (uint32_t i = 0; i < argcnt; ++i)
                    {
                        ari = (*arv);
                        ++arv;
                        *argreg = reg[ari];
                        insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                        ++argreg;
                    }
                }

                *pc += shift;
                insresult("\n\tresult: %X\n\n", *pc);
                // 更新运行参数
                inscallfunc();
                continue;
            }
            break;
                // 静态函数调用:func subop,funcserial,argcnt,arg,arg1,...,argn
            case subop_call_r16_static_func: // 8-8-32-16,16-16-16-...-16
            {
                // 静态函数编号
                uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
                // 获取参数数量
                uint32_t argcnt = insarr[*pc + 3];
                // 计算并偏移量
                uint32_t shift = 4 + argcnt;
                insresult("%4X: call_r16_static_func\n", *pc);
                // 获取函数地址
                airvm_func_t call = airvm_get_func(func, funcserial);
                assert(call != 0 && call->arg_count == argcnt);
                // 构建栈并传递参数
                airvm_build_stack(actor, call);
                insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
                if (argcnt != 0)
                {
                    uint32_t argshift = call->reg_count - call->arg_count;
                    uint32_t *argreg = &(actor->stack->reg_set[argshift]);
                    uint16_t *arv = (uint16_t *)&insarr[*pc + 4];
                    // arv += 1;

                    uint32_t ari = 0;

                    for (uint32_t i = 0; i < argcnt; ++i)
                    {
                        ari = (*arv);
                        ++arv;
                        *argreg = reg[ari];
                        insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                        ++argreg;
                    }
                }

                *pc += shift;
                insresult("\n\tresult: %X\n\n", *pc);
                // 更新运行参数
                inscallfunc();
                continue;
            }
            break;

            // subop 默认处理
            default:
                goto _Error_Handle;
                break;
            }
        }
        break;

        // op 默认处理
        default:
            goto _Error_Handle;
            break;
        }
    }

    // 当函数最后没有return指令时，释放当前函数栈
    if (*pc == ins_cout)
    {
        actor->stack = statck->prev;
        free(statck);
    }
    // 程序计数器值错误
    if (*pc > ins_cout)
    {
        printf("\n\nProgram counter value error! %u > %u\n\n", *pc, ins_cout);
        exit(-1);
    }

    return;

    // ---------------------错误指令处理--------------------------
_Error_Handle:
{
    printf("%4x: Instruction format error or unknown instruction!\n", *pc);
    exit(-1);
}
}

#undef insresult
#undef insreturn