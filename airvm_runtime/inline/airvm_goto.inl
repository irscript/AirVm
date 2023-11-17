// 直接跳转指令 goto imm
case op_goto_i8:
{
    uint32_t imm = ins & 0xFFu;
    uint32_t mask = -((imm & 0xFFu) >> 7);
    int32_t offset = (mask & (~0xFFu)) | imm;
    *pc += offset;
    insresult("%4X: goto_i8   \t%d => %x\n", *pc - offset, offset, *pc);
    continue;
}
break;
case op_goto_i24:
{
    uint32_t imm = (insarr[*pc + 1] << 16) | (ins & 0xFF);
    uint32_t mask = -((imm & 0xFFFFFFu) >> 23);
    int32_t offset = (mask & (~0xFFFFFFu)) | imm;
    *pc += offset;
    insresult("%4X: goto_i24  \t%d => %x\n", *pc - offset, offset, *pc);
    continue;
}
break;
case op_goto_i32:
{
    int32_t offset = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
    *pc += offset;
    insresult("%4X: goto_i32  \t%d => %x\n", *pc - offset, offset, *pc);
    continue;
}
break;