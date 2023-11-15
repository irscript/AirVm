// 8 bit 常量赋值：8-8-8-8
case op_const_r8_subop:
{
    uint32_t subop = ins & 0x00FF;
    uint32_t ins2 = insarr[*pc + 1];
    uint32_t des = ins2 >> 8;
    uint32_t imm = ins2 & 0xFF;

    switch (subop)
    {
    case subop_const_w32_r8_b0:
    {
        ((uint8_t *)&reg[des])[0] = imm;
        insresult("%4d: const_w32_r8_b0 \tr%d, \t0x%X\n", *pc, des, ((uint8_t *)&reg[des])[0]);
    }
    break;
    case subop_const_w32_r8_b1:
    {
        ((uint8_t *)&reg[des])[1] = imm;
        insresult("%4d: const_w32_r8_b1 \tr%d, \t0x%X\n", *pc, des, ((uint8_t *)&reg[des])[1]);
    }
    break;
    case subop_const_w32_r8_b2:
    {
        ((uint8_t *)&reg[des])[2] = imm;
        insresult("%4d: const_w32_r8_b2 \tr%d, \t0x%X\n", *pc, des, ((uint8_t *)&reg[des])[2]);
    }
    break;
    case subop_const_w32_r8_b3:
    {
        ((uint8_t *)&reg[des])[3] = imm;
        insresult("%4d: const_w32_r8_b3 \tr%d, \t0x%X\n", *pc, des, ((uint8_t *)&reg[des])[3]);
    }
    break;
    case subop_const_w32_r8_i8:
    {
        reg[des] = (int8_t)imm;
        insresult("%4d: const_w32_r8_i8 \tr%d, \t%d\n", *pc, des, reg[des]);
    }
    break;
    case subop_const_w32_r8_u8:
    {
        reg[des] = imm;
        insresult("%4d: const_w32_r8_u8 \tr%d, \t%u\n", *pc, des, reg[des]);
    }
    break;
    case subop_const_w32_r8_h16_i8:
    {
        ((int16_t *)&reg[des])[1] = (int8_t)imm;
        insresult("%4d: const_w32_r8_h16_i8 \tr%d, \t%d\n", *pc, des, ((int16_t *)&reg[des])[1]);
    }
    break;
    case subop_const_w32_r8_h16_u8:
    {
        ((uint16_t *)&reg[des])[1] = imm;
        insresult("%4d: const_w32_r8_h16_u8 \tr%d, \t%u\n", *pc, des, ((uint16_t *)&reg[des])[1]);
    }
    break;
    case subop_const_w32_r8_l16_i8:
    {
        ((int16_t *)&reg[des])[0] = (int8_t)imm;
        insresult("%4d: const_w32_r8_l16_i8 \tr%d, \t%d\n", *pc, des, ((int16_t *)&reg[des])[0]);
    }
    break;
    case subop_const_w32_r8_l16_u8:
    {
        ((uint16_t *)&reg[des])[0] = imm;
        insresult("%4d: const_w32_r8_l16_u8 \tr%d, \t%u\n", *pc, des, ((uint16_t *)&reg[des])[0]);
    }
    break;
    case subop_const_w64_r8_i8:
    {
        *(int64_t *)&reg[des] = (int8_t)imm;
        insresult("%4d: const_w64_r8_i8 \tr%d, \t%lld\n", *pc, des, *(int64_t *)&reg[des]);
    }
    break;
    case subop_const_w64_r8_u8:
    {
        *(uint64_t *)&reg[des] = imm;
        insresult("%4d: const_w64_r8_u8 \tr%d, \t%llu\n", *pc, des, *(uint64_t *)&reg[des]);
    }
    break;

    default:
        goto _Error_Handle;
        break;
    }

    *pc += 2;
    continue;
}
break;