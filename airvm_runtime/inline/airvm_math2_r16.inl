// 数学二地址码：op subop,des,src  : src => des :8-8-16-16

case op_math2_r16_subop:
{
    uint32_t subop = ins & 0x00FF;
    uint32_t des = insarr[*pc + 1];
    uint32_t src = insarr[*pc + 2];
    switch (subop)
    {
        // 按位取反
    case subop_math2_not_w32:
    {
        reg[des] = ~reg[src];
        insresult("%4X: not_r16_w32  \tr%d, \tr%d \tresult: 0x%X\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_not_w64:
    {
        *(uint64_t *)&reg[des] = ~(*(uint64_t *)&reg[src]);
        insresult("%4X: not_r16_w64 \tr%d, \tr%d \tresult: 0x%llX\n",
                  *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    // 符号取反
    case subop_math2_neg_i32:
    {
        *(int32_t *)&reg[des] = -(*(int32_t *)&reg[src]);
        insresult("%4X: neg_r16_i32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_neg_i64:
    {
        *(int64_t *)&reg[des] = -(*(int64_t *)&reg[src]);
        insresult("%4X: neg_r16_i64 \tr%d, \tr%d \tresult: %lld\n",
                  *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_neg_f32:
    {
        *(flt32_t *)&reg[des] = -(*(flt32_t *)&reg[src]);
        insresult("%4X: neg_r16_f32 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_neg_f64:
    {
        *(flt64_t *)&reg[des] = -(*(flt64_t *)&reg[src]);
        insresult("%4X: neg_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    // 取绝对值
    case subop_math2_abs_i32:
    {
        *(int32_t *)&reg[des] = abs(*(int32_t *)&reg[src]);
        insresult("%4X: abs_r16_i32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_abs_i64:
    {
        *(int64_t *)&reg[des] = _abs64(*(int64_t *)&reg[src]);
        insresult("%4X: abs_r16_i64 \tr%d, \tr%d \tresult: %lld\n",
                  *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_abs_f32:
    {
        reg[des] = reg[src] & (~(1u << 31));
        insresult("%4X: abs_r16_f32 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_abs_f64:
    {
        *(uint64_t *)&reg[des] = (*(uint64_t *)&reg[src]) & (~(1ull << 63));
        insresult("%4X: abs_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    // 32 位整数与 0 比较
    case subop_math2_cmpltz_i32:
    {
        reg[des] = (*(int32_t *)&reg[src]) < 0;
        insresult("%4X: cmpltz_r16_i32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmplez_i32:
    {
        reg[des] = (*(int32_t *)&reg[src]) <= 0;
        insresult("%4X: cmpltz_r16_i32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpeqz_i32:
    {
        reg[des] = (*(int32_t *)&reg[src]) == 0;
        insresult("%4X: cmpeqz_r16_i32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpnez_i32:
    {
        reg[des] = (*(int32_t *)&reg[src]) != 0;
        insresult("%4X: cmpnez_r16_i32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpgtz_i32:
    {
        reg[des] = (*(int32_t *)&reg[src]) > 0;
        insresult("%4X: cmpgtz_r16_i32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpgez_i32:
    {
        reg[des] = (*(int32_t *)&reg[src]) >= 0;
        insresult("%4X: cmpgez_r16_i32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;

        // 64 位整数与 0 比较
    case subop_math2_cmpltz_i64:
    {
        reg[des] = (*(int64_t *)&reg[src]) < 0;
        insresult("%4X: cmpltz_r16_i64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmplez_i64:
    {
        reg[des] = (*(int64_t *)&reg[src]) <= 0;
        insresult("%4X: cmpltz_r16_i64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpeqz_i64:
    {
        reg[des] = (*(int64_t *)&reg[src]) == 0;
        insresult("%4X: cmpeqz_r16_i64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpnez_i64:
    {
        reg[des] = (*(int64_t *)&reg[src]) != 0;
        insresult("%4X: cmpnez_r16_i64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpgtz_i64:
    {
        reg[des] = (*(int64_t *)&reg[src]) > 0;
        insresult("%4X: cmpgtz_r16_i64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpgez_i64:
    {
        reg[des] = (*(int64_t *)&reg[src]) >= 0;
        insresult("%4X: cmpgez_r16_i64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
        // 32 位浮点与 0 比较
    case subop_math2_cmpltz_f32:
    {
        reg[des] = (*(flt32_t *)&reg[src]) < 0;
        insresult("%4X: cmpltz_r16_f32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmplez_f32:
    {
        reg[des] = (*(flt32_t *)&reg[src]) <= 0;
        insresult("%4X: cmpltz_r16_f32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpeqz_f32:
    {
        reg[des] = (*(flt32_t *)&reg[src]) == 0;
        insresult("%4X: cmpeqz_r16_f32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpnez_f32:
    {
        reg[des] = (*(flt32_t *)&reg[src]) != 0;
        insresult("%4X: cmpnez_r16_f32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpgtz_f32:
    {
        reg[des] = (*(flt32_t *)&reg[src]) > 0;
        insresult("%4X: cmpgtz_r16_f32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpgez_f32:
    {
        reg[des] = (*(flt32_t *)&reg[src]) >= 0;
        insresult("%4X: cmpgez_r16_f32 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
        // 64 位浮点与 0 比较
    case subop_math2_cmpltz_f64:
    {
        reg[des] = (*(flt64_t *)&reg[src]) < 0;
        insresult("%4X: cmpltz_r16_f64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmplez_f64:
    {
        reg[des] = (*(flt64_t *)&reg[src]) <= 0;
        insresult("%4X: cmpltz_r16_f64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpeqz_f64:
    {
        reg[des] = (*(flt64_t *)&reg[src]) == 0;
        insresult("%4X: cmpeqz_r16_f64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpnez_f64:
    {
        reg[des] = (*(flt64_t *)&reg[src]) != 0;
        insresult("%4X: cmpnez_r16_f64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpgtz_f64:
    {
        reg[des] = (*(flt64_t *)&reg[src]) > 0;
        insresult("%4X: cmpgtz_r16_f64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cmpgez_f64:
    {
        reg[des] = (*(flt64_t *)&reg[src]) >= 0;
        insresult("%4X: cmpgez_r16_f64 \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;

    // 三角函数
    case subop_math2_sin_f32:
    {
        *(flt32_t *)&reg[des] = sinf(*(flt32_t *)&reg[src]);
        insresult("%4X: sin_r16_f64 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_sin_f64:
    {
        *(flt64_t *)&reg[des] = sin(*(flt64_t *)&reg[src]);
        insresult("%4X: sin_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cos_f32:
    {
        *(flt32_t *)&reg[des] = cosf(*(flt32_t *)&reg[src]);
        insresult("%4X: cos_r16_f64 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cos_f64:
    {
        *(flt64_t *)&reg[des] = cos(*(flt64_t *)&reg[src]);
        insresult("%4X: cos_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_tan_f32:
    {
        *(flt32_t *)&reg[des] = tanf(*(flt32_t *)&reg[src]);
        insresult("%4X: tan_r16_f64 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_tan_f64:
    {
        *(flt64_t *)&reg[des] = tan(*(flt64_t *)&reg[src]);
        insresult("%4X: tan_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cot_f32:
    {
        *(flt32_t *)&reg[des] = 1.0f / tanf(*(flt32_t *)&reg[src]);
        insresult("%4X: cot_r16_f64 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_cot_f64:
    {
        *(flt64_t *)&reg[des] = 1.0 / tan(*(flt64_t *)&reg[src]);
        insresult("%4X: cot_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_sec_f32:
    {
        *(flt32_t *)&reg[des] = 1.0f / cosf(*(flt32_t *)&reg[src]);
        insresult("%4X: sec_r16_f64 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_sec_f64:
    {
        *(flt64_t *)&reg[des] = 1.0 / cos(*(flt64_t *)&reg[src]);
        insresult("%4X: sec_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_csc_f32:
    {
        *(flt32_t *)&reg[des] = 1.0f / sinf(*(flt32_t *)&reg[src]);
        insresult("%4X: csc_r16_f64 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_csc_f64:
    {
        *(flt64_t *)&reg[des] = 1.0 / sin(*(flt64_t *)&reg[src]);
        insresult("%4X: csc_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

        // 反三角函数
    case subop_math2_asin_f32:
    {
        *(flt32_t *)&reg[des] = asinf(*(flt32_t *)&reg[src]);
        insresult("%4X: asin_r16_f64 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_asin_f64:
    {
        *(flt64_t *)&reg[des] = asin(*(flt64_t *)&reg[src]);
        insresult("%4X: asin_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_acos_f32:
    {
        *(flt32_t *)&reg[des] = acosf(*(flt32_t *)&reg[src]);
        insresult("%4X: acos_r16_f64 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_acos_f64:
    {
        *(flt64_t *)&reg[des] = cos(*(flt64_t *)&reg[src]);
        insresult("%4X: acos_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_atan_f32:
    {
        *(flt32_t *)&reg[des] = atanf(*(flt32_t *)&reg[src]);
        insresult("%4X: atan_r16_f64 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_atan_f64:
    {
        *(flt64_t *)&reg[des] = atan(*(flt64_t *)&reg[src]);
        insresult("%4X: atan_r16_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_acot_f32:
    {
        *(flt32_t *)&reg[des] = atanf(1.0f / *(flt32_t *)&reg[src]);
        insresult("%4X: acot_r16_f64 \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_math2_acot_f64:
    {
        *(flt64_t *)&reg[des] = atan(1.0 / *(flt64_t *)&reg[src]);
        insresult("%4X: acot_r8_f64 \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
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