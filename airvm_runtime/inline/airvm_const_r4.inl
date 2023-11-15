// 4 bit 常量赋值: 8-4-4
case op_const_w32_r4_i4:
{
    uint32_t des = (ins & 0x00F0) >> 4;
    uint32_t imm = ins & 0x000F;
    uint32_t mask = -((imm & 0xF) >> 3);
    reg[des] = (mask & (~0xF)) | imm;
    insresult("%4X: const_w32_r4_i4 \tr%d, \t%d\n", *pc, des, reg[des]);
    ++*pc;
    continue;
}
break;
case op_const_w32_r4_u4:
{
    uint32_t des = (ins & 0x00F0) >> 4;
    uint32_t imm = ins & 0x000F;
    reg[des] = imm;
    insresult("%4X: const_w32_r4_u4 \tr%d, \t%d\n", *pc, des, reg[des]);
    ++*pc;
    continue;
}
break;
case op_const_w64_r4_i4:
{
    uint32_t des = (ins & 0x00F0) >> 4;
    uint32_t imm = ins & 0x000F;
    uint32_t mask = -((imm & 0xF) >> 3);
    int32_t res = (mask & (~0xF)) | imm;
    *(int64_t *)&reg[des] = res;
    insresult("%4X: const_w64_r4_i4 \tr%d, \t%lld\n", *pc, des, *(int64_t *)&reg[des]);
    ++*pc;
    continue;
}
break;
case op_const_w64_r4_u4:
{
    uint32_t des = (ins & 0x00F0) >> 4;
    uint32_t imm = ins & 0x000F;
    *(uint64_t *)&reg[des] = imm;
    insresult("%4X: const_w64_r4_u4 \tr%d, \t%lld\n", *pc, des, *(uint64_t *)&reg[des]);
    ++*pc;
    continue;
}
break;