#ifndef __AIRVM_SUBOPDEF_INC__
#define __AIRVM_SUBOPDEF_INC__

enum SubOPEnum
{
    // 8 bits 常量赋值 子码
    // op subop,des,imm  : subop( imm4 )  => des
    subop_const_w32_r8_b0 = 0, // imm 存放在寄存器的第 1 个字节
    subop_const_w32_r8_b1,     // imm 存放在寄存器的第 2 个字节
    subop_const_w32_r8_b2,     // imm 存放在寄存器的第 3 个字节
    subop_const_w32_r8_b3,     // imm 存放在寄存器的第 4 个字节
    subop_const_w32_r8_i8,     // imm 有符号扩展到 32 位
    subop_const_w32_r8_u8,     // imm 无符号扩展到 32 位
    subop_const_w32_r8_h16_i8, // imm 有符号扩展到 16 位,存放在寄存器 高 16 位
    subop_const_w32_r8_h16_u8, // imm 无符号扩展到 16 位,存放在寄存器 高 16 位
    subop_const_w32_r8_l16_i8, // imm 有符号扩展到 16 位,存放在寄存器 低 1 6位
    subop_const_w32_r8_l16_u8, // imm 无符号扩展到 16 位,存放在寄存器 低 16 位
    subop_const_w64_r8_i8,     // imm 有符号扩展到 64 位
    subop_const_w64_r8_u8,     // imm 无符号扩展到 64 位

    // -------------------------------16/32/64 bit 常量赋值子码-----------------------------
    subop_const_w32_r16_i16 = 0, // 8-8-16-16
    subop_const_w32_r16_u16,     // 8-8-16-16
    subop_const_w32_r16_i32,     // 8-8-16-32
    subop_const_w32_r16_u32,     // 8-8-16-32
    subop_const_w32_r16_f32,     // 8-8-16-32

    subop_const_w64_r16_i16, // 8-8-16-16
    subop_const_w64_r16_u16, // 8-8-16-16
    subop_const_w64_r16_i32, // 8-8-16-32
    subop_const_w64_r16_u32, // 8-8-16-32
    subop_const_w64_r16_i64, // 8-8-16-64
    subop_const_w64_r16_u64, // 8-8-16-64
    subop_const_w64_r16_f64, // 8-8-16-64

    // -------------------------------寄存器间赋值、转换运算子码-----------------------------
    // 32 bit 赋值
    subop_mov_w32_sb0 = 0, // 获取寄存器的第 1 个字节，进行符号扩展到 32 位
    subop_mov_w32_ub0,     // 获取寄存器的第 1 个字节，进行零扩展到 32 位
    subop_mov_w32_sb1,     // 获取寄存器的第 2 个字节，进行符号扩展到 32 位
    subop_mov_w32_ub1,     // 获取寄存器的第 2 个字节，进行零扩展到 32 位
    subop_mov_w32_sb2,     // 获取寄存器的第 3 个字节，进行符号扩展到 32 位
    subop_mov_w32_ub2,     // 获取寄存器的第 3 个字节，进行零扩展到 32 位
    subop_mov_w32_sb3,     // 获取寄存器的第 4 个字节，进行符号扩展到 32 位
    subop_mov_w32_ub3,     // 获取寄存器的第 4 个字节，进行零扩展到 32 位

    subop_mov_w32_sh16, // 获取寄存器的高 16 位，进行符号扩展到 32 位
    subop_mov_w32_uh16, // 获取寄存器的高 16 位，进行零扩展到 32 位
    subop_mov_w32_sl16, // 获取寄存器的低 16 位，进行符号扩展到 32 位
    subop_mov_w32_ul16, // 获取寄存器的低 16 位，进行零扩展到 32 位

    subop_mov_w32_i32, // 32 位原值拷贝传递,不过源值为 int32
    subop_mov_w32_u32, // 32 位原值拷贝传递,不过源值为 uint32
    subop_mov_w32_f32, // 32 位原值拷贝传递,不过源值为 flt32
    subop_bitcast_w32, // 32 位原值拷贝传递,不过标明是位转换

