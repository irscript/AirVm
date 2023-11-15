#ifndef __AIRVM_SUBOPDEF_INC__
#define __AIRVM_SUBOPDEF_INC__

enum SubOPEnum
{
    // 8 bits 常量赋值 子码
    // op subop,des,imm  : subop( imm4 )  => des
    subop_const_w32_r8_b0 = 0,     // imm 存放在寄存器的第 1 个字节
    subop_const_w32_r8_b1 = 1,     // imm 存放在寄存器的第 2 个字节
    subop_const_w32_r8_b2 = 2,     // imm 存放在寄存器的第 3 个字节
    subop_const_w32_r8_b3 = 3,     // imm 存放在寄存器的第 4 个字节
    subop_const_w32_r8_i8 = 4,     // imm 有符号扩展到 32 位
    subop_const_w32_r8_u8 = 5,     // imm 无符号扩展到 32 位
    subop_const_w32_r8_h16_i8 = 6, // imm 有符号扩展到 16 位,存放在寄存器 高 16 位
    subop_const_w32_r8_h16_u8 = 7, // imm 无符号扩展到 16 位,存放在寄存器 高 16 位
    subop_const_w32_r8_l16_i8 = 8, // imm 有符号扩展到 16 位,存放在寄存器 低 1 6位
    subop_const_w32_r8_l16_u8 = 9, // imm 无符号扩展到 16 位,存放在寄存器 低 16 位
    subop_const_w64_r8_i8 = 10,    // imm 有符号扩展到 64 位
    subop_const_w64_r8_u8 = 11,    // imm 无符号扩展到 64 位

    // -------------------------------16/32/64 bit 常量赋值子码-----------------------------
    subop_const_w32_r16_i16 = 0, // 8-8-16-16
    subop_const_w32_r16_u16 = 1, // 8-8-16-16
    subop_const_w32_r16_i32 = 2, // 8-8-16-32
    subop_const_w32_r16_u32 = 3, // 8-8-16-32
    subop_const_w32_r16_f32 = 4, // 8-8-16-32

    subop_const_w64_r16_i16 = 5,  // 8-8-16-16
    subop_const_w64_r16_u16 = 6,  // 8-8-16-16
    subop_const_w64_r16_i32 = 7,  // 8-8-16-32
    subop_const_w64_r16_u32 = 8,  // 8-8-16-32
    subop_const_w64_r16_i64 = 9,  // 8-8-16-64
    subop_const_w64_r16_u64 = 10, // 8-8-16-64
    subop_const_w64_r16_f64 = 11, // 8-8-16-64

    // -------------------------------寄存器间赋值、转换运算子码-----------------------------
    // 32 bit 赋值
    subop_mov_w32_sb0 = 0, // 获取寄存器的第 1 个字节，进行符号扩展到 32 位
    subop_mov_w32_ub0 = 1, // 获取寄存器的第 1 个字节，进行零扩展到 32 位
    subop_mov_w32_sb1 = 2, // 获取寄存器的第 2 个字节，进行符号扩展到 32 位
    subop_mov_w32_ub1 = 3, // 获取寄存器的第 2 个字节，进行零扩展到 32 位
    subop_mov_w32_sb2 = 4, // 获取寄存器的第 3 个字节，进行符号扩展到 32 位
    subop_mov_w32_ub2 = 5, // 获取寄存器的第 3 个字节，进行零扩展到 32 位
    subop_mov_w32_sb3 = 6, // 获取寄存器的第 4 个字节，进行符号扩展到 32 位
    subop_mov_w32_ub3 = 7, // 获取寄存器的第 4 个字节，进行零扩展到 32 位

    subop_mov_w32_sh16 = 8,  // 获取寄存器的高 16 位，进行符号扩展到 32 位
    subop_mov_w32_uh16 = 9,  // 获取寄存器的高 16 位，进行零扩展到 32 位
    subop_mov_w32_sl16 = 10, // 获取寄存器的低 16 位，进行符号扩展到 32 位
    subop_mov_w32_ul16 = 11, // 获取寄存器的低 16 位，进行零扩展到 32 位

