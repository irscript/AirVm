// 分支跳转指令：jbrz subop,src,imm
case op_jbrz_r16_imm16_subop: // 8-8-16-16
{
    uint32_t subop = ins & 0x00FF;
    uint32_t src = insarr[*pc + 1];
    int32_t offset = (int16_t)insarr[*pc + 2];
    switch (subop)
    {
    case subop_jbr_ltz_i32:
    {
        int32_t shift = (int32_t)reg[src] < 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_ltz_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_lez_i32:
    {
        int32_t shift = (int32_t)reg[src] <= 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_lez_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_i32:
    {
        int32_t shift = (int32_t)reg[src] == 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_eqz_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_i32:
    {
        int32_t shift = (int32_t)reg[src] != 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_nez_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gtz_i32:
    {
        int32_t shift = (int32_t)reg[src] > 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_gtz_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gez_i32:
    {
        int32_t shift = (int32_t)reg[src] >= 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_gez_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_u32:
    {
        int32_t shift = reg[src] == 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_eqz_u32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_u32:
    {
        int32_t shift = reg[src] != 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_nez_u32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    // 64 bit
    case subop_jbr_ltz_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] < 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_ltz_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_lez_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] <= 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_lez_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] == 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_eqz_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] != 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_nez_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gtz_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] > 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_gtz_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gez_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] >= 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_gez_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_u64:
    {
        int32_t shift = *(uint64_t *)&reg[src] == 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_eqz_u64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_u64:
    {
        int32_t shift = *(uint64_t *)&reg[src] != 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_nez_u64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    // 32 bit flt
    case subop_jbr_ltz_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] < 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_ltz_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_lez_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] <= 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_lez_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] == 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_eqz_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] != 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_nez_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gtz_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] > 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_gtz_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gez_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] >= 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_gez_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;

    // 64 bit flt
    case subop_jbr_ltz_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] < 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_ltz_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_lez_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] <= 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_lez_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] == 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_eqz_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] != 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_nez_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gtz_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] > 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_gtz_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gez_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] >= 0 ? offset : 3;
        *pc += shift;
        insresult("%4X: jbr_r16_imm16_gez_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;

    // subop 默认处理
    default:
        goto _Error_Handle;
        break;
    }
}break;