    // 64 bit 赋值
    subop_mov_w64_sb0, // 获取寄存器的第 1 个字节，进行符号扩展到 64 位
    subop_mov_w64_ub0, // 获取寄存器的第 1 个字节，进行零扩展到 64 位
    subop_mov_w64_sb1, // 获取寄存器的第 2 个字节，进行符号扩展到 64 位
    subop_mov_w64_ub1, // 获取寄存器的第 2 个字节，进行零扩展到 64 位
    subop_mov_w64_sb2, // 获取寄存器的第 3 个字节，进行符号扩展到 64 位
    subop_mov_w64_ub2, // 获取寄存器的第 3 个字节，进行零扩展到 64 位
    subop_mov_w64_sb3, // 获取寄存器的第 4 个字节，进行符号扩展到 64 位
    subop_mov_w64_ub3, // 获取寄存器的第 4 个字节，进行零扩展到 64 位

    subop_mov_w64_sh16, // 获取寄存器的高 16 位，进行符号扩展到 64 位
    subop_mov_w64_uh16, // 获取寄存器的高 16 位，进行零扩展到 64 位
    subop_mov_w64_sl16, // 获取寄存器的低 16 位，进行符号扩展到 64 位
    subop_mov_w64_ul16, // 获取寄存器的低 16 位，进行零扩展到 64 位

    subop_mov_w64_i64, // 64 位原值拷贝传递,不过源值为 int64
    subop_mov_w64_u64, // 64 位原值拷贝传递,不过源值为 uint64
    subop_mov_w64_f64, // 64 位原值拷贝传递,不过源值为 flt64
    subop_bitcast_w64, // 64 位原值拷贝传递,不过标明是位转换

    // 整数间类型转换
    subop_cast_i32_to_i64,
    subop_cast_u32_to_u64,
    subop_cast_i64_to_i32,
    subop_cast_u64_to_u32,

    // 浮点间类型转换
    subop_cast_f32_to_f64,
    subop_cast_f64_to_f32,

    // 整数、浮点间类型转换
    subop_cast_i32_to_f32,
    subop_cast_u32_to_f32,
    subop_cast_i32_to_f64,
    subop_cast_u32_to_f64,

    subop_cast_i64_to_f32,
    subop_cast_u64_to_f32,
    subop_cast_i64_to_f64,
    subop_cast_u64_to_f64,

    subop_cast_f32_to_i32,
    subop_cast_f32_to_u32,
    subop_cast_f32_to_i64,
    subop_cast_f32_to_u64,

    subop_cast_f64_to_i32,
    subop_cast_f64_to_u32,
    subop_cast_f64_to_i64,
    subop_cast_f64_to_u64,

    // -------------------------------数学二地址运算子码-----------------------------

    // 一元算术运算
    subop_math2_not_w32 = 0, // 32 位 按位取反
    subop_math2_not_w64,     // 64 位 按位取反

    subop_math2_inv_w32, // 32 位 逻辑取反
    subop_math2_inv_w64, // 64 位 逻辑取反

    subop_math2_neg_i32, // 32 位 符号取反
    subop_math2_neg_i64, // 64 位 符号取反
    subop_math2_neg_f32, // 32 位 符号取反
    subop_math2_neg_f64, // 64 位 符号取反

    subop_math2_abs_i32, // 32 位 符号取绝对值
    subop_math2_abs_i64, // 64 位 符号取绝对值
    subop_math2_abs_f32, // 32 位 符号取绝对值
    subop_math2_abs_f64, // 64 位 符号取绝对值

    // 与 0 比较
    subop_math2_cmpltz_i32,
    subop_math2_cmplez_i32,
    subop_math2_cmpeqz_i32,
    subop_math2_cmpnez_i32,
    subop_math2_cmpgtz_i32,
    subop_math2_cmpgez_i32,

    subop_math2_cmpltz_i64,
    subop_math2_cmplez_i64,
    subop_math2_cmpeqz_i64,
    subop_math2_cmpnez_i64,
    subop_math2_cmpgtz_i64,
    subop_math2_cmpgez_i64,