    subop_mov_w32_i32 = 12, // 32 位原值拷贝传递,不过源值为 int32
    subop_mov_w32_u32 = 13, // 32 位原值拷贝传递,不过源值为 uint32
    subop_mov_w32_f32 = 14, // 32 位原值拷贝传递,不过源值为 flt32
    subop_bitcast_w32 = 15, // 32 位原值拷贝传递,不过标明是位转换

    // 64 bit 赋值
    subop_mov_w64_sb0 = 16, // 获取寄存器的第 1 个字节，进行符号扩展到 64 位
    subop_mov_w64_ub0 = 17, // 获取寄存器的第 1 个字节，进行零扩展到 64 位
    subop_mov_w64_sb1 = 18, // 获取寄存器的第 2 个字节，进行符号扩展到 64 位
    subop_mov_w64_ub1 = 19, // 获取寄存器的第 2 个字节，进行零扩展到 64 位
    subop_mov_w64_sb2 = 20, // 获取寄存器的第 3 个字节，进行符号扩展到 64 位
    subop_mov_w64_ub2 = 21, // 获取寄存器的第 3 个字节，进行零扩展到 64 位
    subop_mov_w64_sb3 = 22, // 获取寄存器的第 4 个字节，进行符号扩展到 64 位
    subop_mov_w64_ub3 = 23, // 获取寄存器的第 4 个字节，进行零扩展到 64 位

    subop_mov_w64_sh16 = 24, // 获取寄存器的高 16 位，进行符号扩展到 64 位
    subop_mov_w64_uh16 = 25, // 获取寄存器的高 16 位，进行零扩展到 64 位
    subop_mov_w64_sl16 = 26, // 获取寄存器的低 16 位，进行符号扩展到 64 位
    subop_mov_w64_ul16 = 27, // 获取寄存器的低 16 位，进行零扩展到 64 位
    
    subop_mov_w64_i64 = 28, // 64 位原值拷贝传递,不过源值为 int64
    subop_mov_w64_u64 = 29, // 64 位原值拷贝传递,不过源值为 uint64
    subop_mov_w64_f64 = 30, // 64 位原值拷贝传递,不过源值为 flt64
    subop_bitcast_w64 = 31, // 64 位原值拷贝传递,不过标明是位转换

    // 整数间类型转换
    subop_cast_i32_b64 = 32,
    subop_cast_u32_b64 = 33,
    subop_cast_b64_i32 = 34,
    subop_cast_b64_u32 = 35,

    // 浮点间类型转换
    subop_cast_f32_f64 = 36,
    subop_cast_f64_f32 = 37,

    // 整数、浮点间类型转换
    subop_cast_i32_f32 = 38,
    subop_cast_u32_f32 = 39,
    subop_cast_i32_f64 = 40,
    subop_cast_u32_f64 = 41,

    subop_cast_i64_f32 = 42,
    subop_cast_u64_f32 = 43,
    subop_cast_i64_f64 = 44,
    subop_cast_u64_f64 = 45,

    subop_cast_f32_i32 = 46,
    subop_cast_f32_u32 = 47,
    subop_cast_f32_i64 = 48,
    subop_cast_f32_u64 = 49,

    subop_cast_f64_i32 = 50,
    subop_cast_f64_u32 = 51,
    subop_cast_f64_i64 = 52,
    subop_cast_f64_u64 = 53,

    // -------------------------------数据加载、存储子码-----------------------------
    subop_load_w32_i8 = 0,
    subop_load_w32_u8 = 1,
    subop_load_w32_i16 = 2,
    subop_load_w32_u16 = 3,
    subop_load_w32_i32 = 4,
    subop_load_w32_u32 = 5,
    subop_load_w32_f32 = 6,

