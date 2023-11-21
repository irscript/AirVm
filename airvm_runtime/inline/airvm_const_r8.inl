// 16 bit 常量赋值：8-8-16
case op_const_w32_r8_i16:
{
    uint32_t des = ins & 0x00FF;
    int16_t imm = insarr[*pc + 1];
    reg[des] = imm;
    insresult("%4X: const_w32_r8_i16  \tr%d, \t%d\n", *pc, des, reg[des]);
    *pc += 2;
    continue;
}
break;
case op_const_w32_r8_u16:
{
    uint32_t des = ins & 0x00FF;
    uint16_t imm = insarr[*pc + 1];
    reg[des] = imm;
    insresult("%4X: const_w32_r8_u16  \tr%d, \t%u\n", *pc, des, reg[des]);
    *pc += 2;
    continue;
}
break;
case op_const_w64_r8_i16:
{
    uint32_t des = ins & 0x00FF;
    int16_t imm = insarr[*pc + 1];
    *(int64_t *)&reg[des] = imm;
    insresult("%4X: const_w64_r8_i16  \tr%d, \t%lld\n", *pc, des, *(int64_t *)&reg[des]);
    *pc += 2;
    continue;
}
break;
case op_const_w64_r8_u16:
{
    uint32_t des = ins & 0x00FF;
    uint16_t imm = insarr[*pc + 1];
    *(uint64_t *)&reg[des] = imm;
    insresult("%4X: const_w64_r8_u16  \tr%d, \t%llu\n", *pc, des, *(uint64_t *)&reg[des]);
    *pc += 2;
    continue;
}
break;
case op_const_w32_r8_h16:
{
    uint32_t des = ins & 0x00FF;
    uint16_t imm = insarr[*pc + 1];
    ((uint16_t *)&reg[des])[1] = imm;
    insresult("%4X: const_w32_r8_h16  \tr%d, \t0x%X\n", *pc, des, ((uint16_t *)&reg[des])[1]);
    *pc += 2;
    continue;
}
break;
case op_const_w32_r8_l16:
{
    uint32_t des = ins & 0x00FF;
    uint16_t imm = insarr[*pc + 1];
    ((uint16_t *)&reg[des])[0] = imm;
    insresult("%4X: const_w32_r8_l16  \tr%d, \t0x%X\n", *pc, des, ((uint16_t *)&reg[des])[0]);
    *pc += 2;
    continue;
}
break;
// 32/64 bit 常量赋值：8-8-32/8-8-64
case op_const_w32_r8_i32:
{
    uint32_t des = ins & 0x00FF;
    int32_t imm = *(int32_t *)&insarr[*pc + 1];
    reg[des] = imm;
    insresult("%4X: const_w32_r8_i32  \tr%d, \t%d\n", *pc, des, reg[des]);
    *pc += 3;
    continue;
}
break;
case op_const_w32_r8_u32:
{
    uint32_t des = ins & 0x00FF;
    uint32_t imm = *(uint32_t *)&insarr[*pc + 1];
    reg[des] = imm;
    insresult("%4X: const_w32_r8_u32  \tr%d, \t%u\n", *pc, des, reg[des]);
    *pc += 3;
    continue;
}
break;
case op_const_w32_r8_f32:
{
    uint32_t des = ins & 0x00FF;
    uint32_t imm = *(uint32_t *)&insarr[*pc + 1];
    reg[des] = imm;
    insresult("%4X: const_w32_r8_f32  \tr%d, \t%f\n", *pc, des, *(flt32_t *)&reg[des]);
    *pc += 3;
    continue;
}
break;
case op_const_w64_r8_i32:
{
    uint32_t des = ins & 0x00FF;
    int32_t imm = *(int32_t *)&insarr[*pc + 1];
    *(int64_t *)&reg[des] = imm;
    insresult("%4X: const_w64_r8_i32  \tr%d, \t%d\n", *pc, des, reg[des]);
    *pc += 3;
    continue;
}
break;
case op_const_w64_r8_u32:
{
    uint32_t des = ins & 0x00FF;
    uint32_t imm = *(uint32_t *)&insarr[*pc + 1];
    *(uint64_t *)&reg[des] = imm;
    insresult("%4X: const_w64_r8_u32  \tr%d, \t%u\n", *pc, des, reg[des]);
    *pc += 3;
    continue;
}
break;
case op_const_w64_r8_i64:
{
    uint32_t des = ins & 0x00FF;
    int64_t imm = *(int64_t *)&insarr[*pc + 1];
    *(int64_t *)&reg[des] = imm;
    insresult("%4X: const_w64_r8_i64  \tr%d, \t%lld\n", *pc, des, *(int64_t *)&reg[des]);
    *pc += 5;
    continue;
}
break;
case op_const_w64_r8_u64:
{
    uint32_t des = ins & 0x00FF;
    uint64_t imm = *(uint64_t *)&insarr[*pc + 1];
    *(uint64_t *)&reg[des] = imm;
    insresult("%4X: const_w64_r8_u64  \tr%d, \t%llu\n", *pc, des, *(uint64_t *)&reg[des]);
    *pc += 5;
    continue;
}
break;
case op_const_w64_r8_f64:
{
    uint32_t des = ins & 0x00FF;
    uint64_t imm = *(uint64_t *)&insarr[*pc + 1];
    *(uint64_t *)&reg[des] = imm;
    insresult("%4X: const_w64_r8_f64  \tr%d, \t%lf\n", *pc, des, *(flt64_t *)&reg[des]);
    *pc += 5;
    continue;
}
break;