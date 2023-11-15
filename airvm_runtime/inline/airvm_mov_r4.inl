// 寄存器间赋值：8-4-4
case op_mov_w32_r4_i32:
{
    uint32_t des = (ins & 0x00F0) >> 4;
    uint32_t src = ins & 0x000F;
    reg[des] = reg[src];
    insresult("%4X: mov_w32_r4_i32  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
    ++*pc;
    continue;
}
break;
case op_mov_w32_r4_u32:
{
    uint32_t des = (ins & 0x00F0) >> 4;
    uint32_t src = ins & 0x000F;
    reg[des] = reg[src];
    insresult("%4X: mov_w32_r4_u32  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
    ++*pc;
    continue;
}
break;
case op_mov_w32_r4_f32:
{
    uint32_t des = (ins & 0x00F0) >> 4;
    uint32_t src = ins & 0x000F;
    reg[des] = reg[src];
    insresult("%4X: mov_w32_r4_f32  \tr%d, \tr%d \tresult: %f\n", *pc, des, src, *(flt32_t *)&reg[des]);
    ++*pc;
    continue;
}
break;
case op_mov_w64_r4_i64:
{
    uint32_t des = (ins & 0x00F0) >> 4;
    uint32_t src = ins & 0x000F;
    *(int64_t *)&reg[des] = *(int64_t *)&reg[src];
    insresult("%4X: mov_w64_r4_i64  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
    ++*pc;
    continue;
}
break;
case op_mov_w64_r4_u64:
{
    uint32_t des = (ins & 0x00F0) >> 4;
    uint32_t src = ins & 0x000F;
    *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src];
    insresult("%4X: mov_w64_r4_u64  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
    ++*pc;
    continue;
}
break;
case op_mov_w64_r4_f64:
{
    uint32_t des = (ins & 0x00F0) >> 4;
    uint32_t src = ins & 0x000F;
    *(flt64_t *)&reg[des] = *(flt64_t *)&reg[src];
    insresult("%4X: mov_w64_r4_f64  \tr%d, \tr%d \tresult: %lf\n", *pc, des, src, *(flt64_t *)&reg[des]);
    ++*pc;
    continue;
}
break;