    subop_math2_cmpltz_f32,
    subop_math2_cmplez_f32,
    subop_math2_cmpeqz_f32,
    subop_math2_cmpnez_f32,
    subop_math2_cmpgtz_f32,
    subop_math2_cmpgez_f32,

    subop_math2_cmpltz_f64,
    subop_math2_cmplez_f64,
    subop_math2_cmpeqz_f64,
    subop_math2_cmpnez_f64,
    subop_math2_cmpgtz_f64,
    subop_math2_cmpgez_f64,

    // 三角函数
    subop_math2_sin_f32, // 正弦
    subop_math2_sin_f64,
    subop_math2_cos_f32, // 余弦
    subop_math2_cos_f64,
    subop_math2_tan_f32, // 正切
    subop_math2_tan_f64,
    subop_math2_cot_f32, // 余切
    subop_math2_cot_f64,
    subop_math2_sec_f32, // 正割
    subop_math2_sec_f64,
    subop_math2_csc_f32, // 余割
    subop_math2_csc_f64,

    subop_math2_asin_f32, // 反正弦
    subop_math2_asin_f64,
    subop_math2_acos_f32, // 反余弦
    subop_math2_acos_f64,
    subop_math2_atan_f32, // 反正切
    subop_math2_atan_f64,
    subop_math2_acot_f32, // 反余切
    subop_math2_acot_f64,

    // --------------------------------数学三地址运算子码-----------------------
    subop_math3_add_i32 = 0,
    subop_math3_sub_i32,
    subop_math3_mul_i32,
    subop_math3_div_i32,
    subop_math3_mod_i32,

    subop_math3_add_u32,
    subop_math3_sub_u32,
    subop_math3_mul_u32,
    subop_math3_div_u32,
    subop_math3_mod_u32,

    subop_math3_add_i64,
    subop_math3_sub_i64,
    subop_math3_mul_i64,
    subop_math3_div_i64,
    subop_math3_mod_i64,

    subop_math3_add_u64,
    subop_math3_sub_u64,
    subop_math3_mul_u64,
    subop_math3_div_u64,
    subop_math3_mod_u64,

    subop_math3_add_f32,
    subop_math3_sub_f32,
    subop_math3_mul_f32,
    subop_math3_div_f32,
    subop_math3_mod_f32,

    subop_math3_add_f64,
    subop_math3_sub_f64,
    subop_math3_mul_f64,
    subop_math3_div_f64,
    subop_math3_mod_f64,

    // 逻辑与、或
    subop_math3_land_b32, // 逻辑与
    subop_math3_land_b64,
    subop_math3_lor_b32, // 逻辑或
    subop_math3_lor_b64,

    // 位移
    subop_math3_shl_b32, // 左移
    subop_math3_shl_b64,
    subop_math3_lshr_b32, // 右移
    subop_math3_lshr_b64,
    subop_math3_ashr_b32, // 算术右移
    subop_math3_ashr_b64,
    subop_math3_rol_b32, // 循环左移
    subop_math3_rol_b64,
    subop_math3_ror_b32, // 循环右移
    subop_math3_ror_b64,

    // 位与、或、异或
    subop_math3_and_b32, // 位与
    subop_math3_and_b64,
    subop_math3_or_b32, // 位或
    subop_math3_or_b64,
    subop_math3_xor_b32, // 位异或
    subop_math3_xor_b64,

    // 位与非、或非、异或非
    subop_math3_andn_b32, // 位与非
    subop_math3_andn_b64,
    subop_math3_orn_b32, // 位或非
    subop_math3_orn_b64,
    subop_math3_xorn_b32, // 位异或非
    subop_math3_xorn_b64,

    // 逻辑比较
    subop_math3_cmplt_i32,
    subop_math3_cmple_i32,
    subop_math3_cmpeq_i32,
    subop_math3_cmpne_i32,
    subop_math3_cmpgt_i32,
    subop_math3_cmpge_i32,

    subop_math3_cmplt_u32,
    subop_math3_cmple_u32,
    subop_math3_cmpeq_u32,
    subop_math3_cmpne_u32,
    subop_math3_cmpgt_u32,
    subop_math3_cmpge_u32,

