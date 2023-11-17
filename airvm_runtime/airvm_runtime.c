#include "airvm_runtime.h"
#include "airvm_opcode.h"

#include <stdatomic.h>
#include <stdio.h>
#include <math.h>

// 虚拟机执行器上下文
struct airvm_actuator
{
    airvm_actor_t prev; // 上一个栈帧
    // 当前函数返回值
    union
    {
        uintptr_t retval; // 当前函数返回值
        void *ptr;
        int8_t i8;
        int16_t i16;
        int32_t i32;
        int64_t i64;

        flt32_t f32;
        flt64_t f64;
    };
    uintptr_t exception; // 异常对象句柄
    airvm_func_t func;   // 当前帧函数
    uint32_t PC;         // 程序计数器
    uint32_t reg_set[];  // 当前帧寄存器集
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

// 构建函数栈
static inline airvm_actor_t airvm_build_stack(airvm_actor_t actor, airvm_func_t func)
{
    // func 不能为 null
    assert(func != 0);
    // 计算栈帧大小
    uint32_t sfsize = sizeof(struct airvm_actuator) + sizeof(uint32_t) * func->reg_count;
    // 分配内存
    airvm_actor_t cactor = (airvm_actor_t)malloc(sfsize);
    memset(cactor, 0, sfsize);
    // 初始化
    cactor->func = func;
    cactor->prev = actor;
    return cactor;
}

#define insresult(...) printf(__VA_ARGS__)

airvm_actor_t airvm_run(airvm_actor_t actor, airvm_func_t func, uint32_t first_time)
{
    // 第一次进入函数，需要重新分配栈
    if (0 != first_time)
    {
        actor = airvm_build_stack(actor, func);
    }

    assert(actor != 0 && func != 0);

    uint16_t ins = 0;
    uint32_t *reg = actor->reg_set;
    uint32_t reg_cout = func->reg_count;
    uint16_t *insarr = func->ins_set;
    uint32_t ins_cout = func->ins_count;
    uint32_t *pc = &actor->PC;
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
        case op_jbr_r4_imm8_subop: // 8-8-16-32
        {
            uint32_t subop = ins & 0x00FF;
            uint32_t src = insarr[*pc + 1];
            int32_t offset = (insarr[*pc + 3] << 16) | insarr[*pc + 2];
            switch (subop)
            {
            case subop_jbr_ltz_i32:
            {
                int32_t shift = (int32_t)reg[src] < 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_ltz_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_lez_i32:
            {
                int32_t shift = (int32_t)reg[src] <= 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_lez_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_eqz_i32:
            {
                int32_t shift = (int32_t)reg[src] == 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_eqz_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_nez_i32:
            {
                int32_t shift = (int32_t)reg[src] != 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_nez_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_gtz_i32:
            {
                int32_t shift = (int32_t)reg[src] > 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_gtz_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_gez_i32:
            {
                int32_t shift = (int32_t)reg[src] >= 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_gez_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_eqz_u32:
            {
                int32_t shift = reg[src] == 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_eqz_u32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_nez_u32:
            {
                int32_t shift = reg[src] != 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_nez_u32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            // 64 bit
            case subop_jbr_ltz_i64:
            {
                int32_t shift = *(int64_t *)&reg[src] < 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_ltz_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_lez_i64:
            {
                int32_t shift = *(int64_t *)&reg[src] <= 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_lez_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_eqz_i64:
            {
                int32_t shift = *(int64_t *)&reg[src] == 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_eqz_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_nez_i64:
            {
                int32_t shift = *(int64_t *)&reg[src] != 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_nez_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_gtz_i64:
            {
                int32_t shift = *(int64_t *)&reg[src] > 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_gtz_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_gez_i64:
            {
                int32_t shift = *(int64_t *)&reg[src] >= 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_gez_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_eqz_u64:
            {
                int32_t shift = *(uint64_t *)&reg[src] == 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_eqz_u64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_nez_u64:
            {
                int32_t shift = *(uint64_t *)&reg[src] != 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_nez_u64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            // 32 bit flt
            case subop_jbr_ltz_f32:
            {
                int32_t shift = *(flt32_t *)&reg[src] < 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_ltz_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_lez_f32:
            {
                int32_t shift = *(flt32_t *)&reg[src] <= 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_lez_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_eqz_f32:
            {
                int32_t shift = *(flt32_t *)&reg[src] == 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_eqz_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_nez_f32:
            {
                int32_t shift = *(flt32_t *)&reg[src] != 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_nez_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_gtz_f32:
            {
                int32_t shift = *(flt32_t *)&reg[src] > 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_gtz_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_gez_f32:
            {
                int32_t shift = *(flt32_t *)&reg[src] >= 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_gez_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;

            // 64 bit flt
            case subop_jbr_ltz_f64:
            {
                int32_t shift = *(flt64_t *)&reg[src] < 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_ltz_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_lez_f64:
            {
                int32_t shift = *(flt64_t *)&reg[src] <= 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_lez_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_eqz_f64:
            {
                int32_t shift = *(flt64_t *)&reg[src] == 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_eqz_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_nez_f64:
            {
                int32_t shift = *(flt64_t *)&reg[src] != 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_nez_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_gtz_f64:
            {
                int32_t shift = *(flt64_t *)&reg[src] > 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_gtz_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
                continue;
            }
            break;
            case subop_jbr_gez_f64:
            {
                int32_t shift = *(flt64_t *)&reg[src] >= 0 ? offset : 4;
                *pc += shift;
                insresult("%4X: jbr_r16_imm32_gez_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                          *pc - shift, src, offset, shift, *pc);
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

    if (*pc == ins_cout)
    {
        airvm_actor_t tmp = actor->prev;
        free(actor);
        actor = tmp;
    }
    return actor;
    // 错误处理
_Error_Handle:
{
    printf("%4d: Instruction format error or unknown instruction!\n", *pc);
    exit(-1);
}
    return 0;
}

#undef insresult