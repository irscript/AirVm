// 分支跳转指令：jbrz subop,src,imm
case op_jbrz_r8_imm8_subop: // 8-8-8-8
{
    uint32_t subop = ins & 0x00FF;
    uint32_t ins2 = insarr[*pc + 1];
    uint32_t src = ins2 >> 8;
    uint32_t imm = ins2 & 0xFF;
    uint32_t mask = -((imm & 0xFFu) >> 7);
    int32_t offset = (mask & (~0xFFu)) | imm;
    switch (subop)
    {
    case subop_jbr_ltz_i32:
    {
        int32_t shift = (int32_t)reg[src] < 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_ltz_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_lez_i32:
    {
        int32_t shift = (int32_t)reg[src] <= 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_lez_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_i32:
    {
        int32_t shift = (int32_t)reg[src] == 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_eqz_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_i32:
    {
        int32_t shift = (int32_t)reg[src] != 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_nez_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gtz_i32:
    {
        int32_t shift = (int32_t)reg[src] > 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_gtz_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gez_i32:
    {
        int32_t shift = (int32_t)reg[src] >= 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_gez_i32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_u32:
    {
        int32_t shift = reg[src] == 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_eqz_u32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_u32:
    {
        int32_t shift = reg[src] != 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_nez_u32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    // 64 bit
    case subop_jbr_ltz_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] < 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_ltz_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_lez_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] <= 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_lez_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] == 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_eqz_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] != 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_nez_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gtz_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] > 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_gtz_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gez_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] >= 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_gez_i64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_u64:
    {
        int32_t shift = *(uint64_t *)&reg[src] == 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_eqz_u64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_u64:
    {
        int32_t shift = *(uint64_t *)&reg[src] != 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_nez_u64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    // 32 bit flt
    case subop_jbr_ltz_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] < 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_ltz_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_lez_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] <= 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_lez_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] == 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_eqz_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] != 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_nez_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gtz_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] > 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_gtz_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gez_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] >= 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_gez_f32  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;

    // 64 bit flt
    case subop_jbr_ltz_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] < 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_ltz_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_lez_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] <= 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_lez_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eqz_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] == 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_eqz_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_nez_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] != 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_nez_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gtz_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] > 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_gtz_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gez_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] >= 0 ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r8_imm8_gez_f64  \tr%d, \t%d \tshift:%d \tresult: %x\n",
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