    subop_math3_cmplt_i64,
    subop_math3_cmple_i64,
    subop_math3_cmpeq_i64,
    subop_math3_cmpne_i64,
    subop_math3_cmpgt_i64,
    subop_math3_cmpge_i64,

    subop_math3_cmplt_u64,
    subop_math3_cmple_u64,
    subop_math3_cmpeq_u64,
    subop_math3_cmpne_u64,
    subop_math3_cmpgt_u64,
    subop_math3_cmpge_u64,

    subop_math3_cmplt_f32,
    subop_math3_cmple_f32,
    subop_math3_cmpeq_f32,
    subop_math3_cmpne_f32,
    subop_math3_cmpgt_f32,
    subop_math3_cmpge_f32,

    subop_math3_cmplt_f64,
    subop_math3_cmple_f64,
    subop_math3_cmpeq_f64,
    subop_math3_cmpne_f64,
    subop_math3_cmpgt_f64,
    subop_math3_cmpge_f64,

    // 最大
    subop_math3_max_i32,
    subop_math3_max_u32,
    subop_math3_max_i64,
    subop_math3_max_u64,
    subop_math3_max_f32,
    subop_math3_max_f64,
    // 最小
    subop_math3_min_i32,
    subop_math3_min_u32,
    subop_math3_min_i64,
    subop_math3_min_u64,
    subop_math3_min_f32,
    subop_math3_min_f64,

    // ------------------分支跳转指令子码-----------------
    // 和 0 比较分支
    subop_jbr_ltz_i32 = 0,
    subop_jbr_lez_i32,
    subop_jbr_eqz_i32,
    subop_jbr_nez_i32,
    subop_jbr_gtz_i32,
    subop_jbr_gez_i32,

    subop_jbr_eqz_u32,
    subop_jbr_nez_u32,

    subop_jbr_ltz_i64,
    subop_jbr_lez_i64,
    subop_jbr_eqz_i64,
    subop_jbr_nez_i64,
    subop_jbr_gtz_i64,
    subop_jbr_gez_i64,

    subop_jbr_eqz_u64,
    subop_jbr_nez_u64,

    subop_jbr_ltz_f32,
    subop_jbr_lez_f32,
    subop_jbr_eqz_f32,
    subop_jbr_nez_f32,
    subop_jbr_gtz_f32,
    subop_jbr_gez_f32,

    subop_jbr_ltz_f64,
    subop_jbr_lez_f64,
    subop_jbr_eqz_f64,
    subop_jbr_nez_f64,
    subop_jbr_gtz_f64,
    subop_jbr_gez_f64,
    // src 与 src2 比较
    subop_jbr_lt_i32 = 0,
    subop_jbr_le_i32,
    subop_jbr_eq_i32,
    subop_jbr_ne_i32,
    subop_jbr_gt_i32,
    subop_jbr_ge_i32,

    subop_jbr_lt_u32,
    subop_jbr_le_u32,
    subop_jbr_eq_u32,
    subop_jbr_ne_u32,
    subop_jbr_gt_u32,
    subop_jbr_ge_u32,

    subop_jbr_lt_i64,
    subop_jbr_le_i64,
    subop_jbr_eq_i64,
    subop_jbr_ne_i64,
    subop_jbr_gt_i64,
    subop_jbr_ge_i64,

    subop_jbr_lt_u64,
    subop_jbr_le_u64,
    subop_jbr_eq_u64,
    subop_jbr_ne_u64,
    subop_jbr_gt_u64,
    subop_jbr_ge_u64,

    subop_jbr_lt_f32,
    subop_jbr_le_f32,
    subop_jbr_eq_f32,
    subop_jbr_ne_f32,
    subop_jbr_gt_f32,
    subop_jbr_ge_f32,

    subop_jbr_lt_f64,
    subop_jbr_le_f64,
    subop_jbr_eq_f64,
    subop_jbr_ne_f64,
    subop_jbr_gt_f64,
    subop_jbr_ge_f64,

