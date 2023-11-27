// op subop des,src ： 8-8-16-16
case op_ldst_r16_subop:
{
    uint32_t subop = ins & 0x00FF;

    uint32_t des = insarr[*pc + 1];
    uint32_t src = insarr[*pc + 2];

    switch (subop)
    {
        //------------------- 0 偏移 加载--------------------
    case subop_load_w32_i8: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        reg[des] = (int32_t) * (int8_t *)addr;
        insresult("%4X: load_w32_r16_i8  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w32_u8: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        reg[des] = (uint32_t) * (uint8_t *)addr;
        insresult("%4X: load_w32_r16_u8  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w32_i16: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        reg[des] = (int32_t) * (int16_t *)addr;
        insresult("%4X: load_w32_r16_i16  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w32_u16: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        reg[des] = (uint32_t) * (uint16_t *)addr;
        insresult("%4X: load_w32_r16_u16  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w32_i32: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        reg[des] = (uint32_t) * (int32_t *)addr;
        insresult("%4X: load_w32_r16_i32  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w32_u32: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        reg[des] = *(uint32_t *)addr;
        insresult("%4X: load_w32_r16_u32  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w32_f32: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(flt32_t *)&reg[des] = *(flt32_t *)addr;
        insresult("%4X: load_w32_r16_f32  \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    case subop_load_w64_i8: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(int64_t *)&reg[des] = (int64_t) * (int8_t *)addr;
        insresult("%4X: load_w64_r16_i8  \tr%d, \tr%d \tresult: %lld\n",
                  *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w64_u8: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint8_t *)addr;
        insresult("%4X: load_w64_r16_u8  \tr%d, \tr%d \tresult: %llu\n",
                  *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    case subop_load_w64_i16: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(int64_t *)&reg[des] = (int64_t) * (int16_t *)addr;
        insresult("%4X: load_w64_r16_i16  \tr%d, \tr%d \tresult: %lld\n",
                  *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w64_u16: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint16_t *)addr;
        insresult("%4X: load_w64_r16_u16  \tr%d, \tr%d \tresult: %llu\n",
                  *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    case subop_load_w64_i32: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(int64_t *)&reg[des] = (int64_t) * (int32_t *)addr;
        insresult("%4X: load_w64_r16_i32  \tr%d, \tr%d \tresult: %lld\n",
                  *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w64_u32: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint32_t *)addr;
        insresult("%4X: load_w64_r16_u32  \tr%d, \tr%d \tresult: %llu\n",
                  *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w64_i64: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(int64_t *)&reg[des] = (int64_t) * (int64_t *)addr;
        insresult("%4X: load_w64_r16_i64  \tr%d, \tr%d \tresult: %lld\n",
                  *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w64_u64: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(uint64_t *)&reg[des] = (uint64_t) * (uint64_t *)addr;
        insresult("%4X: load_w64_r16_u64  \tr%d, \tr%d \tresult: %llu\n",
                  *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_w64_f64: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(flt64_t *)&reg[des] = (flt64_t) * (flt64_t *)addr;
        insresult("%4X: load_w64_r16_f64  \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_load_ptr: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[src];
        *(uintptr_t *)&reg[des] = (flt64_t) * (uintptr_t *)addr;
        insresult("%4X: load_ptr  \tr%d, \tr%d \tresult: 0x%p\n",
                  *pc, des, src, *(uintptr_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    //------------------- 0 偏移 存储--------------------
    case subop_store_w32_i8: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(int8_t *)addr = *(int8_t *)&reg[src];
        insresult("%4X: store_w32_r16_i8  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int8_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w32_u8: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(uint8_t *)addr = *(uint8_t *)&reg[src];
        insresult("%4X: store_w32_r16_u8  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, *(uint8_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w32_i16: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(int16_t *)addr = *(int16_t *)&reg[src];
        insresult("%4X: store_w32_r16_i16  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int16_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w32_u16: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(uint16_t *)addr = *(uint16_t *)&reg[src];
        insresult("%4X: store_w32_r16_u16  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, *(uint16_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w32_i32: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(int32_t *)addr = *(int32_t *)&reg[src];
        insresult("%4X: store_w32_r16_i32  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int32_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w32_u32: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(uint32_t *)addr = *(uint32_t *)&reg[src];
        insresult("%4X: store_w32_r16_u32  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, *(uint32_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w32_f32: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(flt32_t *)addr = *(flt32_t *)&reg[src];
        insresult("%4X: store_w32_r16_f32  \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w64_i8: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(int8_t *)addr = *(int8_t *)&reg[src];
        insresult("%4X: store_w64_r16_i8  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int8_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w64_u8: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(uint8_t *)addr = *(uint8_t *)&reg[src];
        insresult("%4X: store_w64_r16_u8  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, *(uint8_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w64_i16: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(int16_t *)addr = *(int16_t *)&reg[src];
        insresult("%4X: store_w64_r16_i16  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int16_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w64_u16: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(uint16_t *)addr = *(uint16_t *)&reg[src];
        insresult("%4X: store_w64_r16_u16  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, *(uint16_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w64_i32: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(int32_t *)addr = *(int32_t *)&reg[src];
        insresult("%4X: store_w64_r16_i32  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int32_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w64_u32: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(uint32_t *)addr = *(uint32_t *)&reg[src];
        insresult("%4X: store_w64_r16_u32  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, *(uint32_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w64_i64: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(int64_t *)addr = *(int64_t *)&reg[src];
        insresult("%4X: store_w64_r16_i64  \tr%d, \tr%d \tresult: %lld\n",
                  *pc, des, src, *(int64_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w64_u64: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(uint64_t *)addr = *(uint64_t *)&reg[src];
        insresult("%4X: store_w64_r16_u64  \tr%d, \tr%d \tresult: %llu\n",
                  *pc, des, src, *(uint64_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_w64_f64: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(flt64_t *)addr = *(flt64_t *)&reg[src];
        insresult("%4X: store_w64_r16_f64  \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt64_t *)addr);
        *pc += 3;
        continue;
    }
    break;
    case subop_store_ptr: // op subop des,src ： 8-8-16-16
    {
        uintptr_t addr = *(uintptr_t *)&reg[des];
        *(uintptr_t *)addr = *(uintptr_t *)&reg[src];
        insresult("%4X: store_r16_ptr \tr%d, \tr%d \tresult: 0x%p\n",
                  *pc, des, src, *(uintptr_t *)addr);
        *pc += 3;
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