    subop_load_w64_i8 = 7,
    subop_load_w64_u8 = 8,
    subop_load_w64_i16 = 9,
    subop_load_w64_u16 = 10,
    subop_load_w64_i32 = 11,
    subop_load_w64_u32 = 12,
    subop_load_w64_i64 = 13,
    subop_load_w64_u64 = 14,
    subop_load_w64_f64 = 15,

    subop_load_ptr = 16,

    subop_store_w32_i8 = 17,
    subop_store_w32_u8 = 18,
    subop_store_w32_i16 = 19,
    subop_store_w32_u16 = 20,
    subop_store_w32_i32 = 21,
    subop_store_w32_u32 = 22,
    subop_store_w32_f32 = 23,

    subop_store_w64_i8 = 24,
    subop_store_w64_u8 = 25,
    subop_store_w64_i16 = 26,
    subop_store_w64_u16 = 27,
    subop_store_w64_i32 = 28,
    subop_store_w64_u32 = 29,
    subop_store_w64_i64 = 30,
    subop_store_w64_u64 = 31,
    subop_store_w64_f64 = 32,

    subop_store_ptr = 33,

    // -------------------------------数学二地址运算子码-----------------------------

    // 一元算术运算
    subop_math2_not_w32 = 0, // 32 位 按位取反
    subop_math2_not_w64,     // 64 位 按位取反

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

    subop_math2_cmpltz_u32,
    subop_math2_cmplez_u32,
    subop_math2_cmpeqz_u32,
    subop_math2_cmpnez_u32,
    subop_math2_cmpgtz_u32,
    subop_math2_cmpgez_u32,

    subop_math2_cmpltz_i64,
    subop_math2_cmplez_i64,
    subop_math2_cmpeqz_i64,
    subop_math2_cmpnez_i64,
    subop_math2_cmpgtz_i64,
    subop_math2_cmpgez_i64,

    subop_math2_cmpltz_u64,
    subop_math2_cmplez_u64,
    subop_math2_cmpeqz_u64,
    subop_math2_cmpnez_u64,
    subop_math2_cmpgtz_u64,
    subop_math2_cmpgez_u64,

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
    subop_math2_csc_f32, // 余割
    subop_math2_csc_f64,
    subop_math2_sec_f32, // 正割
    subop_math2_sec_f64,

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
    subop_math3_land_b32, // 位与
    subop_math3_land_b64,
    subop_math3_lor_b32, // 位或
    subop_math3_lor_b64,

    // 位移
    subop_math3_shl_b32, // 左移
    subop_math3_shl_b64,
    subop_math3_shr_b32, // 右移
    subop_math3_shr_b64,
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

    // 最大最小
    subop_math3_max_i32,
    subop_math3_max_u32,
    subop_math3_max_i64,
    subop_math3_max_u64,
    subop_math3_max_f32,
    subop_math3_max_f64,

    subop_math3_min_i32,
    subop_math3_min_u32,
    subop_math3_min_i64,
    subop_math3_min_u64,
    subop_math3_min_f32,
    subop_math3_min_f64,

    // ------------------分支跳转指令子码-----------------
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

    // 和 0 比较分支
    subop_jbr_ltz_i32,
    subop_jbr_lez_i32,
    subop_jbr_eqz_i32,
    subop_jbr_nez_i32,
    subop_jbr_gtz_i32,
    subop_jbr_gez_i32,

    subop_jbr_ltz_u32,
    subop_jbr_lez_u32,
    subop_jbr_eqz_u32,
    subop_jbr_nez_u32,
    subop_jbr_gtz_u32,
    subop_jbr_gez_u32,

    subop_jbr_ltz_i64,
    subop_jbr_lez_i64,
    subop_jbr_eqz_i64,
    subop_jbr_nez_i64,
    subop_jbr_gtz_i64,
    subop_jbr_gez_i64,

    subop_jbr_ltz_u64,
    subop_jbr_lez_u64,
    subop_jbr_eqz_u64,
    subop_jbr_nez_u64,
    subop_jbr_gtz_u64,
    subop_jbr_gez_u64,

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
};

#endif // __AIRVM_SUBOPDEF_INC__