    //------------------返回指令子码-----------------
    subop_return_void = 0, // 无返回值
                           // 立即数
    subop_return_i16,      // 16 bit 有符号立即数
    subop_return_u16,      // 16 bit 无符号立即数
    subop_return_i32,      // 32 bit 有符号立即数
    subop_return_u32,      // 32 bit 无符号立即数
    subop_return_i64,      // 64 bit 有符号立即数
    subop_return_u64,      // 64 bit 无符号立即数
    subop_return_f32,      // 32 bit 单浮点立即数
    subop_return_f64,      // 64 bit 双浮点立即数
                           // 寄存器
    subop_return_r16_sb0,
    subop_return_r16_ub0,
    subop_return_r16_sb1,
    subop_return_r16_ub1,
    subop_return_r16_sb2,
    subop_return_r16_ub2,
    subop_return_r16_sb3,
    subop_return_r16_ub3,

    subop_return_r16_sl16,
    subop_return_r16_ul16,
    subop_return_r16_sh16,
    subop_return_r16_uh16,

    subop_return_r16_i32,
    subop_return_r16_u32,
    subop_return_r16_i64,
    subop_return_r16_u64,
    subop_return_r16_f32,
    subop_return_r16_f64,
    subop_return_r16_ptr,

    //------------------返回值获取指令子码-----------------
    subop_getret_w32_r16_i8 = 0,
    subop_getret_w32_r16_u8,
    subop_getret_w32_r16_i16,
    subop_getret_w32_r16_u16,
    subop_getret_w32_r16_i32,
    subop_getret_w32_r16_u32,
    subop_getret_w32_r16_f32,

    subop_getret_w64_r16_i8,
    subop_getret_w64_r16_u8,
    subop_getret_w64_r16_i16,
    subop_getret_w64_r16_u16,
    subop_getret_w64_r16_i32,
    subop_getret_w64_r16_u32,
    subop_getret_w64_r16_i64,
    subop_getret_w64_r16_u64,
    subop_getret_w64_r16_f64,

    subop_getret_r16_ptr,

    //------------------函数相关指令子码-----------------
    // 主机函数调用: func subop,dllserial,funcserial,argcnt,arg,arg1,...,argn
    subop_call_r4_native_func = 0, // 8-8-16-32-4,4-4-4-...-4
    subop_call_r8_native_func,     // 8-8-16-32-8,8-8-8-...-8
    subop_call_r16_native_func,    // 8-8-16-32-16,16-16-16-...-16

    // 静态函数调用:func subop,funcserial,argcnt,arg,arg1,...,argn
    subop_call_r4_static_func,  // 8-8-32-4,4-4-4-...-4
    subop_call_r8_static_func,  // 8-8-32-8,8-8-8-...-8
    subop_call_r16_static_func, // 8-8-32-16,16-16-16-...-16

    // 成员函数调用:func subop,funcserial,argcnt,this,arg1,...,argn
    subop_call_r4_member_func,  // 8-8-32-4,4-4-4-...-4
    subop_call_r8_member_func,  // 8-8-32-8,8-8-8-...-8
    subop_call_r16_member_func, // 8-8-32-16,16-16-16-...-16

    // 虚函数调用:func subop,funcserial,argcnt,this,arg1,...,argn
    subop_call_r4_virtual_func,  // 8-8-16-4,4-4-4-...-4
    subop_call_r8_virtual_func,  // 8-8-16-8,8-8-8-...-8
    subop_call_r16_virtual_func, // 8-8-16-16,16-16-16-...-16

    // 接口函数调用:func subop,infserial,funcserial,argcnt,this,arg1,...,argn
    subop_call_r4_interface_func,  // 8-8-16-16-8,4-4-4-...-4
    subop_call_r8_interface_func,  // 8-8-16-16-8,8-8-8-...-8
    subop_call_r16_interface_func, // 8-8-16-16-16,16-16-16-...-16

    // 获取主机函数地址:func subop,dllserial,funcserial,des
    subop_get_native_func_ptr, // 8-8-16-32-16

    //  主机函数指针调用:func subop,ptr,argcnt,arg,arg1,...,argn
    subop_call_r4_native_func_ptr,  // 8-8-4-4,4-4-4-...-4
    subop_call_r8_native_func_ptr,  // 8-8-8-8,8-8-8-...-8
    subop_call_r16_native_func_ptr, // 8-8-16-16,16-16-16-...-16

