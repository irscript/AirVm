#include "airins_emiter.h"

int main(int argc, const char *argv[])
{
    airvm_code_file_t code;
    Emiter emiter(code);

    // 预设值
    emiter.nop(); // 寄存器计数
    emiter.nop(); // 参数计数
    emiter.nop(); // 指令条数
    emiter.nop();

    float f32 = 3.14159;
    double f64 = 9.45679235;

    // 开始填充指令
    /*
     // 4 bit 常量赋值: 8-4-4
       emiter.const_r4_imm4(op_const_w32_r4_i4, 0, -2);
       emiter.const_r4_imm4(op_const_w32_r4_u4, 1, 15);
       emiter.const_r4_imm4(op_const_w64_r4_i4, 2, -1);
       emiter.const_r4_imm4(op_const_w64_r4_u4, 3, 15);

      // 8 bit 常量赋值：8-8-8-8
      emiter.const_r8_imm8(subop_const_w32_r8_b0, 0, 0x10);
      emiter.const_r8_imm8(subop_const_w32_r8_b1, 1, 0x11);
      emiter.const_r8_imm8(subop_const_w32_r8_b2, 2, 0x12);
      emiter.const_r8_imm8(subop_const_w32_r8_b3, 3, 0x13);

      emiter.const_r8_imm8(subop_const_w32_r8_i8, 5, -1);
      emiter.const_r8_imm8(subop_const_w32_r8_u8, 6, -1);

      emiter.const_r8_imm8(subop_const_w32_r8_h16_i8, 0, -1);
      emiter.const_r8_imm8(subop_const_w32_r8_h16_u8, 1, -1);
      emiter.const_r8_imm8(subop_const_w32_r8_l16_i8, 2, -1);
      emiter.const_r8_imm8(subop_const_w32_r8_l16_u8, 3, -1);

      emiter.const_r8_imm8(subop_const_w64_r8_i8, 5, -1);
      emiter.const_r8_imm8(subop_const_w64_r8_u8, 6, -1);

     // 16 bit 常量赋值：8-8-16
     emiter.const_r8_imm16(op_const_w32_r8_i16, 0, -1);
     emiter.const_r8_imm16(op_const_w32_r8_u16, 1, -1);
     emiter.const_r8_imm16(op_const_w64_r8_i16, 2, -1);
     emiter.const_r8_imm16(op_const_w64_r8_u16, 3, -1);

     emiter.const_r8_imm16(op_const_w32_r8_h16, 4, -1);
     emiter.const_r8_imm16(op_const_w32_r8_l16, 5, -1);

     // 32/64 bit 常量赋值：8-8-32/8-8-64

     emiter.const_r8_imm32(op_const_w32_r8_i32, 0, -1);
     emiter.const_r8_imm32(op_const_w32_r8_u32, 1, -1);
     emiter.const_r8_imm32(op_const_w32_r8_f32, 2, *(uint32_t *)&f32);

     emiter.const_r8_imm64(op_const_w64_r8_i64, 0, -256);
     emiter.const_r8_imm64(op_const_w64_r8_u64, 1, 256);
     emiter.const_r8_imm64(op_const_w64_r8_f64, 2, *(uint64_t *)&f64);

     // 16/32/64 bit 常量赋值：8-8-16-16/8-8-16-32/8-8-16-64
     emiter.const_r16_imm16(subop_const_w32_r16_i16, 0, -456);
     emiter.const_r16_imm16(subop_const_w32_r16_u16, 1, -1);
     emiter.const_r16_imm32(subop_const_w32_r16_i32, 2, -456);
     emiter.const_r16_imm32(subop_const_w32_r16_u32, 3, -1);
     emiter.const_r16_imm32(subop_const_w32_r16_f32, 4, *(uint32_t *)&f32);

     emiter.const_r16_imm16(subop_const_w64_r16_i16, 0, -456);
     emiter.const_r16_imm16(subop_const_w64_r16_u16, 1, -1);
     emiter.const_r16_imm32(subop_const_w64_r16_i32, 2, -456);
     emiter.const_r16_imm32(subop_const_w64_r16_u32, 3, -1);
     emiter.const_r16_imm64(subop_const_w64_r16_i64, 2, -456);
     emiter.const_r16_imm64(subop_const_w64_r16_u64, 3, -1);
     emiter.const_r16_imm64(subop_const_w64_r16_f64, 4, *(uint64_t *)&f64);
     // 寄存器间赋值：8-4-4
     emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, -1);
     emiter.mov_r4(op_mov_w32_r4_i32, 1, 0);
     emiter.mov_r4(op_mov_w32_r4_u32, 2, 0);

     emiter.const_r16_imm32(subop_const_w32_r16_f32, 3, *(uint32_t *)&f32);
     emiter.mov_r4(op_mov_w32_r4_f32, 4, 3);

     emiter.const_r16_imm64(subop_const_w64_r16_u64, 5, -1);
     emiter.mov_r4(op_mov_w64_r4_i64, 7, 5);
     emiter.mov_r4(op_mov_w64_r4_u64, 9, 5);

     emiter.const_r16_imm64(subop_const_w64_r16_f64, 11, *(uint64_t *)&f64);
     emiter.mov_r4(op_mov_w64_r4_f64, 13, 11);
 */
    // 寄存器间赋值: op subop,des,src  : src => des :8-8-8-8
    emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, -1);                // 0
    emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&f32); // 1
    emiter.const_r16_imm64(subop_const_w64_r16_u64, 2, -1);                // 2~3
    emiter.const_r16_imm64(subop_const_w64_r16_f64, 4, *(uint64_t *)&f64); // 4~5

    emiter.const_r16_imm64(subop_const_w64_r16_u64, 16, 8); // 16~17

    /*
       emiter.mov_r8(subop_mov_w32_sb0, 6, 0);
       emiter.mov_r8(subop_mov_w32_ub0, 6, 0);
       emiter.mov_r8(subop_mov_w32_sb1, 6, 0);
       emiter.mov_r8(subop_mov_w32_ub1, 6, 0);
       emiter.mov_r8(subop_mov_w32_sb2, 6, 0);
       emiter.mov_r8(subop_mov_w32_ub2, 6, 0);
       emiter.mov_r8(subop_mov_w32_sb3, 6, 0);
       emiter.mov_r8(subop_mov_w32_ub3, 6, 0);

       emiter.mov_r8(subop_mov_w32_sh16, 6, 0);
       emiter.mov_r8(subop_mov_w32_uh16, 6, 0);
       emiter.mov_r8(subop_mov_w32_sl16, 6, 0);
       emiter.mov_r8(subop_mov_w32_ul16, 6, 0);

       emiter.mov_r8(subop_mov_w32_i32, 6, 0);
       emiter.mov_r8(subop_mov_w32_u32, 6, 0);
       emiter.mov_r8(subop_mov_w32_f32, 6, 1);
       emiter.mov_r8(subop_bitcast_w32, 6, 1);

       emiter.mov_r8(subop_mov_w64_sb0, 6, 0);
       emiter.mov_r8(subop_mov_w64_ub0, 6, 0);
       emiter.mov_r8(subop_mov_w64_sb1, 6, 0);
       emiter.mov_r8(subop_mov_w64_ub1, 6, 0);
       emiter.mov_r8(subop_mov_w64_sb2, 6, 0);
       emiter.mov_r8(subop_mov_w64_ub2, 6, 0);
       emiter.mov_r8(subop_mov_w64_sb3, 6, 0);
       emiter.mov_r8(subop_mov_w64_ub3, 6, 0);

       emiter.mov_r8(subop_mov_w64_sh16, 6, 0);
       emiter.mov_r8(subop_mov_w64_uh16, 6, 0);
       emiter.mov_r8(subop_mov_w64_sl16, 6, 0);
       emiter.mov_r8(subop_mov_w64_ul16, 6, 0);

       emiter.mov_r8(subop_mov_w64_i64, 6, 2);
       emiter.mov_r8(subop_mov_w64_u64, 6, 2);
       emiter.mov_r8(subop_mov_w64_f64, 6, 4);
       emiter.mov_r8(subop_bitcast_w64, 6, 4);


       emiter.mov_r8(subop_cast_i32_to_i64, 6, 0);
       emiter.mov_r8(subop_cast_u32_to_u64, 8, 0);
       emiter.mov_r8(subop_cast_i64_to_i32, 10, 6);
       emiter.mov_r8(subop_cast_u64_to_u32, 10, 8);

       emiter.mov_r8(subop_cast_f32_to_f64, 6, 1);
       emiter.mov_r8(subop_cast_f64_to_f32, 8, 6);


       emiter.mov_r8(subop_cast_i32_to_f32, 6, 0);
       emiter.mov_r8(subop_cast_u32_to_f32, 8, 0);
       emiter.mov_r8(subop_cast_i32_to_f64, 6, 0);
       emiter.mov_r8(subop_cast_u32_to_f64, 6, 0);

       emiter.mov_r8(subop_cast_i64_to_f32, 6, 2);
       emiter.mov_r8(subop_cast_u64_to_f32, 8, 2);
       emiter.mov_r8(subop_cast_i64_to_f64, 6, 2);
       emiter.mov_r8(subop_cast_u64_to_f64, 6, 2);

       emiter.mov_r8(subop_cast_f32_to_i32, 6, 1);
       emiter.mov_r8(subop_cast_f32_to_u32, 8, 1);
       emiter.mov_r8(subop_cast_f32_to_i64, 6, 1);
       emiter.mov_r8(subop_cast_f32_to_u64, 6, 1);

       emiter.mov_r8(subop_cast_f64_to_i32, 6, 4);
       emiter.mov_r8(subop_cast_f64_to_u32, 8, 4);
       emiter.mov_r8(subop_cast_f64_to_i64, 6, 4);
       emiter.mov_r8(subop_cast_f64_to_u64, 6, 4);

    emiter.mov_r16(subop_mov_w32_sb0, 6, 0);
    emiter.mov_r16(subop_mov_w32_ub0, 6, 0);
    emiter.mov_r16(subop_mov_w32_sb1, 6, 0);
    emiter.mov_r16(subop_mov_w32_ub1, 6, 0);
    emiter.mov_r16(subop_mov_w32_sb2, 6, 0);
    emiter.mov_r16(subop_mov_w32_ub2, 6, 0);
    emiter.mov_r16(subop_mov_w32_sb3, 6, 0);
    emiter.mov_r16(subop_mov_w32_ub3, 6, 0);

    emiter.mov_r16(subop_mov_w32_sh16, 6, 0);
    emiter.mov_r16(subop_mov_w32_uh16, 6, 0);
    emiter.mov_r16(subop_mov_w32_sl16, 6, 0);
    emiter.mov_r16(subop_mov_w32_ul16, 6, 0);

    emiter.mov_r16(subop_mov_w32_i32, 6, 0);
    emiter.mov_r16(subop_mov_w32_u32, 6, 0);
    emiter.mov_r16(subop_mov_w32_f32, 6, 1);
    emiter.mov_r16(subop_bitcast_w32, 6, 1);

    emiter.mov_r16(subop_mov_w64_sb0, 6, 0);
    emiter.mov_r16(subop_mov_w64_ub0, 6, 0);
    emiter.mov_r16(subop_mov_w64_sb1, 6, 0);
    emiter.mov_r16(subop_mov_w64_ub1, 6, 0);
    emiter.mov_r16(subop_mov_w64_sb2, 6, 0);
    emiter.mov_r16(subop_mov_w64_ub2, 6, 0);
    emiter.mov_r16(subop_mov_w64_sb3, 6, 0);
    emiter.mov_r16(subop_mov_w64_ub3, 6, 0);

    emiter.mov_r16(subop_mov_w64_sh16, 6, 0);
    emiter.mov_r16(subop_mov_w64_uh16, 6, 0);
    emiter.mov_r16(subop_mov_w64_sl16, 6, 0);
    emiter.mov_r16(subop_mov_w64_ul16, 6, 0);

    emiter.mov_r16(subop_mov_w64_i64, 6, 2);
    emiter.mov_r16(subop_mov_w64_u64, 6, 2);
    emiter.mov_r16(subop_mov_w64_f64, 6, 4);
    emiter.mov_r16(subop_bitcast_w64, 6, 4);

    emiter.mov_r16(subop_cast_i32_to_i64, 6, 0);
    emiter.mov_r16(subop_cast_u32_to_u64, 8, 0);
    emiter.mov_r16(subop_cast_i64_to_i32, 10, 6);
    emiter.mov_r16(subop_cast_u64_to_u32, 10, 8);

    emiter.mov_r16(subop_cast_f32_to_f64, 6, 1);
    emiter.mov_r16(subop_cast_f64_to_f32, 8, 6);

    emiter.mov_r16(subop_cast_i32_to_f32, 6, 0);
    emiter.mov_r16(subop_cast_u32_to_f32, 8, 0);
    emiter.mov_r16(subop_cast_i32_to_f64, 6, 0);
    emiter.mov_r16(subop_cast_u32_to_f64, 6, 0);

    emiter.mov_r16(subop_cast_i64_to_f32, 6, 2);
    emiter.mov_r16(subop_cast_u64_to_f32, 8, 2);
    emiter.mov_r16(subop_cast_i64_to_f64, 6, 2);
    emiter.mov_r16(subop_cast_u64_to_f64, 6, 2);

    emiter.mov_r16(subop_cast_f32_to_i32, 6, 1);
    emiter.mov_r16(subop_cast_f32_to_u32, 8, 1);
    emiter.mov_r16(subop_cast_f32_to_i64, 6, 1);
    emiter.mov_r16(subop_cast_f32_to_u64, 6, 1);

    emiter.mov_r16(subop_cast_f64_to_i32, 6, 4);
    emiter.mov_r16(subop_cast_f64_to_u32, 8, 4);
    emiter.mov_r16(subop_cast_f64_to_i64, 6, 4);
    emiter.mov_r16(subop_cast_f64_to_u64, 6, 4);
{
    emiter.math_r8(subop_math2_not_w32, 6, 0);
    emiter.math_r8(subop_math2_not_w64, 6, 2);

    emiter.math_r8(subop_math2_neg_i32, 6, 0);
    emiter.math_r8(subop_math2_abs_i32, 6, 0);

    emiter.math_r8(subop_math2_neg_i64, 6, 2);
    emiter.math_r8(subop_math2_abs_i64, 6, 2);

    emiter.math_r8(subop_math2_neg_f32, 6, 1);
    emiter.math_r8(subop_math2_abs_f32, 6, 6);

    emiter.math_r8(subop_math2_neg_f64, 6, 4);
    emiter.math_r8(subop_math2_abs_f64, 6, 6);
    }
{
    emiter.math_r8(subop_math2_cmpltz_i32, 6, 0);
    emiter.math_r8(subop_math2_cmplez_i32, 6, 0);
    emiter.math_r8(subop_math2_cmpeqz_i32, 6, 0);
    emiter.math_r8(subop_math2_cmpnez_i32, 6, 0);
    emiter.math_r8(subop_math2_cmpgtz_i32, 6, 0);
    emiter.math_r8(subop_math2_cmpgez_i32, 6, 0);

    emiter.math_r8(subop_math2_cmpltz_i64, 6, 2);
    emiter.math_r8(subop_math2_cmplez_i64, 6, 2);
    emiter.math_r8(subop_math2_cmpeqz_i64, 6, 2);
    emiter.math_r8(subop_math2_cmpnez_i64, 6, 2);
    emiter.math_r8(subop_math2_cmpgtz_i64, 6, 2);
    emiter.math_r8(subop_math2_cmpgez_i64, 6, 2);

    emiter.math_r8(subop_math2_cmpltz_f32, 6, 1);
    emiter.math_r8(subop_math2_cmplez_f32, 6, 1);
    emiter.math_r8(subop_math2_cmpeqz_f32, 6, 1);
    emiter.math_r8(subop_math2_cmpnez_f32, 6, 1);
    emiter.math_r8(subop_math2_cmpgtz_f32, 6, 1);
    emiter.math_r8(subop_math2_cmpgez_f32, 6, 1);

    emiter.math_r8(subop_math2_cmpltz_f64, 6, 4);
    emiter.math_r8(subop_math2_cmplez_f64, 6, 4);
    emiter.math_r8(subop_math2_cmpeqz_f64, 6, 4);
    emiter.math_r8(subop_math2_cmpnez_f64, 6, 4);
    emiter.math_r8(subop_math2_cmpgtz_f64, 6, 4);
    emiter.math_r8(subop_math2_cmpgez_f64, 6, 4);
    }
{
    emiter.math_r16(subop_math2_not_w32, 6, 0);
    emiter.math_r16(subop_math2_not_w64, 6, 2);

    emiter.math_r16(subop_math2_neg_i32, 6, 0);
    emiter.math_r16(subop_math2_abs_i32, 6, 0);

    emiter.math_r16(subop_math2_neg_i64, 6, 2);
    emiter.math_r16(subop_math2_abs_i64, 6, 2);

    emiter.math_r16(subop_math2_neg_f32, 6, 1);
    emiter.math_r16(subop_math2_abs_f32, 6, 6);

    emiter.math_r16(subop_math2_neg_f64, 6, 4);
    emiter.math_r16(subop_math2_abs_f64, 6, 6);
    }
    {
    emiter.math_r16(subop_math2_cmpltz_i32, 6, 0);
    emiter.math_r16(subop_math2_cmplez_i32, 6, 0);
    emiter.math_r16(subop_math2_cmpeqz_i32, 6, 0);
    emiter.math_r16(subop_math2_cmpnez_i32, 6, 0);
    emiter.math_r16(subop_math2_cmpgtz_i32, 6, 0);
    emiter.math_r16(subop_math2_cmpgez_i32, 6, 0);

    emiter.math_r16(subop_math2_cmpltz_i64, 6, 2);
    emiter.math_r16(subop_math2_cmplez_i64, 6, 2);
    emiter.math_r16(subop_math2_cmpeqz_i64, 6, 2);
    emiter.math_r16(subop_math2_cmpnez_i64, 6, 2);
    emiter.math_r16(subop_math2_cmpgtz_i64, 6, 2);
    emiter.math_r16(subop_math2_cmpgez_i64, 6, 2);

    emiter.math_r16(subop_math2_cmpltz_f32, 6, 1);
    emiter.math_r16(subop_math2_cmplez_f32, 6, 1);
    emiter.math_r16(subop_math2_cmpeqz_f32, 6, 1);
    emiter.math_r16(subop_math2_cmpnez_f32, 6, 1);
    emiter.math_r16(subop_math2_cmpgtz_f32, 6, 1);
    emiter.math_r16(subop_math2_cmpgez_f32, 6, 1);

    emiter.math_r16(subop_math2_cmpltz_f64, 6, 4);
    emiter.math_r16(subop_math2_cmplez_f64, 6, 4);
    emiter.math_r16(subop_math2_cmpeqz_f64, 6, 4);
    emiter.math_r16(subop_math2_cmpnez_f64, 6, 4);
    emiter.math_r16(subop_math2_cmpgtz_f64, 6, 4);
    emiter.math_r16(subop_math2_cmpgez_f64, 6, 4);
    }

    {
        emiter.math3_r4(subop_math3_add_i32, 6, 0, 0);
        emiter.math3_r4(subop_math3_sub_i32, 6, 0, 0);
        emiter.math3_r4(subop_math3_mul_i32, 6, 0, 0);
        emiter.math3_r4(subop_math3_div_i32, 6, 0, 0);
        emiter.math3_r4(subop_math3_mod_i32, 6, 0, 0);

        emiter.math3_r4(subop_math3_add_u32, 6, 0, 0);
        emiter.math3_r4(subop_math3_sub_u32, 6, 0, 0);
        emiter.math3_r4(subop_math3_mul_u32, 6, 0, 0);
        emiter.math3_r4(subop_math3_div_u32, 6, 0, 0);
        emiter.math3_r4(subop_math3_mod_u32, 6, 0, 0);

        emiter.math3_r4(subop_math3_add_i64, 6, 2, 2);
        emiter.math3_r4(subop_math3_sub_i64, 6, 2, 2);
        emiter.math3_r4(subop_math3_mul_i64, 6, 2, 2);
        emiter.math3_r4(subop_math3_div_i64, 6, 2, 2);
        emiter.math3_r4(subop_math3_mod_i64, 6, 2, 2);

        emiter.math3_r4(subop_math3_add_u64, 6, 2, 2);
        emiter.math3_r4(subop_math3_sub_u64, 6, 2, 2);
        emiter.math3_r4(subop_math3_mul_u64, 6, 2, 2);
        emiter.math3_r4(subop_math3_div_u64, 6, 2, 2);
        emiter.math3_r4(subop_math3_mod_u64, 6, 2, 2);

        emiter.math3_r4(subop_math3_add_f32, 6, 1, 1);
        emiter.math3_r4(subop_math3_sub_f32, 6, 1, 1);
        emiter.math3_r4(subop_math3_mul_f32, 6, 1, 1);
        emiter.math3_r4(subop_math3_div_f32, 6, 1, 1);
        emiter.math3_r4(subop_math3_mod_f32, 6, 1, 1);

        emiter.math3_r4(subop_math3_add_f64, 6, 4, 4);
        emiter.math3_r4(subop_math3_sub_f64, 6, 4, 4);
        emiter.math3_r4(subop_math3_mul_f64, 6, 4, 4);
        emiter.math3_r4(subop_math3_div_f64, 6, 4, 4);
        emiter.math3_r4(subop_math3_mod_f64, 6, 4, 4);
    }
    {
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, 15);                // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&f32); // 1
        emiter.const_r16_imm64(subop_const_w64_r16_u64, 2, 15);                // 2~3
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 4, *(uint64_t *)&f64); // 4~5

        emiter.const_r16_imm64(subop_const_w64_r16_u64, 14, 8); // 14~15

        emiter.math3_r4(subop_math3_land_b32, 6, 0, 20);
        emiter.math3_r4(subop_math3_land_b64, 6, 2, 20);
        emiter.math3_r4(subop_math3_lor_b32, 6, 0, 20);
        emiter.math3_r4(subop_math3_lor_b64, 6, 2, 20);

        emiter.math3_r4(subop_math3_shl_b32, 6, 0, 14);
        emiter.math3_r4(subop_math3_shl_b64, 6, 2, 14);
        emiter.math3_r4(subop_math3_lshr_b32, 6, 0, 14);
        emiter.math3_r4(subop_math3_lshr_b64, 6, 2, 14);
        emiter.math3_r4(subop_math3_ashr_b32, 6, 0, 14);
        emiter.math3_r4(subop_math3_ashr_b64, 6, 2, 14);

        emiter.math3_r4(subop_math3_rol_b32, 6, 0, 14);
        emiter.math3_r4(subop_math3_rol_b64, 6, 2, 14);
        emiter.math3_r4(subop_math3_ror_b32, 6, 0, 14);
        emiter.math3_r4(subop_math3_ror_b64, 6, 2, 14);
    }
    {
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, -1);                // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&f32); // 1
        emiter.const_r16_imm64(subop_const_w64_r16_u64, 2, -1);                // 2~3
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 4, *(uint64_t *)&f64); // 4~5

        emiter.math3_r4(subop_math3_and_b32, 6, 0, 0);
        emiter.math3_r4(subop_math3_and_b64, 6, 2, 2);
        emiter.math3_r4(subop_math3_or_b32, 6, 0, 0);
        emiter.math3_r4(subop_math3_or_b64, 6, 2, 2);
        emiter.math3_r4(subop_math3_xor_b32, 6, 0, 0);
        emiter.math3_r4(subop_math3_xor_b64, 6, 2, 2);

        emiter.math3_r4(subop_math3_andn_b32, 6, 0, 0);
        emiter.math3_r4(subop_math3_andn_b64, 6, 2, 2);
        emiter.math3_r4(subop_math3_orn_b32, 6, 0, 0);
        emiter.math3_r4(subop_math3_orn_b64, 6, 2, 2);
        emiter.math3_r4(subop_math3_xorn_b32, 6, 0, 0);
        emiter.math3_r4(subop_math3_xorn_b64, 6, 2, 2);
    }
    {
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, -1); // 0
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 1, 15); // 1

        emiter.math3_r4(subop_math3_cmplt_i32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmple_i32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpeq_i32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpne_i32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpgt_i32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpge_i32, 6, 0, 1);

        emiter.math3_r4(subop_math3_max_i32, 6, 0, 1);
        emiter.math3_r4(subop_math3_min_i32, 6, 0, 1);

        emiter.math3_r4(subop_math3_cmplt_u32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmple_u32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpeq_u32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpne_u32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpgt_u32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpge_u32, 6, 0, 1);

        emiter.math3_r4(subop_math3_max_u32, 6, 0, 1);
        emiter.math3_r4(subop_math3_min_u32, 6, 0, 1);
    }
    {
        emiter.const_r16_imm32(subop_const_w64_r16_i32, 0, -1); // 0
        emiter.const_r16_imm32(subop_const_w64_r16_u32, 2, 15); // 2

        emiter.math3_r4(subop_math3_cmplt_i64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmple_i64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpeq_i64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpne_i64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpgt_i64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpge_i64, 6, 0, 2);

        emiter.math3_r4(subop_math3_max_i64, 6, 0, 2);
        emiter.math3_r4(subop_math3_min_i64, 6, 0, 2);

        emiter.math3_r4(subop_math3_cmplt_u64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmple_u64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpeq_u64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpne_u64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpgt_u64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpge_u64, 6, 0, 2);

        emiter.math3_r4(subop_math3_max_u64, 6, 0, 2);
        emiter.math3_r4(subop_math3_min_u64, 6, 0, 2);
    }
    {
        float fneg = -1.2345, flt = 15.6789;
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 0, *(uint32_t *)&fneg); // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&flt);  // 1

        emiter.math3_r4(subop_math3_cmplt_f32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmple_f32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpeq_f32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpne_f32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpgt_f32, 6, 0, 1);
        emiter.math3_r4(subop_math3_cmpge_f32, 6, 0, 1);

        emiter.math3_r4(subop_math3_max_f32, 6, 0, 1);
        emiter.math3_r4(subop_math3_min_f32, 6, 0, 1);

        double dfneg = -1.2345, dflt = 15.6789;
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 0, *(uint64_t *)&dfneg); // 0
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 2, *(uint64_t *)&dflt);  // 1

        emiter.math3_r4(subop_math3_cmplt_f64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmple_f64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpeq_f64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpne_f64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpgt_f64, 6, 0, 2);
        emiter.math3_r4(subop_math3_cmpge_f64, 6, 0, 2);

        emiter.math3_r4(subop_math3_max_f64, 6, 0, 2);
        emiter.math3_r4(subop_math3_min_f64, 6, 0, 2);
    }

    */
    /*{
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, -1);                // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&f32); // 1
        emiter.const_r16_imm64(subop_const_w64_r16_u64, 2, -1);                // 2~3
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 4, *(uint64_t *)&f64); // 4~5

        emiter.math3_r8(subop_math3_add_i32, 6, 0, 0);
        emiter.math3_r8(subop_math3_sub_i32, 6, 0, 0);
        emiter.math3_r8(subop_math3_mul_i32, 6, 0, 0);
        emiter.math3_r8(subop_math3_div_i32, 6, 0, 0);
        emiter.math3_r8(subop_math3_mod_i32, 6, 0, 0);

        emiter.math3_r8(subop_math3_add_u32, 6, 0, 0);
        emiter.math3_r8(subop_math3_sub_u32, 6, 0, 0);
        emiter.math3_r8(subop_math3_mul_u32, 6, 0, 0);
        emiter.math3_r8(subop_math3_div_u32, 6, 0, 0);
        emiter.math3_r8(subop_math3_mod_u32, 6, 0, 0);

        emiter.math3_r8(subop_math3_add_i64, 6, 2, 2);
        emiter.math3_r8(subop_math3_sub_i64, 6, 2, 2);
        emiter.math3_r8(subop_math3_mul_i64, 6, 2, 2);
        emiter.math3_r8(subop_math3_div_i64, 6, 2, 2);
        emiter.math3_r8(subop_math3_mod_i64, 6, 2, 2);

        emiter.math3_r8(subop_math3_add_u64, 6, 2, 2);
        emiter.math3_r8(subop_math3_sub_u64, 6, 2, 2);
        emiter.math3_r8(subop_math3_mul_u64, 6, 2, 2);
        emiter.math3_r8(subop_math3_div_u64, 6, 2, 2);
        emiter.math3_r8(subop_math3_mod_u64, 6, 2, 2);

        emiter.math3_r8(subop_math3_add_f32, 6, 1, 1);
        emiter.math3_r8(subop_math3_sub_f32, 6, 1, 1);
        emiter.math3_r8(subop_math3_mul_f32, 6, 1, 1);
        emiter.math3_r8(subop_math3_div_f32, 6, 1, 1);
        emiter.math3_r8(subop_math3_mod_f32, 6, 1, 1);

        emiter.math3_r8(subop_math3_add_f64, 6, 4, 4);
        emiter.math3_r8(subop_math3_sub_f64, 6, 4, 4);
        emiter.math3_r8(subop_math3_mul_f64, 6, 4, 4);
        emiter.math3_r8(subop_math3_div_f64, 6, 4, 4);
        emiter.math3_r8(subop_math3_mod_f64, 6, 4, 4);
    }
    {
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, 15);                // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&f32); // 1
        emiter.const_r16_imm64(subop_const_w64_r16_u64, 2, 15);                // 2~3
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 4, *(uint64_t *)&f64); // 4~5

        emiter.const_r16_imm64(subop_const_w64_r16_u64, 14, 8); // 14~15

        emiter.math3_r8(subop_math3_land_b32, 6, 0, 20);
        emiter.math3_r8(subop_math3_land_b64, 6, 2, 20);
        emiter.math3_r8(subop_math3_lor_b32, 6, 0, 20);
        emiter.math3_r8(subop_math3_lor_b64, 6, 2, 20);

        emiter.math3_r8(subop_math3_shl_b32, 6, 0, 14);
        emiter.math3_r8(subop_math3_shl_b64, 6, 2, 14);
        emiter.math3_r8(subop_math3_lshr_b32, 6, 0, 14);
        emiter.math3_r8(subop_math3_lshr_b64, 6, 2, 14);
        emiter.math3_r8(subop_math3_ashr_b32, 6, 0, 14);
        emiter.math3_r8(subop_math3_ashr_b64, 6, 2, 14);

        emiter.math3_r8(subop_math3_rol_b32, 6, 0, 14);
        emiter.math3_r8(subop_math3_rol_b64, 6, 2, 14);
        emiter.math3_r8(subop_math3_ror_b32, 6, 0, 14);
        emiter.math3_r8(subop_math3_ror_b64, 6, 2, 14);
    }
    {
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, -1);                // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&f32); // 1
        emiter.const_r16_imm64(subop_const_w64_r16_u64, 2, -1);                // 2~3
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 4, *(uint64_t *)&f64); // 4~5

        emiter.math3_r8(subop_math3_and_b32, 6, 0, 0);
        emiter.math3_r8(subop_math3_and_b64, 6, 2, 2);
        emiter.math3_r8(subop_math3_or_b32, 6, 0, 0);
        emiter.math3_r8(subop_math3_or_b64, 6, 2, 2);
        emiter.math3_r8(subop_math3_xor_b32, 6, 0, 0);
        emiter.math3_r8(subop_math3_xor_b64, 6, 2, 2);

        emiter.math3_r8(subop_math3_andn_b32, 6, 0, 0);
        emiter.math3_r8(subop_math3_andn_b64, 6, 2, 2);
        emiter.math3_r8(subop_math3_orn_b32, 6, 0, 0);
        emiter.math3_r8(subop_math3_orn_b64, 6, 2, 2);
        emiter.math3_r8(subop_math3_xorn_b32, 6, 0, 0);
        emiter.math3_r8(subop_math3_xorn_b64, 6, 2, 2);
    }
    {
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, -1); // 0
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 1, 15); // 1

        emiter.math3_r8(subop_math3_cmplt_i32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmple_i32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpeq_i32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpne_i32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpgt_i32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpge_i32, 6, 0, 1);

        emiter.math3_r8(subop_math3_max_i32, 6, 0, 1);
        emiter.math3_r8(subop_math3_min_i32, 6, 0, 1);

        emiter.math3_r8(subop_math3_cmplt_u32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmple_u32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpeq_u32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpne_u32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpgt_u32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpge_u32, 6, 0, 1);

        emiter.math3_r8(subop_math3_max_u32, 6, 0, 1);
        emiter.math3_r8(subop_math3_min_u32, 6, 0, 1);
    }
    {
        emiter.const_r16_imm32(subop_const_w64_r16_i32, 0, -1); // 0
        emiter.const_r16_imm32(subop_const_w64_r16_u32, 2, 15); // 2

        emiter.math3_r8(subop_math3_cmplt_i64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmple_i64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpeq_i64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpne_i64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpgt_i64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpge_i64, 6, 0, 2);

        emiter.math3_r8(subop_math3_max_i64, 6, 0, 2);
        emiter.math3_r8(subop_math3_min_i64, 6, 0, 2);

        emiter.math3_r8(subop_math3_cmplt_u64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmple_u64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpeq_u64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpne_u64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpgt_u64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpge_u64, 6, 0, 2);

        emiter.math3_r8(subop_math3_max_u64, 6, 0, 2);
        emiter.math3_r8(subop_math3_min_u64, 6, 0, 2);
    }
    {
        float fneg = -1.2345, flt = 15.6789;
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 0, *(uint32_t *)&fneg); // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&flt);  // 1

        emiter.math3_r8(subop_math3_cmplt_f32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmple_f32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpeq_f32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpne_f32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpgt_f32, 6, 0, 1);
        emiter.math3_r8(subop_math3_cmpge_f32, 6, 0, 1);

        emiter.math3_r8(subop_math3_max_f32, 6, 0, 1);
        emiter.math3_r8(subop_math3_min_f32, 6, 0, 1);

        double dfneg = -1.2345, dflt = 15.6789;
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 0, *(uint64_t *)&dfneg); // 0
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 2, *(uint64_t *)&dflt);  // 1

        emiter.math3_r8(subop_math3_cmplt_f64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmple_f64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpeq_f64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpne_f64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpgt_f64, 6, 0, 2);
        emiter.math3_r8(subop_math3_cmpge_f64, 6, 0, 2);

        emiter.math3_r8(subop_math3_max_f64, 6, 0, 2);
        emiter.math3_r8(subop_math3_min_f64, 6, 0, 2);
    }
*/
    {
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, -1);                // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&f32); // 1
        emiter.const_r16_imm64(subop_const_w64_r16_u64, 2, -1);                // 2~3
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 4, *(uint64_t *)&f64); // 4~5

        emiter.math3_r16(subop_math3_add_i32, 6, 0, 0);
        emiter.math3_r16(subop_math3_sub_i32, 6, 0, 0);
        emiter.math3_r16(subop_math3_mul_i32, 6, 0, 0);
        emiter.math3_r16(subop_math3_div_i32, 6, 0, 0);
        emiter.math3_r16(subop_math3_mod_i32, 6, 0, 0);

        emiter.math3_r16(subop_math3_add_u32, 6, 0, 0);
        emiter.math3_r16(subop_math3_sub_u32, 6, 0, 0);
        emiter.math3_r16(subop_math3_mul_u32, 6, 0, 0);
        emiter.math3_r16(subop_math3_div_u32, 6, 0, 0);
        emiter.math3_r16(subop_math3_mod_u32, 6, 0, 0);

        emiter.math3_r16(subop_math3_add_i64, 6, 2, 2);
        emiter.math3_r16(subop_math3_sub_i64, 6, 2, 2);
        emiter.math3_r16(subop_math3_mul_i64, 6, 2, 2);
        emiter.math3_r16(subop_math3_div_i64, 6, 2, 2);
        emiter.math3_r16(subop_math3_mod_i64, 6, 2, 2);

        emiter.math3_r16(subop_math3_add_u64, 6, 2, 2);
        emiter.math3_r16(subop_math3_sub_u64, 6, 2, 2);
        emiter.math3_r16(subop_math3_mul_u64, 6, 2, 2);
        emiter.math3_r16(subop_math3_div_u64, 6, 2, 2);
        emiter.math3_r16(subop_math3_mod_u64, 6, 2, 2);

        emiter.math3_r16(subop_math3_add_f32, 6, 1, 1);
        emiter.math3_r16(subop_math3_sub_f32, 6, 1, 1);
        emiter.math3_r16(subop_math3_mul_f32, 6, 1, 1);
        emiter.math3_r16(subop_math3_div_f32, 6, 1, 1);
        emiter.math3_r16(subop_math3_mod_f32, 6, 1, 1);

        emiter.math3_r16(subop_math3_add_f64, 6, 4, 4);
        emiter.math3_r16(subop_math3_sub_f64, 6, 4, 4);
        emiter.math3_r16(subop_math3_mul_f64, 6, 4, 4);
        emiter.math3_r16(subop_math3_div_f64, 6, 4, 4);
        emiter.math3_r16(subop_math3_mod_f64, 6, 4, 4);
    }
    {
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, 15);                // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&f32); // 1
        emiter.const_r16_imm64(subop_const_w64_r16_u64, 2, 15);                // 2~3
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 4, *(uint64_t *)&f64); // 4~5

        emiter.const_r16_imm64(subop_const_w64_r16_u64, 14, 8); // 14~15

        emiter.math3_r16(subop_math3_land_b32, 6, 0, 20);
        emiter.math3_r16(subop_math3_land_b64, 6, 2, 20);
        emiter.math3_r16(subop_math3_lor_b32, 6, 0, 20);
        emiter.math3_r16(subop_math3_lor_b64, 6, 2, 20);

        emiter.math3_r16(subop_math3_shl_b32, 6, 0, 14);
        emiter.math3_r16(subop_math3_shl_b64, 6, 2, 14);
        emiter.math3_r16(subop_math3_lshr_b32, 6, 0, 14);
        emiter.math3_r16(subop_math3_lshr_b64, 6, 2, 14);
        emiter.math3_r16(subop_math3_ashr_b32, 6, 0, 14);
        emiter.math3_r16(subop_math3_ashr_b64, 6, 2, 14);

        emiter.math3_r16(subop_math3_rol_b32, 6, 0, 14);
        emiter.math3_r16(subop_math3_rol_b64, 6, 2, 14);
        emiter.math3_r16(subop_math3_ror_b32, 6, 0, 14);
        emiter.math3_r16(subop_math3_ror_b64, 6, 2, 14);
    }
    {
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, -1);                // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&f32); // 1
        emiter.const_r16_imm64(subop_const_w64_r16_u64, 2, -1);                // 2~3
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 4, *(uint64_t *)&f64); // 4~5

        emiter.math3_r16(subop_math3_and_b32, 6, 0, 0);
        emiter.math3_r16(subop_math3_and_b64, 6, 2, 2);
        emiter.math3_r16(subop_math3_or_b32, 6, 0, 0);
        emiter.math3_r16(subop_math3_or_b64, 6, 2, 2);
        emiter.math3_r16(subop_math3_xor_b32, 6, 0, 0);
        emiter.math3_r16(subop_math3_xor_b64, 6, 2, 2);

        emiter.math3_r16(subop_math3_andn_b32, 6, 0, 0);
        emiter.math3_r16(subop_math3_andn_b64, 6, 2, 2);
        emiter.math3_r16(subop_math3_orn_b32, 6, 0, 0);
        emiter.math3_r16(subop_math3_orn_b64, 6, 2, 2);
        emiter.math3_r16(subop_math3_xorn_b32, 6, 0, 0);
        emiter.math3_r16(subop_math3_xorn_b64, 6, 2, 2);
    }
    {
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 0, -1); // 0
        emiter.const_r16_imm32(subop_const_w32_r16_u32, 1, 15); // 1

        emiter.math3_r16(subop_math3_cmplt_i32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmple_i32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpeq_i32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpne_i32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpgt_i32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpge_i32, 6, 0, 1);

        emiter.math3_r16(subop_math3_max_i32, 6, 0, 1);
        emiter.math3_r16(subop_math3_min_i32, 6, 0, 1);

        emiter.math3_r16(subop_math3_cmplt_u32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmple_u32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpeq_u32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpne_u32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpgt_u32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpge_u32, 6, 0, 1);

        emiter.math3_r16(subop_math3_max_u32, 6, 0, 1);
        emiter.math3_r16(subop_math3_min_u32, 6, 0, 1);
    }
    {
        emiter.const_r16_imm32(subop_const_w64_r16_i32, 0, -1); // 0
        emiter.const_r16_imm32(subop_const_w64_r16_u32, 2, 15); // 2

        emiter.math3_r16(subop_math3_cmplt_i64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmple_i64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpeq_i64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpne_i64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpgt_i64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpge_i64, 6, 0, 2);

        emiter.math3_r16(subop_math3_max_i64, 6, 0, 2);
        emiter.math3_r16(subop_math3_min_i64, 6, 0, 2);

        emiter.math3_r16(subop_math3_cmplt_u64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmple_u64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpeq_u64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpne_u64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpgt_u64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpge_u64, 6, 0, 2);

        emiter.math3_r16(subop_math3_max_u64, 6, 0, 2);
        emiter.math3_r16(subop_math3_min_u64, 6, 0, 2);
    }
    {
        float fneg = -1.2345, flt = 15.6789;
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 0, *(uint32_t *)&fneg); // 0
        emiter.const_r16_imm32(subop_const_w32_r16_f32, 1, *(uint32_t *)&flt);  // 1

        emiter.math3_r16(subop_math3_cmplt_f32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmple_f32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpeq_f32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpne_f32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpgt_f32, 6, 0, 1);
        emiter.math3_r16(subop_math3_cmpge_f32, 6, 0, 1);

        emiter.math3_r16(subop_math3_max_f32, 6, 0, 1);
        emiter.math3_r16(subop_math3_min_f32, 6, 0, 1);

        double dfneg = -1.2345, dflt = 15.6789;
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 0, *(uint64_t *)&dfneg); // 0
        emiter.const_r16_imm64(subop_const_w64_r16_f64, 2, *(uint64_t *)&dflt);  // 1

        emiter.math3_r16(subop_math3_cmplt_f64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmple_f64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpeq_f64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpne_f64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpgt_f64, 6, 0, 2);
        emiter.math3_r16(subop_math3_cmpge_f64, 6, 0, 2);

        emiter.math3_r16(subop_math3_max_f64, 6, 0, 2);
        emiter.math3_r16(subop_math3_min_f64, 6, 0, 2);
    }
    // 更新值
    auto data = emiter.code.buffer.data();
    *(uint16_t *)data = 24;
    *(uint16_t *)&data[2] = 0;
    *(uint32_t *)&data[4] = ((uint32_t)emiter.code.buffer.size() - 8) / 2;

    emiter.write_to_flie("test.bc");
    return 0;
}