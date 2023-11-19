// 返回指令
case op_return_subop: // 8-8
{
    uint32_t subop = ins & 0x00FF;
    switch (subop)
    {
    case subop_return_void: // 8-8
    {
        insresult("%4X: return-void \n", *pc);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;

    // ----------------------立即数------------------
    case subop_return_i16: // 8-8-16
    {
        actor->i16 = insarr[*pc + 1];
        insresult("%4X: return-imm-i16 %d \n", *pc, actor->i16);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_u16: // 8-8-16
    {
        actor->u16 = insarr[*pc + 1];
        insresult("%4X: return-imm-u16 %u \n", *pc, actor->u16);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_i32: // 8-8-32
    {
        actor->i32 = *(int32_t *)&insarr[*pc + 1];
        insresult("%4X: return-imm-i32 %d \n", *pc, actor->i32);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_u32: // 8-8-32
    {
        actor->u32 = *(uint32_t *)&insarr[*pc + 1];
        insresult("%4X: return-imm-u32 %u \n", *pc, actor->u32);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_i64: // 8-8-64
    {
        actor->i64 = *(int64_t *)&insarr[*pc + 1];
        insresult("%4X: return-imm-i64 %lld \n", *pc, actor->i64);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_u64: // 8-8-64
    {
        actor->u64 = *(uint64_t *)&insarr[*pc + 1];
        insresult("%4X: return-imm-u64 %llu \n", *pc, actor->u64);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_f32: // 8-8-32
    {
        actor->f32 = *(flt32_t *)&insarr[*pc + 1];
        insresult("%4X: return-imm-f32 %f \n", *pc, actor->f32);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_f64: // 8-8-64
    {
        actor->f64 = *(flt64_t *)&insarr[*pc + 1];
        insresult("%4X: return-imm-f64 %lf \n", *pc, actor->f64);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;

    // -----------------------寄存器---------------------
    case subop_return_r16_sb0: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->i8 = ((int8_t *)&reg[des])[0];
        insresult("%4X: return_r16_sb0 r%d \tresult:%d\n",
                  *pc, des, actor->i8);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_r16_ub0: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->u8 = ((uint8_t *)&reg[des])[0];
        insresult("%4X: return_r16_ub0 r%d \tresult:%u\n",
                  *pc, des, actor->u8);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;

    case subop_return_r16_sb1: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->i8 = ((int8_t *)&reg[des])[1];
        insresult("%4X: return_r16_sb1 r%d \tresult:%d\n",
                  *pc, des, actor->i8);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_r16_ub1: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->u8 = ((uint8_t *)&reg[des])[1];
        insresult("%4X: return_r16_ub1 r%d \tresult:%u\n",
                  *pc, des, actor->u8);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;

    case subop_return_r16_sb2: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->i8 = ((int8_t *)&reg[des])[2];
        insresult("%4X: return_r16_sb2 r%d \tresult:%d\n",
                  *pc, des, actor->i8);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_r16_ub2: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->u8 = ((uint8_t *)&reg[des])[2];
        insresult("%4X: return_r16_ub2 r%d \tresult:%u\n",
                  *pc, des, actor->u8);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;

    case subop_return_r16_sb3: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->i8 = ((int8_t *)&reg[des])[3];
        insresult("%4X: return_r16_sb3 r%d \tresult:%d\n",
                  *pc, des, actor->i8);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_r16_ub3: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->u8 = ((uint8_t *)&reg[des])[3];
        insresult("%4X: return_r16_sb3 r%d \tresult:%u\n",
                  *pc, des, actor->u8);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;

    case subop_return_r16_sl16: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->i16 = ((int16_t *)&reg[des])[0];
        insresult("%4X: return_r16_sl16 r%d \tresult:%d\n",
                  *pc, des, actor->i16);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_r16_ul16: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->u16 = ((uint16_t *)&reg[des])[0];
        insresult("%4X: return_r16_ul16 r%d \tresult:%u\n",
                  *pc, des, actor->u16);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_r16_sh16: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->i16 = ((int16_t *)&reg[des])[1];
        insresult("%4X: return_r16_sl16 r%d \tresult:%d\n",
                  *pc, des, actor->i16);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_r16_uh16: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->u16 = ((uint16_t *)&reg[des])[1];
        insresult("%4X: return_r16_ul16 r%d \tresult:%u\n",
                  *pc, des, actor->u16);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;

    case subop_return_r16_i32: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->i32 = *(int32_t *)&reg[des];
        insresult("%4X: return_r16_i32 r%d \tresult:%d\n",
                  *pc, des, actor->i32);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_r16_u32: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->u32 = *(uint32_t *)&reg[des];
        insresult("%4X: return_r16_u32 r%d \tresult:%u\n",
                  *pc, des, actor->u32);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;

    case subop_return_r16_i64: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->i64 = *(int64_t *)&reg[des];
        insresult("%4X: return_r16_i64 r%d \tresult:%lld\n",
                  *pc, des, actor->i64);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_r16_u64: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->u64 = *(uint64_t *)&reg[des];
        insresult("%4X: return_r16_u64 r%d \tresult:%llu\n",
                  *pc, des, actor->u64);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;

    case subop_return_r16_f32: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->f32 = *(flt32_t *)&reg[des];
        insresult("%4X: return_r16_f32 r%d \tresult:%f\n",
                  *pc, des, actor->f32);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;
    case subop_return_r16_f64: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->f64 = *(flt64_t *)&reg[des];
        insresult("%4X: return_r16_f64 r%d \tresult:%lf\n",
                  *pc, des, actor->f64);
        // 更新栈数据
        insreturn();
        continue;
    }
    break;

    case subop_return_r16_ptr: // 8-8-16
    {
        uint32_t des = insarr[*pc + 1];
        actor->ptr = *(uintptr_t *)&reg[des];
        insresult("%4X: return_r16_ptr r%d \tresult:%p\n",
                  *pc, des, actor->ptr);
        // 更新栈数据
        insreturn();
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