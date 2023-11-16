// 寄存器间赋值:op subop,des,src  : src => des :8-8-16-16
case op_mov_r16_subop:
{
    uint32_t subop = ins & 0x00FF;
    uint32_t des = insarr[*pc + 1];
    uint32_t src = insarr[*pc + 2];

    switch (subop)
    {
        // 32 bit 赋值
    case subop_mov_w32_sb0:
    {
        reg[des] = (int32_t)((int8_t *)&reg[src])[0];
        insresult("%4X: mov_w32_r16_sb0  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w32_ub0:
    {
        reg[des] = (uint32_t)((uint8_t *)&reg[src])[0];
        insresult("%4X: mov_w32_r16_ub0  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w32_sb1:
    {
        reg[des] = (int32_t)((int8_t *)&reg[src])[1];
        insresult("%4X: mov_w32_r16_sb1  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w32_ub1:
    {
        reg[des] = (uint32_t)((uint8_t *)&reg[src])[1];
        insresult("%4X: mov_w32_r16_ub1  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w32_sb2:
    {
        reg[des] = (int32_t)((int8_t *)&reg[src])[2];
        insresult("%4X: mov_w32_r16_sb2  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w32_ub2:
    {
        reg[des] = (uint32_t)((uint8_t *)&reg[src])[2];
        insresult("%4X: mov_w32_r16_ub2  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w32_sb3:
    {
        reg[des] = (int32_t)((int8_t *)&reg[src])[3];
        insresult("%4X: mov_w32_r16_sb3  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w32_ub3:
    {
        reg[des] = (uint32_t)((uint8_t *)&reg[src])[3];
        insresult("%4X: mov_w32_r16_ub3  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;

    case subop_mov_w32_sh16:
    {
        reg[des] = (int32_t)((int16_t *)&reg[src])[1];
        insresult("%4X: mov_w32_r16_sh16  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w32_uh16:
    {
        reg[des] = (uint32_t)((uint16_t *)&reg[src])[1];
        insresult("%4X: mov_w32_r16_uh16  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w32_sl16:
    {
        reg[des] = (int32_t)((int16_t *)&reg[src])[0];
        insresult("%4X: mov_w32_r16_sl16  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w32_ul16:
    {
        reg[des] = (uint32_t)((uint16_t *)&reg[src])[0];
        insresult("%4X: mov_w32_r16_ul16  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    }
    break;

    case subop_mov_w32_i32:
    {
        reg[des] = reg[src];
        insresult("%4X: mov_w32_r16_i32  \tr%d, \tr%d \tresult: %d\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    };
    break;
    case subop_mov_w32_u32:
    {
        reg[des] = reg[src];
        insresult("%4X: mov_w32_r16_u32  \tr%d, \tr%d \tresult: %u\n", *pc, des, src, reg[des]);
        *pc += 3;
        continue;
    };
    break;
    case subop_mov_w32_f32:
    {
        reg[des] = reg[src];
        insresult("%4X: mov_w32_r16_f32  \tr%d, \tr%d \tresult: %f\n", *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    };
    break;
    case subop_bitcast_w32:
    {
        reg[des] = reg[src];
        insresult("%4X: mov_w32_r16_bitcast  \tr%d, \tr%d \tresult: %d \t%u \t%f\n", *pc, des, src, reg[des], reg[des], *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    };
    break;
        // 64 bit 赋值
    case subop_mov_w64_sb0:
    {
        *(int64_t *)&reg[des] = (int32_t)((int8_t *)&reg[src])[0];
        insresult("%4X: mov_w64_r16_sb0  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w64_ub0:
    {
        *(uint64_t *)&reg[des] = (uint32_t)((uint8_t *)&reg[src])[0];
        insresult("%4X: mov_w64_r16_ub0  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w64_sb1:
    {
        *(int64_t *)&reg[des] = (int32_t)((int8_t *)&reg[src])[1];
        insresult("%4X: mov_w64_r16_sb1  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w64_ub1:
    {
        *(uint64_t *)&reg[des] = (uint32_t)((uint8_t *)&reg[src])[1];
        insresult("%4X: mov_w64_r16_ub1  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w64_sb2:
    {
        *(int64_t *)&reg[des] = (int32_t)((int8_t *)&reg[src])[2];
        insresult("%4X: mov_w64_r16_sb2  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w64_ub2:
    {
        *(uint64_t *)&reg[des] = (uint32_t)((uint8_t *)&reg[src])[2];
        insresult("%4X: mov_w64_r16_ub2  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w64_sb3:
    {
        *(int64_t *)&reg[des] = (int32_t)((int8_t *)&reg[src])[3];
        insresult("%4X: mov_w64_r16_sb3  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w64_ub3:
    {
        *(uint64_t *)&reg[des] = (uint32_t)((uint8_t *)&reg[src])[3];
        insresult("%4X: mov_w64_r16_ub3  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    case subop_mov_w64_sh16:
    {
        *(int64_t *)&reg[des] = (int32_t)((int16_t *)&reg[src])[1];
        insresult("%4X: mov_w64_r16_sh16  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w64_uh16:
    {
        *(uint64_t *)&reg[des] = (uint32_t)((uint16_t *)&reg[src])[1];
        insresult("%4X: mov_w64_r16_uh16  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w64_sl16:
    {
        *(int64_t *)&reg[des] = (int32_t)((int16_t *)&reg[src])[0];
        insresult("%4X: mov_w64_r16_sl16  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_mov_w64_ul16:
    {
        *(uint64_t *)&reg[des] = (uint32_t)((uint16_t *)&reg[src])[0];
        insresult("%4X: mov_w64_r16_ul16  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    case subop_mov_w64_i64:
    {
        *(int64_t *)&reg[des] = *(int64_t *)&reg[src];
        insresult("%4X: mov_w64_r16_i64  \tr%d, \tr%d \tresult: %lld\n", *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    };
    break;
    case subop_mov_w64_u64:
    {
        *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src];
        insresult("%4X: mov_w64_r16_u64  \tr%d, \tr%d \tresult: %llu\n", *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    };
    break;
    case subop_mov_w64_f64:
    {
        *(flt64_t *)&reg[des] = *(flt64_t *)&reg[src];
        insresult("%4X: mov_w64_r16_f64  \tr%d, \tr%d \tresult: %f\n", *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    };
    break;
    case subop_bitcast_w64:
    {
        *(uint64_t *)&reg[des] = *(uint64_t *)&reg[src];
        insresult("%4X: mov_w64_r16_bitcast  \tr%d, \tr%d \tresult: %lld \t%llu \t%lf\n",
                  *pc, des, src, *(uint64_t *)&reg[des], *(uint64_t *)&reg[des], *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    };
    break;

        // 整数间类型转换
    case subop_cast_i32_to_i64:
    {
        *(int64_t *)&reg[des] = *(int32_t *)&reg[src];
        insresult("%4X: cast_r16_i32_to_i64  \tr%d, \tr%d \tresult: %lld\n",
                  *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_u32_to_u64:
    {
        *(uint64_t *)&reg[des] = *(uint32_t *)&reg[src];
        insresult("%4X: cast_r16_u32_to_u64  \tr%d, \tr%d \tresult: %llu\n",
                  *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_i64_to_i32:
    {
        *(int32_t *)&reg[des] = (int32_t) * (int64_t *)&reg[src];
        insresult("%4X: cast_r16_i64_to_i32  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_u64_to_u32:
    {
        *(uint32_t *)&reg[des] = (uint32_t) * (uint64_t *)&reg[src];
        insresult("%4X: cast_r16_u64_to_u32  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, *(uint32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    // 浮点间类型转换
    case subop_cast_f32_to_f64:
    {
        *(flt64_t *)&reg[des] = *(flt32_t *)&reg[src];
        insresult("%4X: cast_r16_f32_to_f64  \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_f64_to_f32:
    {
        *(flt32_t *)&reg[des] = *(flt64_t *)&reg[src];
        insresult("%4X: cast_r16_f64_to_f32  \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    // 整数、浮点间类型转换
    case subop_cast_i32_to_f32:
    {
        *(flt32_t *)&reg[des] = *(int32_t *)&reg[src];
        insresult("%4X: cast_r16_i32_to_f32  \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_u32_to_f32:
    {
        *(flt32_t *)&reg[des] = *(uint32_t *)&reg[src];
        insresult("%4X: cast_r16_u32_to_f32  \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_i32_to_f64:
    {
        *(flt64_t *)&reg[des] = *(int32_t *)&reg[src];
        insresult("%4X: cast_r16_i32_to_f32  \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_u32_to_f64:
    {
        *(flt64_t *)&reg[des] = *(uint32_t *)&reg[src];
        insresult("%4X: cast_r16_u32_to_f32  \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    case subop_cast_i64_to_f32:
    {
        *(flt32_t *)&reg[des] = *(int64_t *)&reg[src];
        insresult("%4X: cast_r16_i64_to_f32  \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_u64_to_f32:
    {
        *(flt32_t *)&reg[des] = *(uint64_t *)&reg[src];
        insresult("%4X: cast_r16_u64_to_f32  \tr%d, \tr%d \tresult: %f\n",
                  *pc, des, src, *(flt32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_i64_to_f64:
    {
        *(flt64_t *)&reg[des] = *(int64_t *)&reg[src];
        insresult("%4X: cast_r16_i64_to_f32  \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_u64_to_f64:
    {
        *(flt64_t *)&reg[des] = *(uint64_t *)&reg[src];
        insresult("%4X: cast_r16_u64_to_f32  \tr%d, \tr%d \tresult: %lf\n",
                  *pc, des, src, *(flt64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    case subop_cast_f32_to_i32:
    {
        *(int32_t *)&reg[des] = *(flt32_t *)&reg[src];
        insresult("%4X: cast_r16_f32_to_i32  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_f32_to_u32:
    {
        *(uint32_t *)&reg[des] = *(flt32_t *)&reg[src];
        insresult("%4X: cast_r16_f32_to_u32  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, *(uint32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_f32_to_i64:
    {
        *(int64_t *)&reg[des] = *(flt32_t *)&reg[src];
        insresult("%4X: cast_r16_f32_to_i64  \tr%d, \tr%d \tresult: %lld\n",
                  *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_f32_to_u64:
    {
        *(uint64_t *)&reg[des] = *(flt32_t *)&reg[src];
        insresult("%4X: cast_r16_f32_to_u64  \tr%d, \tr%d \tresult: %llu\n",
                  *pc, des, src, *(uint64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;

    case subop_cast_f64_to_i32:
    {
        *(int32_t *)&reg[des] = *(flt64_t *)&reg[src];
        insresult("%4X: cast_r16_f64_to_i32  \tr%d, \tr%d \tresult: %d\n",
                  *pc, des, src, *(int32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_f64_to_u32:
    {
        *(uint32_t *)&reg[des] = *(flt64_t *)&reg[src];
        insresult("%4X: cast_r16_f64_to_u32  \tr%d, \tr%d \tresult: %u\n",
                  *pc, des, src, *(uint32_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_f64_to_i64:
    {
        *(int64_t *)&reg[des] = *(flt64_t *)&reg[src];
        insresult("%4X: cast_r16_f64_to_i64  \tr%d, \tr%d \tresult: %lld\n",
                  *pc, des, src, *(int64_t *)&reg[des]);
        *pc += 3;
        continue;
    }
    break;
    case subop_cast_f64_to_u64:
    {
        *(uint64_t *)&reg[des] = *(flt64_t *)&reg[src];
        insresult("%4X: cast_r16_f64_to_u64  \tr%d, \tr%d \tresult: %llu\n",
                  *pc, des, src, *(uint64_t *)&reg[des]);
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