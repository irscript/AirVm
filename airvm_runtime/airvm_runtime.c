#include "airvm_runtime.h"
#include "airvm_opcode.h"

#include <stdatomic.h>
#include <stdio.h>

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
        case op_mov_r8_subop:
        {
            uint32_t subop = ins & 0x00FF;
            uint32_t ins2 = insarr[*pc + 1];
            uint32_t des = ins2 >> 8;
            uint32_t src = ins2 & 0xFF;

            switch (subop)
            {
                // 32 bit 赋值
            case subop_mov_w32_sb0:
            {
                reg[des] = (int32_t)((int8_t *)&reg[src])[0];
                insresult("%4X: mov_w32_r8_sb0  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w32_ub0:
            {
                reg[des] = (uint32_t)((uint8_t *)&reg[src])[0];
                insresult("%4X: mov_w32_r8_ub0  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w32_sb1:
            {
                reg[des] = (int32_t)((int8_t *)&reg[src])[1];
                insresult("%4X: mov_w32_r8_sb1  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w32_ub1:
            {
                reg[des] = (uint32_t)((uint8_t *)&reg[src])[1];
                insresult("%4X: mov_w32_r8_ub1  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w32_sb2:
            {
                reg[des] = (int32_t)((int8_t *)&reg[src])[2];
                insresult("%4X: mov_w32_r8_sb2  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w32_ub2:
            {
                reg[des] = (uint32_t)((uint8_t *)&reg[src])[2];
                insresult("%4X: mov_w32_r8_ub2  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w32_sb3:
            {
                reg[des] = (int32_t)((int8_t *)&reg[src])[3];
                insresult("%4X: mov_w32_r8_sb3  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w32_ub3:
            {
                reg[des] = (uint32_t)((uint8_t *)&reg[src])[3];
                insresult("%4X: mov_w32_r8_ub3  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_mov_w32_sh16:
            {
                reg[des] = (int32_t)((int16_t *)&reg[src])[1];
                insresult("%4X: mov_w32_r8_sh16  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w32_uh16:
            {
                reg[des] = (uint32_t)((uint16_t *)&reg[src])[1];
                insresult("%4X: mov_w32_r8_uh16  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w32_sl16:
            {
                reg[des] = (int32_t)((int16_t *)&reg[src])[0];
                insresult("%4X: mov_w32_r8_sl16  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w32_ul16:
            {
                reg[des] = (uint32_t)((uint16_t *)&reg[src])[0];
                insresult("%4X: mov_w32_r8_ul16  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_mov_w32_i32:
            {
                reg[des] = reg[src];
                insresult("%4X: mov_w32_r8_i32  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            };
            break;
            case subop_mov_w32_u32:
            {
                reg[des] = reg[src];
                insresult("%4X: mov_w32_r8_u32  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
                *pc += 2;
                continue;
            };
            break;
            case subop_mov_w32_f32:
            {
                reg[des] = reg[src];
                insresult("%4X: mov_w32_r8_f32  \tr%d, \tr%d \tresult: %f\n", *pc, des, src, *(flt32_t *)&reg[des]);
                *pc += 2;
                continue;
            };
            break;
            case subop_bitcast_w32:
            {
                reg[des] = reg[src];
                insresult("%4X: mov_w32_r8_bitcast  \tr%d, \tr%d \tresult: %d \t%u \t%f\n", *pc, des, src, reg[des], reg[des], *(flt32_t *)&reg[des]);
                *pc += 2;
                continue;
            };
            break;
                // 64 bit 赋值
            case subop_mov_w64_sb0:
            {
                *(int64_t *)&reg[des] = (int32_t)((int8_t *)&reg[src])[0];
                insresult("%4X: mov_w64_r8_sb0  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w64_ub0:
            {
                *(uint64_t *)&reg[des] = (uint32_t)((uint8_t *)&reg[src])[0];
                insresult("%4X: mov_w64_r8_ub0  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w64_sb1:
            {
                *(int64_t *)&reg[des] = (int32_t)((int8_t *)&reg[src])[1];
                insresult("%4X: mov_w64_r8_sb1  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w64_ub1:
            {
                *(uint64_t *)&reg[des] = (uint32_t)((uint8_t *)&reg[src])[1];
                insresult("%4X: mov_w64_r8_ub1  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w64_sb2:
            {
                *(int64_t *)&reg[des] = (int32_t)((int8_t *)&reg[src])[2];
                insresult("%4X: mov_w64_r8_sb2  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w64_ub2:
            {
                *(uint64_t *)&reg[des] = (uint32_t)((uint8_t *)&reg[src])[2];
                insresult("%4X: mov_w64_r8_ub2  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w64_sb3:
            {
                *(int64_t *)&reg[des] = (int32_t)((int8_t *)&reg[src])[3];
                insresult("%4X: mov_w64_r8_sb3  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w64_ub3:
            {
                *(uint64_t *)&reg[des] = (uint32_t)((uint8_t *)&reg[src])[3];
                insresult("%4X: mov_w64_r8_ub3  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_mov_w64_sh16:
            {
                *(int64_t *)&reg[des] = (int32_t)((int16_t *)&reg[src])[1];
                insresult("%4X: mov_w64_r8_sh16  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w64_uh16:
            {
                *(uint64_t *)&reg[des] = (uint32_t)((uint16_t *)&reg[src])[1];
                insresult("%4X: mov_w64_r8_uh16  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w64_sl16:
            {
                *(int64_t *)&reg[des] = (int32_t)((int16_t *)&reg[src])[0];
                insresult("%4X: mov_w64_r8_sl16  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;
            case subop_mov_w64_ul16:
            {
                *(uint64_t *)&reg[des] = (uint32_t)((uint16_t *)&reg[src])[0];
                insresult("%4X: mov_w64_r8_ul16  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            }
            break;

            case subop_mov_w64_i64:
            {
                *(int64_t *)&reg[des] = *(int64_t *)&reg[src];
                insresult("%4X: mov_w64_r8_i64  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
                *pc += 2;
                continue;
            };
            break;
            case subop_mov_w64_u64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src];
                insresult("%4X: mov_w64_r8_u64  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
                *pc += 2;
                continue;
            };
            break;
            case subop_mov_w64_f64:
            {
                *(flt64_t *)&reg[des] = *(flt64_t *)&reg[src];
                insresult("%4X: mov_w64_r8_f64  \tr%d, \tr%d \tresult: %f\n", *pc, des, src, *(flt64_t *)&reg[des]);
                *pc += 2;
                continue;
            };
            break;
            case subop_bitcast_w64:
            {
                *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src];
                insresult("%4X: mov_w64_r8_bitcast  \tr%d, \tr%d \tresult: %lld \t%llu \t%lf\n",
                          *pc, des, src, *(uint64_t *)&reg[des], *(uint64_t *)&reg[des], *(flt64_t *)&reg[des]);
                *pc += 2;
                continue;
            };
            break;

                // 整数间类型转换
            case subop_cast_i32_b64:
            {
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