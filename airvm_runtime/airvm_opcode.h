#ifndef __AIRVM_OPCODE_INC__
#define __AIRVM_OPCODE_INC__

// 操作码定义

enum OPEnum
{
    op_nop = 0, // 空操作，只为对齐使用

    // 4 bit 常量赋值: 8-4-4
    op_const_w32_r4_i4, // op des,imm  : signed_ext( imm4 )  => des
    op_const_w32_r4_u4, // op des,imm  : imm4 => des
    op_const_w64_r4_i4, // op des,imm  : signed_ext( imm4 ) => des
    op_const_w64_r4_u4, // op des,imm  : imm4 => des

    // 8 bit 常量赋值：8-8-8-8
    op_const_r8_subop, // op subop,des,imm  : subop( imm4 )  => des : 8-8-8-8

    // 16 bit 常量赋值：8-8-16
    op_const_w32_r8_i16, // op des,imm  : signed_ext( imm16 ) => des
    op_const_w32_r8_u16, // op des,imm  : imm16 => des
    op_const_w64_r8_i16, // op des,imm  : signed_ext( imm16 ) => des
    op_const_w64_r8_u16, // op des,imm  : imm16 => des
    // 放置到寄存器的高、低16位
    op_const_w32_r8_h16, // op des,imm  : imm16 => des.H16
    op_const_w32_r8_l16, // op des,imm  : imm16 => des.L16

    // 32/64 bit 常量赋值：8-8-32/8-8-64
    op_const_w32_r8_i32, // op des,imm  : imm32 => des
    op_const_w32_r8_u32, // op des,imm  : imm32 => des
    op_const_w32_r8_f32, // op des,imm  : imm32 => des

    op_const_w64_r8_i32, // op des,imm  : imm32 => des
    op_const_w64_r8_u32, // op des,imm  : imm32 => des
    op_const_w64_r8_i64, // op des,imm  : imm32 => des
    op_const_w64_r8_u64, // op des,imm  : imm32 => des
    op_const_w64_r8_f64, // op des,imm  : imm32 => des

    // 16/32/64 bit 常量赋值：8-8-16-16/8-8-16-32/8-8-16-64
    op_const_r16_subop, // op subop,des,src  : src => des

    // 寄存器间赋值：8-4-4
    op_mov_w32_r4_i32, // op des,src  : src => des  8-4-4
    op_mov_w32_r4_u32, // op des,src  : src => des  8-4-4
    op_mov_w32_r4_f32, // op des,src  : src => des  8-4-4
    op_mov_w64_r4_i64, // op des,src  : src => des  8-4-4
    op_mov_w64_r4_u64, // op des,src  : src => des  8-4-4
    op_mov_w64_r4_f64, // op des,src  : src => des  8-4-4

    // 寄存器间赋值
    op_mov_r8_subop,  // op subop,des,src  : src => des :8-8-8-8
    op_mov_r16_subop, // op subop,des,src  : src => des :8-8-16-16
    /* 子码定义：赋值 、类型转换等*/

    // 数学二地址码：
    op_math2_r8_subop,  // op subop,des,src  : src => des :8-8-8-8
    op_math2_r16_subop, // op subop,des,src  : src => des :8-8-16-16
    /* 子码定义：一元数学运算、三角运算等*/

    // 数学三地址码:
    op_math3_r4_subop,  // op subop,des,src,src2  : src subop src2 => des 8-8-8-4-4
    op_math3_r8_subop,  // op subop,des,src,src2  : src subop src2 => des 8-8-16-8-8
    op_math3_r16_subop, // op subop,des,src,src2  : src subop src2 => des 8-8-16-16-16
    /*子码定义:算术运算、位运算等*/

    // 直接跳转指令 goto imm
    op_goto_i8,  // 有符号 8 位 相对本指令偏移 8-8
    op_goto_i24, // 有符号 24 位 相对本指令偏移8-24
    op_goto_i32, // 有符号 32 位 相对本指令偏移8-8-32

    // 跳表跳转 goto ir imm
    // op_goto_tab,

    // 分支跳转指令：jbrz subop,src,imm
    op_jbrz_r4_imm12_subop,  // jbr subop,src,imm12 : 8-8-4-12
    op_jbrz_r8_imm8_subop,   // jbr subop,src,imm8 : 8-8-8-8
    op_jbrz_r8_imm24_subop,  // jbr subop,src,imm24 :  8-8-8-24
    op_jbrz_r16_imm16_subop, // jbr subop,src,imm16 :  8-8-16-16
    op_jbrz_r16_imm32_subop, // jbr subop,src,imm32 :  8-8-16-32
    /*子码定义*/

