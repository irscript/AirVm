case op_ldst_r4_subop:
{
    uint32_t subop = ins & 0x00FF;
    uint32_t ins2 = insarr[*pc + 1];
    uint32_t des = (ins2 & 0xF000) >> 12;
    uint32_t src = (ins2 & 0x0F00) >> 8;
    uint32_t off = (ins2 & 0x00F0) >> 4;
    uint32_t imm = ins2 & 0x00FF;

    switch (subop)
    {
        // 寄存器偏移
    case subop_load_w32_i8:
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        addr += reg[off];
        reg[des] = (int32_t) * (int8_t *)addr;
        insresult("%4X: load_w32_r4_i8  \tdr%d, \tsr%d, \tor%d  \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_u8:
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        addr += reg[off];
        reg[des] = (uint32_t) * (uint8_t *)addr;
        insresult("%4X: load_w32_r4_u8  \tdr%d, \tsr%d, \tor%d  \tresult: %u\n",
                  *pc, des, src, reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_i16:
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        addr += reg[off];
        reg[des] = (int32_t) * (int16_t *)addr;
        insresult("%4X: load_w32_r4_i16  \tdr%d, \tsr%d, \tor%d  \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_u16:
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        addr += reg[off];
        reg[des] = (uint32_t) * (uint16_t *)addr;
        insresult("%4X: load_w32_r4_u16  \tdr%d, \tsr%d, \tor%d  \tresult: %u\n",
                  *pc, des, src, reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_i32:
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        addr += reg[off];
        reg[des] = (int32_t) * (int32_t *)addr;
        insresult("%4X: load_w32_r4_i32  \tdr%d, \tsr%d, \tor%d  \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_u32:
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        addr += reg[off];
        reg[des] = (uint32_t) * (uint32_t *)addr;
        insresult("%4X: load_w32_r4_u32  \tdr%d, \tsr%d, \tor%d  \tresult: %u\n",
                  *pc, des, src, reg[des]);
        *pc += 2;
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
