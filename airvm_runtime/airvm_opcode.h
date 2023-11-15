#ifndef __AIRVM_OPCODE_INC__
#define __AIRVM_OPCODE_INC__

// 操作码定义
#ifndef opval
#define opval(val) val << 8
#endif
enum OPEnum
{
    op_nop = 0, // 空操作，只为对齐使用

    // 4 bit 常量赋值: 8-4-4
    op_const_w32_r4_i4 = opval(1), // op des,imm  : signed_ext( imm4 )  => des
    op_const_w32_r4_u4 = opval(2), // op des,imm  : imm4 => des
    op_const_w64_r4_i4 = opval(3), // op des,imm  : signed_ext( imm4 ) => des
    op_const_w64_r4_u4 = opval(4), // op des,imm  : imm4 => des

    // 8 bit 常量赋值：8-8-8-8
    op_const_r8_subop = opval(5), // op subop,des,imm  : subop( imm4 )  => des : 8-8-8-8

    // 16 bit 常量赋值：8-8-16
    op_const_w32_r8_i16 = opval(6), // op des,imm  : signed_ext( imm16 ) => des
    op_const_w32_r8_u16 = opval(7), // op des,imm  : imm16 => des
    op_const_w64_r8_i16 = opval(8), // op des,imm  : signed_ext( imm16 ) => des
    op_const_w64_r8_u16 = opval(9), // op des,imm  : imm16 => des
    // 放置到寄存器的高、低16位
    op_const_w32_r8_h16 = opval(10), // op des,imm  : imm16 => des.H16
    op_const_w32_r8_l16 = opval(11), // op des,imm  : imm16 => des.L16

    // 32/64 bit 常量赋值：8-8-32/8-8-64
    op_const_w32_r8_i32 = opval(12), // op des,imm  : imm32 => des
    op_const_w32_r8_u32 = opval(13), // op des,imm  : imm32 => des
    op_const_w32_r8_f32 = opval(14), // op des,imm  : imm32 => des
    op_const_w64_r8_i64 = opval(15), // op des,imm  : imm32 => des
    op_const_w64_r8_u64 = opval(16), // op des,imm  : imm32 => des
    op_const_w64_r8_f64 = opval(17), // op des,imm  : imm32 => des

    // 16/32/64 bit 常量赋值：8-8-16-16/8-8-16-32/8-8-16-64
    op_const_r16_subop = opval(18), // op subop,des,src  : src => des

    // 寄存器间赋值：8-4-4
    op_mov_w32_r4_i32 = opval(19), // op des,src  : src => des  8-4-4
    op_mov_w32_r4_u32 = opval(20), // op des,src  : src => des  8-4-4
    op_mov_w32_r4_f32 = opval(21), // op des,src  : src => des  8-4-4
    op_mov_w64_r4_i64 = opval(22), // op des,src  : src => des  8-4-4
    op_mov_w64_r4_u64 = opval(23), // op des,src  : src => des  8-4-4
    op_mov_w64_r4_f64 = opval(24), // op des,src  : src => des  8-4-4

    // 寄存器间赋值
    op_mov_r8_subop = opval(25),  // op subop,des,src  : src => des :8-8-8-8
    op_mov_r16_subop = opval(26), // op subop,des,src  : src => des :8-8-16-16
    /* 子码定义：赋值 、类型转换等*/

    // 数据加载、存储: op subop,des,src,offset
    op_ldst_r4_subop = opval(27),  // 8-8-4-4-4-[4]
    op_ldst_r8_subop = opval(28),  // 8-8-8-8-8-[8]
    op_ldst_r16_subop = opval(29), // 8-8-16-16-16

    // 数学二地址码：
    op_math2_r8_subop = opval(30),  // op subop,des,src  : src => des :8-8-8-8
    op_math2_r16_subop = opval(31), // op subop,des,src  : src => des :8-8-16-16
    /* 子码定义：赋值 、类型转换、一元数学运算、三角运算等*/

    // 数学三地址码:
    op_math3_r4_subop = opval(32),  // op subop,des,src,src2  : src subop src2 => des 8-8-8-4-4
    op_math3_r8_subop = opval(33),  // op subop,des,src,src2  : src subop src2 => des 8-8-16-8-8
    op_math3_r16_subop = opval(34), // op subop,des,src,src2  : src subop src2 => des 8-8-16-16-16
    /*子码定义:算术运算、位运算等*/

    // 直接跳转指令 goto imm
    op_goto_i8 = opval(35),  // 有符号 8 位 相对本指令偏移 8-8
    op_goto_i24 = opval(36), // 有符号 24 位 相对本指令偏移8-24
    op_goto_i32 = opval(37), // 有符号 32 位 相对本指令偏移8-8-32

    // 分支跳转指令：jbr subop,src,src2,imm
    //  jbrz subop,src,imm
    op_jbr_r8_imm16_subop = opval(38),  // jbr subop,src,src2,imm16 : 8-8-8-8-16
    op_jbr_r8_imm32_subop = opval(39),  // jbr subop,src,src2,imm32 :  8-8-8-8-32
    op_jbr_r16_imm16_subop = opval(40), // jbr subop,src,src2,imm16 :  8-8-16-16-16
    op_jbr_r16_imm32_subop = opval(41), // jbr subop,src,src2,imm32 :  8-8-16-16-32
    /*子码定义*/

    // 返回指令
    op_return_subop = opval(42), // return subop,reg/imm  : 8-8-*
    /*子码定义*/

    // 返回值获取
    op_getret_r16_subop = opval(43), // getret subop,reg : 8-8-16
    /*子码定义*/

    // 函数调用指令 : call funcptr[argcnt](arg,arg1,arg2,arg3)
    op_call_static_func = opval(44),
};
#undef opval

// 子码定义
#include "airvm_subopdef.h"
#endif // __AIRVM_OPCODE_INC__