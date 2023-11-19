#include "airvm_runtime.h"
#include "airvm_opcode.h"

#include <stdatomic.h>
#include <stdio.h>
#include <math.h>

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
    uint16_t reg_count; // 函数需要的寄存器数量
    uint16_t arg_count; // 函数的参数数量
    uint32_t ins_count; // 函数的指令条数（以 uint16_t 为单位）
    uint16_t ins_set[]; // 指令数据
};

void airvm_init(const airvm_config *config)
{
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
        #include "inline/airvm_ldst_r8.inl"
        #include "inline/airvm_ldst_r16.inl"
        */

        // 数学二地址码：op subop,des,src  : src => des
#include "inline/airvm_math2_r8.inl"
#include "inline/airvm_math2_r16.inl"
        // 数学三地址运算子码
#include "inline/airvm_math3_r4.inl"
#include "inline/airvm_math3_r8.inl"
#include "inline/airvm_math3_r16.inl"
        // 直接跳转指令 goto imm
#include "inline/airvm_goto.inl"
        // 分支跳转指令：jbrz subop,src,imm
#include "inline/airvm_jbrz_r4_imm12.inl"
#include "inline/airvm_jbrz_r8_imm8.inl"
#include "inline/airvm_jbrz_r8_imm24.inl"
#include "inline/airvm_jbrz_r16_imm16.inl"
#include "inline/airvm_jbrz_r16_imm32.inl"
        // 分支跳转指令：jbr subop,src,src2,imm
#include "inline/airvm_jbr_r4_imm8.inl"
#include "inline/airvm_jbr_r8_imm16.inl"
#include "inline/airvm_jbr_r8_imm32.inl"
#include "inline/airvm_jbr_r16_imm16.inl"
#include "inline/airvm_jbr_r16_imm32.inl"
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
            case subop_call_r4_native_func: // 8-8-16-32-8,4-4-4-...-4
            {
                // dll动态库编号
                uint32_t dllserial = insarr[*pc + 1];
                // 主机函数编号
                uint32_t funcserial = (insarr[*pc + 3] << 16) | insarr[*pc + 2];
                // 获取参数数量
                uint32_t argcnt = insarr[*pc + 3] & 0xFF;

                insresult("%4X: call_r4_native_func \tr%d resault:%d\n", *pc);
                *pc += 2;
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