    // 分支跳转指令：jbr subop,src,src2,imm
    op_jbr_r4_imm8_subop,   // jbr subop,src,src2,imm8 : 8-8-4-4-8
    op_jbr_r8_imm16_subop,  // jbr subop,src,src2,imm16 : 8-8-8-8-16
    op_jbr_r8_imm32_subop,  // jbr subop,src,src2,imm32 :  8-8-8-8-32
    op_jbr_r16_imm16_subop, // jbr subop,src,src2,imm16 :  8-8-16-16-16
    op_jbr_r16_imm32_subop, // jbr subop,src,src2,imm32 :  8-8-16-16-32
    /*子码定义*/

    // 返回指令
    op_return_subop, // return subop,reg/imm  : 8-8-*
    /*子码定义*/

    // 返回值获取
    op_getret_subop, // getret subop,reg : 8-8-16
    /*子码定义*/

    // 函数相关指令
    op_func_subop, // func subop,funcptr[argcnt](arg,arg1,arg2,...)
    /*子码定义*/

    // 内存分配
    // 没有GC引用,
    // 内存大小寄存器使用 uintptr—t，和地址所占的空间大小一致
    op_memory_alloc_r8,  // 分配内存：op des,size : 8-8-16
    op_memory_free_r8,   // 释放内存：op des      : 8-8
    op_memory_alloc_r16, // 分配内存：op des,size : 8-[8]-16-16
    op_memory_free_r16,  // 释放内存：op des      : 8-[8]-16

    // 无偏移
    // 数据加载、存储: op subop,des,src
    op_ldst_r8_subop,  // 8-8-8-8
    op_ldst_r16_subop, // 8-8-16-16

    // 偏移值在寄存器中
    // 数据加载: op subop,des,src,offset
    // 数据存储: op subop,des,offset,src
    // offset代表的寄存器是 uintptr_t 的值
    op_ldst_r4_reg_subop,  // 8-8-8-4-4
    op_ldst_r8_reg_subop,  // 8-8-16-8-8
    op_ldst_r16_reg_subop, // 8-8-16-16-16

    // 偏移值在立即数中
    // 数据加载、存储: op subop,des,src,offset
    // offset代表的立即数是无符号的值
    op_ldst_r4_imm8_subop,   // 8-8-4-4-8, imm8
    op_ldst_r8_imm16_subop,  // 8-8-8-8-16, imm16
    op_ldst_r16_imm16_subop, // 8-8-16-16-16,imm16
    op_ldst_r16_imm32_subop, // 8-8-16-16-32,imm32

    // 有GC引用
    op_memory_new_obj_r8,  // 分配普通对象: op des,typeserial : 8-8-32
    op_memory_new_obj_r16, // 分配普通对象: op des,typeserial : 8-[8]-16-32

    op_memory_grab_obj_r8,  // 引用：op des : 8-8
    op_memory_grab_obj_r16, // 引用：op des : 8-[8]-16

    op_memory_drop_obj_r8,  // 释放：op des : 8-8
    op_memory_drop_obj_r16, // 释放：op des : 8-[8]-16

    op_memory_lock_obj_r8,  // 锁定：op des : 8-8
    op_memory_lock_obj_r16, // 锁定：op des : 8-[8]-16

    op_memory_unlock_obj_r8,  // 解锁：op des : 8-8
    op_memory_unlock_obj_r16, // 解锁：op des : 8-[8]-16

    // cols表示数组的维度,op cols,typeserial,des,col,col2,...coln
    op_memory_new_array_r8,  // 分配数组对象 :8-8-32-8-8-8-...-8
    op_memory_new_array_r16, // 分配数组对象 :8-8-32-16-16-16...-16

    // 获取数组的维度值 op col,des,src
    op_array_get_length_r8,  // op col,des,src : 8-8-8-8
    op_array_get_length_r16, // op col,des,src : 8-8-16-16

    // 检查数组维度值是否溢出,op cols,des,src,col,col2,...coln
    op_array_check_cols_r8,  // 8-8-8-8-...-8
    op_array_check_cols_r16, // 8-8-16-16-...-16

    // 计算数组的维度偏移值,只计算偏移索引，不计算类型
    // op cols,des,col,col2,...coln
    op_array_cols_offset_r8,  // 8-8-8-8-8-...-8
    op_array_cols_offset_r16, // 8-8-16-16-...-16

    // 获取数组中的值，偏移值为索引
    op_array_get_data_r8_subop,  // op subop,des,src,offset : 8-8-8-8-16
    op_array_get_data_r16_subop, // op subop,des,src,offset : 8-8-16-16-16
};

// 子码定义
#include "airvm_subopdef.h"
#endif // __AIRVM_OPCODE_INC__