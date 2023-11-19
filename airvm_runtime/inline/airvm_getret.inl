// 返回值获取
case op_getret_subop: // 8-8-16
{
    uint32_t subop = ins & 0x00FF;
    uint32_t des = insarr[*pc + 1];

    switch (subop)
    {
    case subop_getret_w32_r16_i8: // 8-8-16
    {
        reg[des] = actor->i8;
        insresult("%4X: getret_w32_r16_i8 \tr%d resault:%d\n",
                  *pc, des, actor->i8);
        *pc += 2;
        continue;
    }
    break;
    case subop_getret_w32_r16_u8: // 8-8-16
    {
        reg[des] = actor->u8;
        insresult("%4X: getret_w32_r16_u8 \tr%d resault:%u\n",
                  *pc, des, actor->u8);
        *pc += 2;
        continue;
    }
    break;

    case subop_getret_w32_r16_i16: // 8-8-16
    {
        reg[des] = actor->i16;
        insresult("%4X: getret_w32_r16_i16 \tr%d resault:%d\n",
                  *pc, des, actor->i8);
        *pc += 2;
        continue;
    }
    break;
    case subop_getret_w32_r16_u16: // 8-8-16
    {
        reg[des] = actor->u16;
        insresult("%4X: getret_w32_r16_u16 \tr%d resault:%u\n",
                  *pc, des, actor->u16);
        *pc += 2;
        continue;
    }
    break;

    case subop_getret_w32_r16_i32: // 8-8-16
    {
        reg[des] = actor->i32;
        insresult("%4X: getret_w32_r16_i32 \tr%d resault:%d\n",
                  *pc, des, actor->i32);
        *pc += 2;
        continue;
    }
    break;
    case subop_getret_w32_r16_u32: // 8-8-16
    {
        reg[des] = actor->u32;
        insresult("%4X: getret_w32_r16_u32\tr%d resault:%u\n",
                  *pc, des, actor->u32);
        *pc += 2;
        continue;
    }
    break;
    case subop_getret_w32_r16_f32: // 8-8-16
    {
        *(flt32_t *)&reg[des] = actor->f32;
        insresult("%4X: getret_w32_r16_u32\tr%d resault:%f\n",
                  *pc, des, actor->f32);
        *pc += 2;
        continue;
    }
    break;

    case subop_getret_w64_r16_i8: // 8-8-16
    {
        *(int64_t *)&reg[des] = actor->i8;
        insresult("%4X: getret_w64_r16_i8 \tr%d resault:%d\n",
                  *pc, des, actor->i8);
        *pc += 2;
        continue;
    }
    break;
    case subop_getret_w64_r16_u8: // 8-8-16
    {
        *(uint64_t *)&reg[des] = actor->u8;
        insresult("%4X: getret_w64_r16_u8 \tr%d resault:%u\n",
                  *pc, des, actor->u8);
        *pc += 2;
        continue;
    }
    break;

    case subop_getret_w64_r16_i16: // 8-8-16
    {
        *(int64_t *)&reg[des] = actor->i16;
        insresult("%4X: getret_w64_r16_i16 \tr%d resault:%d\n",
                  *pc, des, actor->i8);
        *pc += 2;
        continue;
    }
    break;
    case subop_getret_w64_r16_u16: // 8-8-16
    {
        *(uint64_t *)&reg[des] = actor->u16;
        insresult("%4X: getret_w64_r16_u16 \tr%d resault:%u\n",
                  *pc, des, actor->u16);
        *pc += 2;
        continue;
    }
    break;

    case subop_getret_w64_r16_i32: // 8-8-16
    {
        *(int64_t *)&reg[des] = actor->i32;
        insresult("%4X: getret_w64_r16_i32 \tr%d resault:%d\n",
                  *pc, des, actor->i32);
        *pc += 2;
        continue;
    }
    break;
    case subop_getret_w64_r16_u32: // 8-8-16
    {
        *(uint64_t *)&reg[des] = actor->u32;
        insresult("%4X: getret_w64_r16_u32\tr%d resault:%u\n",
                  *pc, des, actor->u32);
        *pc += 2;
        continue;
    }
    break;

    case subop_getret_w64_r16_i64: // 8-8-16
    {
        *(int64_t *)&reg[des] = actor->i64;
        insresult("%4X: getret_w64_r16_i64 \tr%d resault:%lld\n",
                  *pc, des, actor->i64);
        *pc += 2;
        continue;
    }
    break;
    case subop_getret_w64_r16_u64: // 8-8-16
    {
        *(uint64_t *)&reg[des] = actor->u64;
        insresult("%4X: getret_w64_r16_u64\tr%d resault:%llu\n",
                  *pc, des, actor->u64);
        *pc += 2;
        continue;
    }
    break;
    case subop_getret_w64_r16_f64: // 8-8-16
    {
        *(flt64_t *)&reg[des] = actor->f64;
        insresult("%4X: getret_w64_r16_f64\tr%d resault:%lf\n",
                  *pc, des, actor->f64);
        *pc += 2;
        continue;
    }
    break;

    case subop_getret_r16_ptr: // 8-8-16
    {
        *(uintptr_t *)&reg[des] = actor->ptr;
        insresult("%4X: getret_w64_r16_ptr\tr%d resault:%p\n",
                  *pc, des, actor->ptr);
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