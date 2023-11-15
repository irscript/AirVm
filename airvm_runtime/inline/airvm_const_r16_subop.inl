// 16/32/64 bit 常量赋值：8-8-16-16/8-8-16-32/8-8-16-64
case op_const_r16_subop:
{
    uint32_t subop = ins & 0x00FF;
    uint32_t des = insarr[*pc + 1];

    switch (subop)
    {
    case subop_const_w32_r16_i16:
    {
        int32_t imm = (int16_t)insarr[*pc + 2];
        reg[des] = imm;
        insresult("%4X: const_w32_r16_i16  \tr%d, \t%d\n", *pc, des, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_const_w32_r16_u16:
    {
        uint32_t imm = insarr[*pc + 2];
        reg[des] = imm;
        insresult("%4X: const_w32_r16_u16  \tr%d, \t%u\n", *pc, des, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_const_w32_r16_i32:
    {
        int32_t imm = *(int32_t *)&insarr[*pc + 2];
        reg[des] = imm;
        insresult("%4X: const_w32_r16_i32  \tr%d, \t%d\n", *pc, des, reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_const_w32_r16_u32:
    {
        uint32_t imm = *(uint32_t *)&insarr[*pc + 2];
        reg[des] = imm;
        insresult("%4X: const_w32_r16_u32  \tr%d, \t%u\n", *pc, des, reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_const_w32_r16_f32:
    {
        uint32_t imm = *(uint32_t *)&insarr[*pc + 2];
        reg[des] = imm;
        insresult("%4X: const_w32_r16_f32  \tr%d, \t%f\n", *pc, des, *(flt32_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;

    case subop_const_w64_r16_i16:
    {
        int32_t imm = (int16_t)insarr[*pc + 2];
        *(int64_t *)&reg[des] = imm;
        insresult("%4X: const_w64_r16_i16  \tr%d, \t%lld\n", *pc, des, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_const_w64_r16_u16:
    {
        uint32_t imm = insarr[*pc + 2];
        *(uint64_t *)&reg[des] = imm;
        insresult("%4X: const_w64_r16_u16  \tr%d, \t%llu\n", *pc, des, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_const_w64_r16_i32:
    {
        int32_t imm = *(int32_t *)&insarr[*pc + 2];
        *(int64_t *)&reg[des] = imm;
        insresult("%4X: const_w64_r16_i32  \tr%d, \t%lld\n", *pc, des, *(int64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_const_w64_r16_u32:
    {
        uint32_t imm = *(uint32_t *)&insarr[*pc + 2];
        *(uint64_t *)&reg[des] = imm;
        insresult("%4X: const_w64_r16_u32  \tr%d, \t%llu\n", *pc, des, *(uint64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_const_w64_r16_i64:
    {
        int64_t imm = *(int64_t *)&insarr[*pc + 2];
        *(int64_t *)&reg[des] = imm;
        insresult("%4X: const_w64_r16_i64  \tr%d, \t%lld\n", *pc, des, *(int64_t *)&reg[des]);
        *pc += 6;
        continue;
    }
    break;
    case subop_const_w64_r16_u64:
    {
        uint64_t imm = *(uint64_t *)&insarr[*pc + 2];
        *(uint64_t *)&reg[des] = imm;
        insresult("%4X: const_w64_r16_u64  \tr%d, \t%llu\n", *pc, des, *(uint64_t *)&reg[des]);
        *pc += 6;
        continue;
    }
    break;
    case subop_const_w64_r16_f64:
    {
        flt64_t imm = *(flt64_t *)&insarr[*pc + 2];
        *(flt64_t *)&reg[des] = imm;
        insresult("%4X: const_w64_r16_f64  \tr%d, \t%lf\n", *pc, des, *(flt64_t *)&reg[des]);
        *pc += 6;
        continue;
    }
    break;

    default:
        goto _Error_Handle;
        break;
    }
}
break;