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
        const uint16_t op = ins & 0xFF00;
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
        case op_math3_r4_subop: // 8-8-8-4-4
        {
            uint32_t subop = ins & 0x00FF;
            uint32_t ins2 = insarr[*pc + 1];
            uint32_t des = (ins2 & 0xFF00) >> 8;
            uint32_t src = (ins2 & 0x00F0) >> 4;
            uint32_t src2 = (ins2 & 0x000F);
            switch (subop)
            {
            case subop_math3_add_i32:
            {
                *(int32_t *)&reg[des] = (int32_t)reg[src] + (int32_t)reg[src2];
                insresult("%4X: add_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_sub_i32:
            {
                *(int32_t *)&reg[des] = (int32_t)reg[src] - (int32_t)reg[src2];
                insresult("%4X: sub_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mul_i32:
            {
                *(int32_t *)&reg[des] = (int32_t)reg[src] * (int32_t)reg[src2];
                insresult("%4X: mul_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_div_i32:
            {
                *(int32_t *)&reg[des] = (int32_t)reg[src] / (int32_t)reg[src2];
                insresult("%4X: div_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mod_i32:
            {
                *(int32_t *)&reg[des] = (int32_t)reg[src] % (int32_t)reg[src2];
                insresult("%4X: mod_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_math3_add_u32:
            {
                *(uint32_t *)&reg[des] = (uint32_t)reg[src] + (uint32_t)reg[src2];
                insresult("%4X: add_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %u\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_sub_u32:
            {
                *(uint32_t *)&reg[des] = (uint32_t)reg[src] - (uint32_t)reg[src2];
                insresult("%4X: sub_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %u\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mul_u32:
            {
                *(uint32_t *)&reg[des] = (uint32_t)reg[src] * (uint32_t)reg[src2];
                insresult("%4X: mul_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %u\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_div_u32:
            {
                *(uint32_t *)&reg[des] = (uint32_t)reg[src] / (uint32_t)reg[src2];
                insresult("%4X: div_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %u\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mod_u32:
            {
                *(uint32_t *)&reg[des] = (uint32_t)reg[src] % (uint32_t)reg[src2];
                insresult("%4X: mod_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %u\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_math3_add_i64:
            {
                *(int64_t *)&reg[des] = *(int64_t *)&reg[src] + *(int64_t *)&reg[src2];
                insresult("%4X: add_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %lld\n",
                          *pc, des, src, src2, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_sub_i64:
            {
                *(int64_t *)&reg[des] = *(int64_t *)&reg[src] - *(int64_t *)&reg[src2];
                insresult("%4X: sub_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %lld\n",
                          *pc, des, src, src2, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mul_i64:
            {
                *(int64_t *)&reg[des] = *(int64_t *)&reg[src] * *(int64_t *)&reg[src2];
                insresult("%4X: mul_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %lld\n",
                          *pc, des, src, src2, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_div_i64:
            {
                *(int64_t *)&reg[des] = *(int64_t *)&reg[src] / *(int64_t *)&reg[src2];
                insresult("%4X: div_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %lld\n",
                          *pc, des, src, src2, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mod_i64:
            {
                *(int64_t *)&reg[des] = *(int64_t *)&reg[src] % *(int64_t *)&reg[src2];
                insresult("%4X: mod_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %lld\n",
                          *pc, des, src, src2, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_math3_add_u64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src] + *(uint64_t *)&reg[src2];
                insresult("%4X: add_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %llu\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_sub_u64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src] - *(uint64_t *)&reg[src2];
                insresult("%4X: sub_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %llu\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mul_u64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src] * *(uint64_t *)&reg[src2];
                insresult("%4X: mul_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %llu\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_div_u64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src] / *(uint64_t *)&reg[src2];
                insresult("%4X: div_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %llu\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mod_u64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src] % *(uint64_t *)&reg[src2];
                insresult("%4X: mod_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %llu\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_math3_add_f32:
            {
                *(flt32_t *)&reg[des] = *(flt32_t *)&reg[src] + *(flt32_t *)&reg[src2];
                insresult("%4X: add_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %f\n",
                          *pc, des, src, src2, *(flt32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_sub_f32:
            {
                *(flt32_t *)&reg[des] = *(flt32_t *)&reg[src] - *(flt32_t *)&reg[src2];
                insresult("%4X: sub_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %f\n",
                          *pc, des, src, src2, *(flt32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mul_f32:
            {
                *(flt32_t *)&reg[des] = *(flt32_t *)&reg[src] * *(flt32_t *)&reg[src2];
                insresult("%4X: mul_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %f\n",
                          *pc, des, src, src2, *(flt32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_div_f32:
            {
                *(flt32_t *)&reg[des] = *(flt32_t *)&reg[src] / *(flt32_t *)&reg[src2];
                insresult("%4X: div_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %f\n",
                          *pc, des, src, src2, *(flt32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mod_f32:
            {
                *(flt32_t *)&reg[des] = fmodf(*(flt32_t *)&reg[src], *(flt32_t *)&reg[src2]);
                insresult("%4X: mod_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %f\n",
                          *pc, des, src, src2, *(flt32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_math3_add_f64:
            {
                *(flt64_t *)&reg[des] = *(flt64_t *)&reg[src] + *(flt64_t *)&reg[src2];
                insresult("%4X: add_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %lf\n",
                          *pc, des, src, src2, *(flt64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_sub_f64:
            {
                *(flt64_t *)&reg[des] = *(flt64_t *)&reg[src] - *(flt64_t *)&reg[src2];
                insresult("%4X: sub_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %lf\n",
                          *pc, des, src, src2, *(flt64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mul_f64:
            {
                *(flt64_t *)&reg[des] = *(flt64_t *)&reg[src] * *(flt64_t *)&reg[src2];
                insresult("%4X: mul_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %lf\n",
                          *pc, des, src, src2, *(flt64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_div_f64:
            {
                *(flt64_t *)&reg[des] = *(flt64_t *)&reg[src] / *(flt64_t *)&reg[src2];
                insresult("%4X: div_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %lf\n",
                          *pc, des, src, src2, *(flt64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_mod_f64:
            {
                *(flt64_t *)&reg[des] = fmod(*(flt64_t *)&reg[src], *(flt64_t *)&reg[src2]);
                insresult("%4X: mod_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %lf\n",
                          *pc, des, src, src2, *(flt64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;

            // 逻辑与、或
            case subop_math3_land_b32:
            {
                reg[des] = *(uint32_t *)&reg[src] && *(uint32_t *)&reg[src2];
                insresult("%4X: land_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_land_b64:
            {
                reg[des] = *(uint64_t *)&reg[src] && *(uint64_t *)&reg[src2];
                insresult("%4X: land_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_lor_b32:
            {
                reg[des] = *(uint32_t *)&reg[src] || *(uint32_t *)&reg[src2];
                insresult("%4X: lor_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_lor_b64:
            {
                reg[des] = *(uint64_t *)&reg[src] || *(uint64_t *)&reg[src2];
                insresult("%4X: lor_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            // 位移
            case subop_math3_shl_b32:
            {
                reg[des] = reg[src] << reg[src2];
                insresult("%4X: shl_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_shl_b64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src] << *(uint64_t *)&reg[src2];
                insresult("%4X: shl_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_lshr_b32:
            {
                reg[des] = reg[src] >> reg[src2];
                insresult("%4X: lshr_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_lshr_b64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src] >> *(uint64_t *)&reg[src2];
                insresult("%4X: lshr_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_ashr_b32:
            {
                reg[des] = (int32_t)reg[src] >> (int32_t)reg[src2];
                insresult("%4X: ashr_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_ashr_b64:
            {
                *(int64_t *)&reg[des] = *(int64_t *)&reg[src] >> *(int64_t *)&reg[src2];
                insresult("%4X: ashr_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            // 循环左移
            case subop_math3_rol_b32:
            {
                uint32_t value = reg[src];
                uint32_t shift = reg[src2] & 0x1Fu;

                reg[des] = (value << shift) | (value >> (32u - shift));
                insresult("%4X: rol_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_rol_b64:
            {
                uint64_t value = *(uint64_t *)&reg[src];
                uint32_t shift = reg[src2] & 0x3Fu;

                *(uint64_t *)&reg[des] = (value << shift) | (value >> (64u - shift));
                insresult("%4X: rol_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            // 循环右移
            case subop_math3_ror_b32:
            {
                uint32_t value = reg[src];
                uint32_t shift = reg[src2] & 0x1Fu;

                reg[des] = (value >> shift) | (value << (32u - shift));
                insresult("%4X: ror_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_ror_b64:
            {
                uint64_t value = *(uint64_t *)&reg[src];
                uint32_t shift = reg[src2] & 0x3Fu;

                *(uint64_t *)&reg[des] = (value >> shift) | (value << (64u - shift));
                insresult("%4X: ror_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
                // 位与、或、异或
            case subop_math3_and_b32:
            {
                reg[des] = (uint32_t)reg[src] & (uint32_t)reg[src2];
                insresult("%4X: and_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_and_b64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src] & *(uint64_t *)&reg[src2];
                insresult("%4X: and_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_or_b32:
            {
                reg[des] = (uint32_t)reg[src] | (uint32_t)reg[src2];
                insresult("%4X: or_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_or_b64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src] | *(uint64_t *)&reg[src2];
                insresult("%4X: or_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_xor_b32:
            {
                reg[des] = (uint32_t)reg[src] ^ (uint32_t)reg[src2];
                insresult("%4X: xor_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_xor_b64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src] ^ *(uint64_t *)&reg[src2];
                insresult("%4X: xor_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;

            // 位与非、或非、异或非
            case subop_math3_andn_b32:
            {
                reg[des] = ~((uint32_t)reg[src] & (uint32_t)reg[src2]);
                insresult("%4X: andn_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_andn_b64:
            {
                *(uint64_t *)&reg[des] = ~(*(uint64_t *)&reg[src] & *(uint64_t *)&reg[src2]);
                insresult("%4X: andn_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_orn_b32:
            {
                reg[des] = ~((uint32_t)reg[src] | (uint32_t)reg[src2]);
                insresult("%4X: orn_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_orn_b64:
            {
                *(uint64_t *)&reg[des] = ~(*(uint64_t *)&reg[src] | *(uint64_t *)&reg[src2]);
                insresult("%4X: orn_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_xorn_b32:
            {
                reg[des] = ~((uint32_t)reg[src] ^ (uint32_t)reg[src2]);
                insresult("%4X: xorn_r4_b32  \tr%d, \tr%d \t, \tr%d \tresult: 0x%X\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_xorn_b64:
            {
                *(uint64_t *)&reg[des] = ~(*(uint64_t *)&reg[src] ^ *(uint64_t *)&reg[src2]);
                insresult("%4X: xorn_r4_b64  \tr%d, \tr%d \t, \tr%d \tresult: 0x%llX\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;

            // 逻辑比较
            case subop_math3_cmplt_i32:
            {
                reg[des] = *(int32_t *)&reg[src] < *(int32_t *)&reg[src2];
                insresult("%4X: cmplt_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmple_i32:
            {
                reg[des] = *(int32_t *)&reg[src] <= *(int32_t *)&reg[src2];
                insresult("%4X: cmple_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpeq_i32:
            {
                reg[des] = *(int32_t *)&reg[src] == *(int32_t *)&reg[src2];
                insresult("%4X: cmpeq_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpne_i32:
            {
                reg[des] = *(int32_t *)&reg[src] != *(int32_t *)&reg[src2];
                insresult("%4X: cmpne_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpgt_i32:
            {
                reg[des] = *(int32_t *)&reg[src] > *(int32_t *)&reg[src2];
                insresult("%4X: cmpgt_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpge_i32:
            {
                reg[des] = *(int32_t *)&reg[src] >= *(int32_t *)&reg[src2];
                insresult("%4X: cmpge_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_math3_cmplt_u32:
            {
                reg[des] = *(uint32_t *)&reg[src] < *(uint32_t *)&reg[src2];
                insresult("%4X: cmplt_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmple_u32:
            {
                reg[des] = *(uint32_t *)&reg[src] <= *(uint32_t *)&reg[src2];
                insresult("%4X: cmple_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpeq_u32:
            {
                reg[des] = *(uint32_t *)&reg[src] == *(uint32_t *)&reg[src2];
                insresult("%4X: cmpeq_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpne_u32:
            {
                reg[des] = *(uint32_t *)&reg[src] != *(uint32_t *)&reg[src2];
                insresult("%4X: cmpne_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpgt_u32:
            {
                reg[des] = *(uint32_t *)&reg[src] > *(uint32_t *)&reg[src2];
                insresult("%4X: cmpgt_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpge_u32:
            {
                reg[des] = *(uint32_t *)&reg[src] >= *(uint32_t *)&reg[src2];
                insresult("%4X: cmpge_r4_u32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_math3_cmplt_i64:
            {
                reg[des] = *(int64_t *)&reg[src] < *(int64_t *)&reg[src2];
                insresult("%4X: cmplt_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmple_i64:
            {
                reg[des] = *(int64_t *)&reg[src] <= *(int64_t *)&reg[src2];
                insresult("%4X: cmple_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpeq_i64:
            {
                reg[des] = *(int64_t *)&reg[src] == *(int64_t *)&reg[src2];
                insresult("%4X: cmpeq_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpne_i64:
            {
                reg[des] = *(int64_t *)&reg[src] != *(int64_t *)&reg[src2];
                insresult("%4X: cmpne_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpgt_i64:
            {
                reg[des] = *(int64_t *)&reg[src] > *(int64_t *)&reg[src2];
                insresult("%4X: cmpgt_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpge_i64:
            {
                reg[des] = *(int64_t *)&reg[src] >= *(int64_t *)&reg[src2];
                insresult("%4X: cmpge_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_math3_cmplt_u64:
            {
                reg[des] = *(uint64_t *)&reg[src] < *(uint64_t *)&reg[src2];
                insresult("%4X: cmplt_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmple_u64:
            {
                reg[des] = *(uint64_t *)&reg[src] <= *(uint64_t *)&reg[src2];
                insresult("%4X: cmple_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpeq_u64:
            {
                reg[des] = *(uint64_t *)&reg[src] == *(uint64_t *)&reg[src2];
                insresult("%4X: cmpeq_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpne_u64:
            {
                reg[des] = *(uint64_t *)&reg[src] != *(uint64_t *)&reg[src2];
                insresult("%4X: cmpne_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpgt_u64:
            {
                reg[des] = *(uint64_t *)&reg[src] > *(uint64_t *)&reg[src2];
                insresult("%4X: cmpgt_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpge_u64:
            {
                reg[des] = *(uint64_t *)&reg[src] >= *(uint64_t *)&reg[src2];
                insresult("%4X: cmpge_r4_u64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_math3_cmplt_f32:
            {
                reg[des] = *(flt32_t *)&reg[src] < *(flt32_t *)&reg[src2];
                insresult("%4X: cmplt_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmple_f32:
            {
                reg[des] = *(flt32_t *)&reg[src] <= *(flt32_t *)&reg[src2];
                insresult("%4X: cmple_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpeq_f32:
            {
                reg[des] = *(flt32_t *)&reg[src] == *(flt32_t *)&reg[src2];
                insresult("%4X: cmpeq_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpne_f32:
            {
                reg[des] = *(flt32_t *)&reg[src] != *(flt32_t *)&reg[src2];
                insresult("%4X: cmpne_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpgt_f32:
            {
                reg[des] = *(flt32_t *)&reg[src] > *(flt32_t *)&reg[src2];
                insresult("%4X: cmpgt_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpge_f32:
            {
                reg[des] = *(flt32_t *)&reg[src] >= *(flt32_t *)&reg[src2];
                insresult("%4X: cmpge_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_math3_cmplt_f64:
            {
                reg[des] = *(flt64_t *)&reg[src] < *(flt64_t *)&reg[src2];
                insresult("%4X: cmplt_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmple_f64:
            {
                reg[des] = *(flt64_t *)&reg[src] <= *(flt64_t *)&reg[src2];
                insresult("%4X: cmple_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpeq_f64:
            {
                reg[des] = *(flt64_t *)&reg[src] == *(flt64_t *)&reg[src2];
                insresult("%4X: cmpeq_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpne_f64:
            {
                reg[des] = *(flt64_t *)&reg[src] != *(flt64_t *)&reg[src2];
                insresult("%4X: cmpne_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpgt_f64:
            {
                reg[des] = *(flt64_t *)&reg[src] > *(flt64_t *)&reg[src2];
                insresult("%4X: cmpgt_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_cmpge_f64:
            {
                reg[des] = *(flt64_t *)&reg[src] >= *(flt64_t *)&reg[src2];
                insresult("%4X: cmpge_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            // 最大
            case subop_math3_max_i32:
            {
                *(int32_t *)&reg[des] = __max(*(int32_t *)&reg[src], *(int32_t *)&reg[src2]);
                insresult("%4X: max_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, *(int32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_max_u32:
            {
                *(uint32_t *)&reg[des] = __max(*(uint32_t *)&reg[src], *(uint32_t *)&reg[src2]);
                insresult("%4X: max_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %u\n",
                          *pc, des, src, src2, *(uint32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_max_i64:
            {
                *(int64_t *)&reg[des] = __max(*(int64_t *)&reg[src], *(int64_t *)&reg[src2]);
                insresult("%4X: max_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %lld\n",
                          *pc, des, src, src2, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_max_u64:
            {
                *(uint64_t *)&reg[des] = __max(*(uint64_t *)&reg[src], *(uint64_t *)&reg[src2]);
                insresult("%4X: max_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %llu\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_max_f32:
            {
                *(flt32_t *)&reg[des] = __max(*(flt32_t *)&reg[src], *(flt32_t *)&reg[src2]);
                insresult("%4X: max_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %f\n",
                          *pc, des, src, src2, *(flt32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_max_f64:
            {
                *(flt64_t *)&reg[des] = __max(*(flt64_t *)&reg[src], *(flt64_t *)&reg[src2]);
                insresult("%4X: max_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %lf\n",
                          *pc, des, src, src2, *(flt64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
                // 最小
            case subop_math3_min_i32:
            {
                *(int32_t *)&reg[des] = __min(*(int32_t *)&reg[src], *(int32_t *)&reg[src2]);
                insresult("%4X: min_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %d\n",
                          *pc, des, src, src2, *(int32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_min_u32:
            {
                *(uint32_t *)&reg[des] = __min(*(uint32_t *)&reg[src], *(uint32_t *)&reg[src2]);
                insresult("%4X: min_r4_i32  \tr%d, \tr%d \t, \tr%d \tresult: %u\n",
                          *pc, des, src, src2, *(uint32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_min_i64:
            {
                *(int64_t *)&reg[des] = __min(*(int64_t *)&reg[src], *(int64_t *)&reg[src2]);
                insresult("%4X: min_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %lld\n",
                          *pc, des, src, src2, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_min_u64:
            {
                *(uint64_t *)&reg[des] = __min(*(uint64_t *)&reg[src], *(uint64_t *)&reg[src2]);
                insresult("%4X: min_r4_i64  \tr%d, \tr%d \t, \tr%d \tresult: %llu\n",
                          *pc, des, src, src2, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_min_f32:
            {
                *(flt32_t *)&reg[des] = __min(*(flt32_t *)&reg[src], *(flt32_t *)&reg[src2]);
                insresult("%4X: min_r4_f32  \tr%d, \tr%d \t, \tr%d \tresult: %f\n",
                          *pc, des, src, src2, *(flt32_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_math3_min_f64:
            {
                *(flt64_t *)&reg[des] = __min(*(flt64_t *)&reg[src], *(flt64_t *)&reg[src2]);
                insresult("%4X: min_r4_f64  \tr%d, \tr%d \t, \tr%d \tresult: %lf\n",
                          *pc, des, src, src2, *(flt64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;

            // subop 默认处理
            default:
                goto _Error_Handle;
                break;
            }
        };
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