// op load,des,src,offset :8-8-16-16-16
// op store,des,offset,src :8-8-16-16-16
case op_ldst_r16_reg_subop:
{
    uint32_t subop = ins & 0x00FF;
    uint32_t des = insarr[*pc + 1];
    // 加载代码使用
    uint32_t src = insarr[*pc + 2];
    uint32_t off = insarr[*pc + 3];
    // 存储使用
    uint32_t off2 = src;
    uint32_t src2 = off;

    switch (subop)
    {
        //------------------- 0 偏移 加载--------------------
    case subop_load_w32_i8:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(int32_t *)&reg[des] = (int32_t) * (int8_t *)(address + offset);
        insresult("%4X: load_w32_r16_reg_i8  \tr%d,\tr%d,\tr%d \t result: %d\n",
                  *pc, des, src, off, *(int32_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w32_u8:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(uint32_t *)&reg[des] = (uint32_t) * (uint8_t *)(address + offset);
        insresult("%4X: load_w32_r16_reg_u8  \tr%d,\tr%d,\tr%d \t result: %u\n",
                  *pc, des, src, off, *(uint32_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w32_i16:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(int32_t *)&reg[des] = (int32_t) * (int16_t *)(address + offset);
        insresult("%4X: load_w32_r16_reg_i16  \tr%d,\tr%d,\tr%d \t result: %d\n",
                  *pc, des, src, off, *(int32_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w32_u16:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(uint32_t *)&reg[des] = (uint32_t) * (uint16_t *)(address + offset);
        insresult("%4X: load_w32_r16_reg_u16  \tr%d,\tr%d,\tr%d \t result: %u\n",
                  *pc, des, src, off, *(uint32_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w32_i32:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(int32_t *)&reg[des] = (int32_t) * (int32_t *)(address + offset);
        insresult("%4X: load_w32_r16_reg_i32  \tr%d,\tr%d,\tr%d \t result: %d\n",
                  *pc, des, src, off, *(int32_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w32_u32:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(uint32_t *)&reg[des] = (uint32_t) * (uint32_t *)(address + offset);
        insresult("%4X: load_w32_r16_reg_u32  \tr%d,\tr%d,\tr%d \t result: %u\n",
                  *pc, des, src, off, *(uint32_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w32_f32:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(flt32_t *)&reg[des] = (flt32_t) * (flt32_t *)(address + offset);
        insresult("%4X: load_w32_r16_reg_f32  \tr%d,\tr%d,\tr%d \t result: %f\n",
                  *pc, des, src, off, *(flt32_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;

    case subop_load_w64_i8:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(int64_t *)&reg[des] = (int64_t) * (int8_t *)(address + offset);
        insresult("%4X: load_w64_r16_reg_i8  \tr%d,\tr%d,\tr%d \t result: %lld\n",
                  *pc, des, src, off, *(int64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w64_u8:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint8_t *)(address + offset);
        insresult("%4X: load_w64_r16_reg_u8  \tr%d,\tr%d,\tr%d \t result: %llu\n",
                  *pc, des, src, off, *(uint64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w64_i16:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(int64_t *)&reg[des] = (int64_t) * (int16_t *)(address + offset);
        insresult("%4X: load_w64_r16_reg_i16  \tr%d,\tr%d,\tr%d \t result: %lld\n",
                  *pc, des, src, off, *(int64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w64_u16:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint16_t *)(address + offset);
        insresult("%4X: load_w64_r16_reg_u16  \tr%d,\tr%d,\tr%d \t result: %llu\n",
                  *pc, des, src, off, *(uint64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w64_i32:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(int64_t *)&reg[des] = (int64_t) * (int32_t *)(address + offset);
        insresult("%4X: load_w64_r16_reg_i32  \tr%d,\tr%d,\tr%d \t result: %lld\n",
                  *pc, des, src, off, *(int64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w64_u32:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint32_t *)(address + offset);
        insresult("%4X: load_w64_r16_reg_u32  \tr%d,\tr%d,\tr%d \t result: %llu\n",
                  *pc, des, src, off, *(uint64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w64_i64:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(int64_t *)&reg[des] = (int64_t) * (int64_t *)(address + offset);
        insresult("%4X: load_w64_r16_reg_i64  \tr%d,\tr%d,\tr%d \t result: %lld\n",
                  *pc, des, src, off, *(int64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;
    case subop_load_w64_u64:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint64_t *)(address + offset);
        insresult("%4X: load_w64_r16_reg_u64  \tr%d,\tr%d,\tr%d \t result: %llu\n",
                  *pc, des, src, off, *(uint64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;

    case subop_load_w64_f64:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(flt64_t *)&reg[des] = (flt64_t) * (flt64_t *)(address + offset);
        insresult("%4X: load_w64_r16_reg_f64  \tr%d,\tr%d,\tr%d \t result: %lf\n",
                  *pc, des, src, off, *(flt64_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;

    case subop_load_ptr:
    {
        uintptr_t address = *(uintptr_t *)&reg[src];
        uintptr_t offset = *(uintptr_t *)&reg[off];
        *(uintptr_t *)&reg[des] = (uintptr_t) * (uintptr_t *)(address + offset);
        insresult("%4X: load_r16_reg_ptr  \tr%d,\tr%d,\tr%d \t result: 0x%p\n",
                  *pc, des, src, off, *(uintptr_t *)&reg[des]);
        *pc += 4;
        continue;
    }
    break;

    //------------------- 0 偏移 存储--------------------
    // op subop des,off,src ： 8-8-8-4-4
    case subop_store_w32_i8:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(int8_t *)(address + offset) = *(int8_t *)&reg[src2];
        insresult("%4X: store_w32_r16_reg_i8  \tr%d,\tr%d,\tr%d  \tresult: %d\n",
                  *pc, des, off2, src2, *(int8_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w32_u8:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(uint8_t *)(address + offset) = *(uint8_t *)&reg[src2];
        insresult("%4X: store_w32_r16_reg_u8  \tr%d,\tr%d,\tr%d  \tresult: %u\n",
                  *pc, des, off2, src2, *(uint8_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w32_i16:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(int16_t *)(address + offset) = *(int16_t *)&reg[src2];
        insresult("%4X: store_w32_r16_reg_i16  \tr%d,\tr%d,\tr%d  \tresult: %d\n",
                  *pc, des, off2, src2, *(int16_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w32_u16:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(uint16_t *)(address + offset) = *(uint16_t *)&reg[src2];
        insresult("%4X: store_w32_r16_reg_u16  \tr%d,\tr%d,\tr%d  \tresult: %u\n",
                  *pc, des, off2, src2, *(uint16_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w32_i32:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(int32_t *)(address + offset) = *(int32_t *)&reg[src2];
        insresult("%4X: store_w32_r16_reg_i32  \tr%d,\tr%d,\tr%d  \tresult: %d\n",
                  *pc, des, off2, src2, *(int32_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w32_u32:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(uint32_t *)(address + offset) = *(uint32_t *)&reg[src2];
        insresult("%4X: store_w32_r16_reg_u32  \tr%d,\tr%d,\tr%d  \tresult: %u\n",
                  *pc, des, off2, src2, *(uint32_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w32_f32:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(flt32_t *)(address + offset) = *(flt32_t *)&reg[src2];
        insresult("%4X: store_w32_r16_reg_f32  \tr%d,\tr%d,\tr%d  \tresult: %f\n",
                  *pc, des, off2, src2, *(flt32_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;

    case subop_store_w64_i8:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(int8_t *)(address + offset) = *(int8_t *)&reg[src2];
        insresult("%4X: store_w64_r16_reg_i8  \tr%d,\tr%d,\tr%d  \tresult: %d\n",
                  *pc, des, off2, src2, *(int8_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w64_u8:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(uint8_t *)(address + offset) = *(uint8_t *)&reg[src2];
        insresult("%4X: store_w64_r16_reg_u8  \tr%d,\tr%d,\tr%d  \tresult: %u\n",
                  *pc, des, off2, src2, *(uint8_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w64_i16:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(int16_t *)(address + offset) = *(int16_t *)&reg[src2];
        insresult("%4X: store_w64_r16_reg_i16  \tr%d,\tr%d,\tr%d  \tresult: %d\n",
                  *pc, des, off2, src2, *(int16_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w64_u16:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(uint16_t *)(address + offset) = *(uint16_t *)&reg[src2];
        insresult("%4X: store_w64_r16_reg_u16  \tr%d,\tr%d,\tr%d  \tresult: %u\n",
                  *pc, des, off2, src2, *(uint16_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w64_i32:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(int32_t *)(address + offset) = *(int32_t *)&reg[src2];
        insresult("%4X: store_w64_r16_reg_i32  \tr%d,\tr%d,\tr%d  \tresult: %d\n",
                  *pc, des, off2, src2, *(int32_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w64_u32:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(uint32_t *)(address + offset) = *(uint32_t *)&reg[src2];
        insresult("%4X: store_w64_r16_reg_u32  \tr%d,\tr%d,\tr%d  \tresult: %u\n",
                  *pc, des, off2, src2, *(uint32_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w64_i64:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(int64_t *)(address + offset) = *(int64_t *)&reg[src2];
        insresult("%4X: store_w64_r16_reg_i64  \tr%d,\tr%d,\tr%d  \tresult: %lld\n",
                  *pc, des, off2, src2, *(int64_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w64_u64:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(uint64_t *)(address + offset) = *(uint64_t *)&reg[src2];
        insresult("%4X: store_w64_r16_reg_u64  \tr%d,\tr%d,\tr%d  \tresult: %llu\n",
                  *pc, des, off2, src2, *(uint64_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_w64_f64:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(flt64_t *)(address + offset) = *(flt64_t *)&reg[src2];
        insresult("%4X: store_w64_r16_reg_f64  \tr%d,\tr%d,\tr%d  \tresult: %lf\n",
                  *pc, des, off2, src2, *(flt64_t *)(address + offset));
        *pc += 4;
        continue;
    }
    break;
    case subop_store_ptr:
    {
        uintptr_t address = *(uintptr_t *)&reg[des];
        uintptr_t offset = *(uintptr_t *)&reg[off2];
        *(uintptr_t *)(address + offset) = *(uintptr_t *)&reg[src2];
        insresult("%4X: store_r16_reg_ptr  \tr%d,\tr%d,\tr%d  \tresult: 0x%p\n",
                  *pc, des, off2, src2, *(uintptr_t *)(address + offset));
        *pc += 4;
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