// 分支跳转指令：jbr subop,src,src2,imm
case op_jbr_r4_imm8_subop: // 8-8-4-4-8
{
    uint32_t subop = ins & 0x00FF;
    uint32_t ins2 = insarr[*pc + 1];
    uint32_t src = (ins2 & 0xF);
    uint32_t src2 = (ins2 & 0xF0) >> 4;

    int32_t offset = (int8_t)(ins2 >> 8);
    switch (subop)
    {
    case subop_jbr_lt_i32:
    {
        int32_t shift = (int32_t)reg[src] < (int32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_lt_i32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_le_i32:
    {
        int32_t shift = (int32_t)reg[src] <= (int32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_le_i32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eq_i32:
    {
        int32_t shift = (int32_t)reg[src] == (int32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_eq_i32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ne_i32:
    {
        int32_t shift = (int32_t)reg[src] != (int32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ne_i32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gt_i32:
    {
        int32_t shift = (int32_t)reg[src] > (int32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_gt_i32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ge_i32:
    {
        int32_t shift = (int32_t)reg[src] >= (int32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ge_i32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;

    case subop_jbr_lt_u32:
    {
        int32_t shift = (uint32_t)reg[src] < (uint32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_lt_u32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_le_u32:
    {
        int32_t shift = (uint32_t)reg[src] <= (uint32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_le_u32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eq_u32:
    {
        int32_t shift = (uint32_t)reg[src] == (uint32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_eq_u32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ne_u32:
    {
        int32_t shift = (uint32_t)reg[src] != (uint32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ne_u32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gt_u32:
    {
        int32_t shift = (uint32_t)reg[src] > (uint32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_gt_u32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ge_u32:
    {
        int32_t shift = (uint32_t)reg[src] >= (uint32_t)reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ge_u32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;

    case subop_jbr_lt_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] < *(int64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_lt_i64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_le_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] <= *(int64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_le_i64 \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eq_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] == *(int64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_eq_i64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ne_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] != *(int64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ne_i64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gt_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] > *(int64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_gt_i64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ge_i64:
    {
        int32_t shift = *(int64_t *)&reg[src] >= *(int64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ge_i64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;

    case subop_jbr_lt_u64:
    {
        int32_t shift = *(uint64_t *)&reg[src] < *(uint64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_lt_u64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_le_u64:
    {
        int32_t shift = *(uint64_t *)&reg[src] <= *(uint64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_le_u64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eq_u64:
    {
        int32_t shift = *(uint64_t *)&reg[src] == *(uint64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_eq_u64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ne_u64:
    {
        int32_t shift = *(uint64_t *)&reg[src] != *(uint64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ne_u64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gt_u64:
    {
        int32_t shift = *(uint64_t *)&reg[src] > *(uint64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_gt_u64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ge_u64:
    {
        int32_t shift = *(uint64_t *)&reg[src] >= *(uint64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ge_u64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;

    case subop_jbr_lt_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] < *(flt32_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_lt_f32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_le_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] <= *(flt32_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_le_f32 \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eq_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] == *(flt32_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_eq_f32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ne_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] != *(flt32_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ne_f32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gt_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] > *(flt32_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_gt_f32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ge_f32:
    {
        int32_t shift = *(flt32_t *)&reg[src] >= *(flt32_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ge_f32  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;

    case subop_jbr_lt_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] < *(flt64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_lt_f64 \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_le_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] <= *(flt64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_le_f64 \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_eq_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] == *(flt64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_eq_f64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ne_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] != *(flt64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ne_f64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_gt_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] > *(flt64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_gt_f64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
        continue;
    }
    break;
    case subop_jbr_ge_f64:
    {
        int32_t shift = *(flt64_t *)&reg[src] >= *(flt64_t *)&reg[src2] ? offset : 2;
        *pc += shift;
        insresult("%4X: jbr_r4_imm8_ge_f64  \tr%d, \tr%d, \t%d \tshift:%d \tresult: %x\n",
                  *pc - shift, src, src2, offset, shift, *pc);
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