    // 获取静态函数地址:func funcserial,des
    subop_get_static_func_ptr, // 8-8-32-16

    // 获取成员函数地址
    subop_get_member_func_ptr, // 8-8-32-16

    // 静态函数指针调用:func subop,ptr,argcnt,arg,arg1,...,argn
    subop_call_r4_static_func_ptr,  // 8-8-4-4,4-4-4-...-4
    subop_call_r8_static_func_ptr,  // 8-8-8-8,8-8-8-...-8
    subop_call_r16_static_func_ptr, // 8-8-16-16,16-16-16-...-16

    // 成员函数指针调用:func subop,ptr,argcnt,arg,arg1,...,argn
    subop_call_r4_member_func_ptr,  // 8-8-4-4,4-4-4-...-4
    subop_call_r8_member_func_ptr,  // 8-8-8-8,8-8-8-...-8
    subop_call_r16_member_func_ptr, // 8-8-16-16,16-16-16-...-16

   

    // -------------------------------数据加载、存储子码-----------------------------
    // op_ldst_r4_subop  ： 8-8-4-4-8
    // op_ldst_r8_subop  ： 8-8-8-8-16
    // op_ldst_r16_subop ： 8-8-16-16-16
    subop_load_w32_i8 = 0,
    subop_load_w32_u8,
    subop_load_w32_i16,
    subop_load_w32_u16,
    subop_load_w32_i32,
    subop_load_w32_u32,
    subop_load_w32_f32,

    subop_load_w64_i8,
    subop_load_w64_u8,
    subop_load_w64_i16,
    subop_load_w64_u16,
    subop_load_w64_i32,
    subop_load_w64_u32,
    subop_load_w64_i64,
    subop_load_w64_u64,
    subop_load_w64_f64,

    subop_load_ptr,

    subop_store_w32_i8,
    subop_store_w32_u8,
    subop_store_w32_i16,
    subop_store_w32_u16,
    subop_store_w32_i32,
    subop_store_w32_u32,
    subop_store_w32_f32,

    subop_store_w64_i8,
    subop_store_w64_u8,
    subop_store_w64_i16,
    subop_store_w64_u16,
    subop_store_w64_i32,
    subop_store_w64_u32,
    subop_store_w64_i64,
    subop_store_w64_u64,
    subop_store_w64_f64,

    subop_store_ptr,

    // 偏移量为立即数
    // op_ldst_r4_subop  ： 8-8-4-4-uimm8
    // op_ldst_r8_subop  ： 8-8-8-8-uimm16
    // op_ldst_r16_subop ： 8-8-16-16-uimm16

    subop_load_imm_w32_i8,
    subop_load_imm_w32_u8,
    subop_load_imm_w32_i16,
    subop_load_imm_w32_u16,
    subop_load_imm_w32_i32,
    subop_load_imm_w32_u32,
    subop_load_imm_w32_f32,

    subop_load_imm_w64_i8,
    subop_load_imm_w64_u8,
    subop_load_imm_w64_i16,
    subop_load_imm_w64_u16,
    subop_load_imm_w64_i32,
    subop_load_imm_w64_u32,
    subop_load_imm_w64_i64,
    subop_load_imm_w64_u64,
    subop_load_imm_w64_f64,

    subop_load_imm_ptr,

    subop_store_imm_w32_i8,
    subop_store_imm_w32_u8,
    subop_store_imm_w32_i16,
    subop_store_imm_w32_u16,
    subop_store_imm_w32_i32,
    subop_store_imm_w32_u32,
    subop_store_imm_w32_f32,

    subop_store_imm_w64_i8,
    subop_store_imm_w64_u8,
    subop_store_imm_w64_i16,
    subop_store_imm_w64_u16,
    subop_store_imm_w64_i32,
    subop_store_imm_w64_u32,
    subop_store_imm_w64_i64,
    subop_store_imm_w64_u64,
    subop_store_imm_w64_f64,

    subop_store_imm_ptr,
};

#endif // __AIRVM_SUBOPDEF_INC__