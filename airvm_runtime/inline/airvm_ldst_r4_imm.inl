// 数据加载、存储: op subop,des,src,offset：8-8-4-4-8, imm8
case op_ldst_r4_imm8_subop:
{
    uint32_t subop = ins & 0x00FF;
    uint32_t ins2 = insarr[*pc + 1];
    uint32_t des = (ins2 >> 12);
    uint32_t src = (ins2 >> 8) & 0xF;
    uintptr_t offset = ins2 & 0xFF;

    switch (subop)
    {
        //------------------- 0 偏移 加载--------------------
    case subop_load_w32_i8:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(int32_t *)&reg[des] = (int32_t) * (int8_t *)(address + offset);
        insresult("%4X: load_w32_r4_imm8_i8  \tr%d,\tr%d,\t%llu \t result: %d\n",
                  *pc, des, src, offset, *(int32_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_u8:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(uint32_t *)&reg[des] = (uint32_t) * (uint8_t *)(address + offset);
        insresult("%4X: load_w32_r4_imm8_u8  \tr%d,\tr%d,\t%llu \t result: %u\n",
                  *pc, des, src, offset, *(uint32_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_i16:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(int32_t *)&reg[des] = (int32_t) * (int16_t *)(address + offset);
        insresult("%4X: load_w32_r4_imm8_i16  \tr%d,\tr%d,\t%llu \t result: %d\n",
                  *pc, des, src, offset, *(int32_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_u16:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(uint32_t *)&reg[des] = (uint32_t) * (uint16_t *)(address + offset);
        insresult("%4X: load_w32_r4_imm8_u16  \tr%d,\tr%d,\t%llu \t result: %u\n",
                  *pc, des, src, offset, *(uint32_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_i32:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(int32_t *)&reg[des] = (int32_t) * (int32_t *)(address + offset);
        insresult("%4X: load_w32_r4_imm8_i32  \tr%d,\tr%d,\t%llu \t result: %d\n",
                  *pc, des, src, offset, *(int32_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_u32:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(uint32_t *)&reg[des] = (uint32_t) * (uint32_t *)(address + offset);
        insresult("%4X: load_w32_r4_imm8_u32  \tr%d,\tr%d,\t%llu \t result: %u\n",
                  *pc, des, src, offset, *(uint32_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w32_f32:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(flt32_t *)&reg[des] = (flt32_t) * (flt32_t *)(address + offset);
        insresult("%4X: load_w32_r4_imm8_f32  \tr%d,\tr%d,\t%llu \t result: %f\n",
                  *pc, des, src, offset, *(flt32_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;

    case subop_load_w64_i8:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(int64_t *)&reg[des] = (int64_t) * (int8_t *)(address + offset);
        insresult("%4X: load_w64_r4_imm8_i8  \tr%d,\tr%d,\t%llu \t result: %lld\n",
                  *pc, des, src, offset, *(int64_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w64_u8:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint8_t *)(address + offset);
        insresult("%4X: load_w64_r4_imm8_u8  \tr%d,\tr%d,\t%llu \t result: %llu\n",
                  *pc, des, src, offset, *(uint64_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w64_i16:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(int64_t *)&reg[des] = (int64_t) * (int16_t *)(address + offset);
        insresult("%4X: load_w64_r4_imm8_i16  \tr%d,\tr%d,\t%llu \t result: %lld\n",
                  *pc, des, src, offset, *(int64_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w64_u16:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint16_t *)(address + offset);
        insresult("%4X: load_w64_r4_imm8_u16  \tr%d,\tr%d,\t%llu \t result: %llu\n",
                  *pc, des, src, offset, *(uint64_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w64_i32:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(int64_t *)&reg[des] = (int64_t) * (int32_t *)(address + offset);
        insresult("%4X: load_w64_r4_imm8_i32  \tr%d,\tr%d,\t%llu \t result: %lld\n",
                  *pc, des, src, offset, *(int64_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w64_u32:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint32_t *)(address + offset);
        insresult("%4X: load_w64_r4_imm8_u32  \tr%d,\tr%d,\t%llu \t result: %llu\n",
                  *pc, des, src, offset, *(uint64_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w64_i64:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(int64_t *)&reg[des] = (int64_t) * (int64_t *)(address + offset);
        insresult("%4X: load_w64_r4_imm8_i64  \tr%d,\tr%d,\t%llu \t result: %lld\n",
                  *pc, des, src, offset, *(int64_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;
    case subop_load_w64_u64:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint64_t *)(address + offset);
        insresult("%4X: load_w64_r4_imm8_u64  \tr%d,\tr%d,\t%llu \t result: %llu\n",
                  *pc, des, src, offset, *(uint64_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;

    case subop_load_w64_f64:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(flt64_t *)&reg[des] = (flt64_t) * (flt64_t *)(address + offset);
        insresult("%4X: load_w64_r4_imm8_f64  \tr%d,\tr%d,\t%llu \t result: %lf\n",
                  *pc, des, src, offset, *(flt64_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;

    case subop_load_ptr:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        *(uintptr_t *)&reg[des] = (uintptr_t) * (uintptr_t *)(address + offset);
        insresult("%4X: load_r4_imm8_ptr  \tr%d,\tr%d,\t%llu \t result: 0x%p\n",
                  *pc, des, src, offset, *(uintptr_t *)&reg[des]);
        *pc += 2;
        continue;
    }
    break;

    //------------------- 0 偏移 存储--------------------
    // op subop des,offset,src ： 8-8-8-4-4
    case subop_store_w32_i8:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(int8_t *)(address + offset) = *(int8_t *)&reg[src];
        insresult("%4X: store_w32_r4_imm8_i8  \tr%d,\tr%d,\t%llu  \tresult: %d\n",
                  *pc, des, offset, src, *(int8_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w32_u8:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(uint8_t *)(address + offset) = *(uint8_t *)&reg[src];
        insresult("%4X: store_w32_r4_imm8_u8  \tr%d,\tr%d,\t%llu  \tresult: %u\n",
                  *pc, des, offset, src, *(uint8_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w32_i16:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(int16_t *)(address + offset) = *(int16_t *)&reg[src];
        insresult("%4X: store_w32_r4_imm8_i16  \tr%d,\tr%d,\t%llu  \tresult: %d\n",
                  *pc, des, offset, src, *(int16_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w32_u16:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(uint16_t *)(address + offset) = *(uint16_t *)&reg[src];
        insresult("%4X: store_w32_r4_imm8_u16  \tr%d,\tr%d,\t%llu  \tresult: %u\n",
                  *pc, des, offset, src, *(uint16_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w32_i32:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(int32_t *)(address + offset) = *(int32_t *)&reg[src];
        insresult("%4X: store_w32_r4_imm8_i32  \tr%d,\tr%d,\t%llu  \tresult: %d\n",
                  *pc, des, offset, src, *(int32_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w32_u32:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(uint32_t *)(address + offset) = *(uint32_t *)&reg[src];
        insresult("%4X: store_w32_r4_imm8_u32  \tr%d,\tr%d,\t%llu  \tresult: %u\n",
                  *pc, des, offset, src, *(uint32_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w32_f32:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(flt32_t *)(address + offset) = *(flt32_t *)&reg[src];
        insresult("%4X: store_w32_r4_imm8_f32  \tr%d,\tr%d,\t%llu  \tresult: %f\n",
                  *pc, des, offset, src, *(flt32_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;

    case subop_store_w64_i8:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(int8_t *)(address + offset) = *(int8_t *)&reg[src];
        insresult("%4X: store_w64_r4_imm8_i8  \tr%d,\tr%d,\t%llu  \tresult: %d\n",
                  *pc, des, offset, src, *(int8_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w64_u8:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(uint8_t *)(address + offset) = *(uint8_t *)&reg[src];
        insresult("%4X: store_w64_r4_imm8_u8  \tr%d,\tr%d,\t%llu  \tresult: %u\n",
                  *pc, des, offset, src, *(uint8_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w64_i16:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(int16_t *)(address + offset) = *(int16_t *)&reg[src];
        insresult("%4X: store_w64_r4_imm8_i16  \tr%d,\tr%d,\t%llu  \tresult: %d\n",
                  *pc, des, src, offset, *(int16_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w64_u16:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(uint16_t *)(address + offset) = *(uint16_t *)&reg[src];
        insresult("%4X: store_w64_r4_imm8_u16  \tr%d,\tr%d,\t%llu  \tresult: %u\n",
                  *pc, des, src, offset, *(uint16_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w64_i32:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(int32_t *)(address + offset) = *(int32_t *)&reg[src];
        insresult("%4X: store_w64_r4_imm8_i32  \tr%d,\tr%d,\t%llu  \tresult: %d\n",
                  *pc, des, src, offset, *(int32_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w64_u32:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(uint32_t *)(address + offset) = *(uint32_t *)&reg[src];
        insresult("%4X: store_w64_r4_imm8_u32  \tr%d,\tr%d,\t%llu  \tresult: %u\n",
                  *pc, des, src, offset, *(uint32_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w64_i64:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(int64_t *)(address + offset) = *(int64_t *)&reg[src];
        insresult("%4X: store_w64_r4_imm8_i64  \tr%d,\tr%d,\t%llu  \tresult: %lld\n",
                  *pc, des, src, offset, *(int64_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w64_u64:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(uint64_t *)(address + offset) = *(uint64_t *)&reg[src];
        insresult("%4X: store_w64_r4_imm8_u64  \tr%d,\tr%d,\t%llu  \tresult: %llu\n",
                  *pc, des, src, offset, *(uint64_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_w64_f64:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(flt64_t *)(address + offset) = *(flt64_t *)&reg[src];
        insresult("%4X: store_w64_r4_imm8_f64  \tr%d,\tr%d,\t%lu  \tresult: %lf\n",
                  *pc, des, src, offset, *(flt64_t *)(address + offset));
        *pc += 2;
        continue;
    }
    break;
    case subop_store_ptr:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        *(uintptr_t *)(address + offset) = *(uintptr_t *)&reg[src];
        insresult("%4X: store_r4_imm8_ptr  \tr%d,\tr%d,\t%llu  \tresult: 0x%p\n",
                  *pc, des, src, offset, *(uintptr_t *)(address + offset));
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