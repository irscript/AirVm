// 函数相关指令
case op_func_subop: // 8-8-16
{
    uint32_t subop = ins & 0x00FF;

    switch (subop)
    {
        // 主机函数调用
        // func subop,dllserial,funcserial,argcnt,arg,arg1,...,argn
    case subop_call_r4_native_func: // 8-8-16-32-4,4-4-4-...-4
    {
        // dll动态库编号
        uint32_t dllserial = insarr[*pc + 1];
        // 主机函数编号
        uint32_t funcserial = (insarr[*pc + 3] << 16) | insarr[*pc + 2];
        // 获取参数数量
        uint32_t argcnt = insarr[*pc + 4] & 0xF;
        uint32_t align = (argcnt + 4) & (~3);
        // 计算并偏移量
        uint32_t shift = 4 + (align >> 2);
        insresult("%4X: call_r4_native_func\n", *pc);
        // 获取主机函数接口
        airvm_native_func_t *nat = airvm_get_native_func(func, dllserial, funcserial);
        assert(nat != 0);
        insresult("\t%u-%u : %s \n\targ: %u\n", dllserial, funcserial, nat->name->str, argcnt);

        // 分配并填充参数
        uint32_t *argv = NULL;
        if (argcnt != 0)
        {
            argv = (uint32_t *)malloc(argcnt * sizeof(uint32_t));
            uint32_t *argreg = argv;
            uint8_t *arv = (uint8_t *)&insarr[*pc + 4];

            // 取第一个参数寄存器
            uint32_t ari = (*arv) >> 4;
            *argreg = reg[ari];
            insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
            ++arv;
            ++argreg;
            uint32_t argcnt2 = argcnt - 1;
            for (uint32_t i = 0; i < argcnt2; ++i)
            {
                if (i % 2 == 0)
                    ari = (*arv) & 0xF;
                else
                {
                    ari = (*arv) >> 4;
                    ++arv;
                }
                *argreg = reg[ari];
                insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                ++argreg;
            }
        }
        // 调用函数
        uintptr_t ret = nat->entry(argcnt, argv, (uintptr_t)&actor->ptr);
        // 释放参数
        if (argv != 0)
            free(argv);

        *pc += shift;
        continue;
    }
    break;

    // 主机函数调用
    // func subop,dllserial,funcserial,argcnt,arg,arg1,...,argn
    case subop_call_r8_native_func: // 8-8-16-32-8,8-8-8-...-8
    {
        // dll动态库编号
        uint32_t dllserial = insarr[*pc + 1];
        // 主机函数编号
        uint32_t funcserial = (insarr[*pc + 3] << 16) | insarr[*pc + 2];
        // 获取参数数量
        uint32_t argcnt = insarr[*pc + 4] & 0xFF;
        uint32_t align = (argcnt + 2) & (~1);
        // 计算并偏移量
        uint32_t shift = 4 + (align >> 1);
        insresult("%4X: call_r8_native_func\n", *pc);
        // 获取主机函数接口
        airvm_native_func_t *nat = airvm_get_native_func(func, dllserial, funcserial);
        assert(nat != 0);
        insresult("\t%u-%u : %s \n\targ: %u\n", dllserial, funcserial, nat->name->str, argcnt);

        // 分配并填充参数
        uint32_t *argv = NULL;
        if (argcnt != 0)
        {
            argv = (uint32_t *)malloc(argcnt * sizeof(uint32_t));
            uint32_t *argreg = argv;
            uint8_t *arv = (uint8_t *)&insarr[*pc + 4];
            arv += 1;

            uint32_t ari;
            for (uint32_t i = 0; i < argcnt; ++i)
            {
                ari = (*arv);
                ++arv;
                *argreg = reg[ari];
                insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                ++argreg;
            }
        }
        // 调用函数
        uintptr_t ret = nat->entry(argcnt, argv, (uintptr_t)&actor->ptr);
        // 释放参数
        if (argv != 0)
            free(argv);

        *pc += shift;
        continue;
    }
    break;
    // 主机函数调用
    // func subop,dllserial,funcserial,argcnt,arg,arg1,...,argn
    case subop_call_r16_native_func: // 8-8-16-32-16,16-16-16-...-16
    {
        // dll动态库编号
        uint32_t dllserial = insarr[*pc + 1];
        // 主机函数编号
        uint32_t funcserial = (insarr[*pc + 3] << 16) | insarr[*pc + 2];
        // 获取参数数量
        uint32_t argcnt = insarr[*pc + 4];
        // 计算并偏移量
        uint32_t shift = 5 + argcnt;
        insresult("%4X: call_r16_native_func\n", *pc);
        // 获取主机函数接口
        airvm_native_func_t *nat = airvm_get_native_func(func, dllserial, funcserial);
        assert(nat != 0);
        insresult("\t%u-%u : %s \n\targ: %u\n", dllserial, funcserial, nat->name->str, argcnt);

        // 分配并填充参数
        uint32_t *argv = NULL;
        if (argcnt != 0)
        {
            argv = (uint32_t *)malloc(argcnt * sizeof(uint32_t));
            uint32_t *argreg = argv;
            uint16_t *arv = (uint16_t *)&insarr[*pc + 5];

            uint32_t ari;
            for (uint32_t i = 0; i < argcnt; ++i)
            {
                ari = (*arv);
                ++arv;
                *argreg = reg[ari];
                insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                ++argreg;
            }
        }
        // 调用函数
        uintptr_t ret = nat->entry(argcnt, argv, (uintptr_t)&actor->ptr);
        // 释放参数
        if (argv != 0)
            free(argv);

        *pc += shift;
        continue;
    }
    break;

        // 静态函数调用:func subop,funcserial,argcnt,arg,arg1,...,argn
    case subop_call_r4_static_func: // 8-8-32-4,4-4-4-...-4
    {
        // 静态函数编号
        uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
        // 获取参数数量
        uint32_t argcnt = insarr[*pc + 3] & 0xF;
        uint32_t align = (argcnt + 4) & (~3);
        // 计算并偏移量
        uint32_t shift = 3 + (align >> 2);
        insresult("%4X: call_r4_static_func\n", *pc);
        // 获取函数地址
        airvm_func_t call = airvm_get_func(func, funcserial);
        assert(call != 0 && call->arg_count == argcnt);
        // 构建栈并传递参数
        airvm_build_stack(actor, call);
        insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
        if (argcnt != 0)
        {
            uint32_t argshift = call->reg_count - call->arg_count;
            uint32_t *argreg = &(actor->stack->reg_set[argshift]);
            uint8_t *arv = (uint8_t *)&insarr[*pc + 3];

            // 取第一个参数寄存器
            uint32_t ari = (*arv) >> 4;
            *argreg = reg[ari];
            insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
            ++arv;
            ++argreg;
            argcnt -= 1;
            for (uint32_t i = 0; i < argcnt; ++i)
            {
                if (i % 2 == 0)
                    ari = (*arv) & 0xF;
                else
                {
                    ari = (*arv) >> 4;
                    ++arv;
                }
                *argreg = reg[ari];
                insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                ++argreg;
            }
        }

        *pc += shift;
        insresult("\n\tresult: %X\n\n", *pc);
        // 更新运行参数
        inscallfunc();
        continue;
    }
    break;

        // 静态函数调用:func subop,funcserial,argcnt,arg,arg1,...,argn
    case subop_call_r8_static_func: // 8-8-32-8,8-8-8-...-8
    {
        // 静态函数编号
        uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
        // 获取参数数量
        uint32_t argcnt = insarr[*pc + 3] & 0xFF;
        uint32_t align = (argcnt + 2) & (~1);
        // 计算并偏移量
        uint32_t shift = 3 + (align >> 1);
        insresult("%4X: call_r8_static_func\n", *pc);
        // 获取函数地址
        airvm_func_t call = airvm_get_func(func, funcserial);
        assert(call != 0 && call->arg_count == argcnt);
        // 构建栈并传递参数
        airvm_build_stack(actor, call);
        insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
        if (argcnt != 0)
        {
            uint32_t argshift = call->reg_count - call->arg_count;
            uint32_t *argreg = &(actor->stack->reg_set[argshift]);
            uint8_t *arv = (uint8_t *)&insarr[*pc + 3];
            arv += 1;

            uint32_t ari;
            for (uint32_t i = 0; i < argcnt; ++i)
            {
                ari = (*arv);
                ++arv;
                *argreg = reg[ari];
                insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                ++argreg;
            }
        }

        *pc += shift;
        insresult("\n\tresult: %X\n\n", *pc);
        // 更新运行参数
        inscallfunc();
        continue;
    }
    break;
        // 静态函数调用:func subop,funcserial,argcnt,arg,arg1,...,argn
    case subop_call_r16_static_func: // 8-8-32-16,16-16-16-...-16
    {
        // 静态函数编号
        uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
        // 获取参数数量
        uint32_t argcnt = insarr[*pc + 3];
        // 计算并偏移量
        uint32_t shift = 4 + argcnt;
        insresult("%4X: call_r16_static_func\n", *pc);
        // 获取函数地址
        airvm_func_t call = airvm_get_func(func, funcserial);
        assert(call != 0 && call->arg_count == argcnt);
        // 构建栈并传递参数
        airvm_build_stack(actor, call);
        insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
        if (argcnt != 0)
        {
            uint32_t argshift = call->reg_count - call->arg_count;
            uint32_t *argreg = &(actor->stack->reg_set[argshift]);
            uint16_t *arv = (uint16_t *)&insarr[*pc + 4];
            // arv += 1;

            uint32_t ari = 0;

            for (uint32_t i = 0; i < argcnt; ++i)
            {
                ari = (*arv);
                ++arv;
                *argreg = reg[ari];
                insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                ++argreg;
            }
        }

        *pc += shift;
        insresult("\n\tresult: %X\n\n", *pc);
        // 更新运行参数
        inscallfunc();
        continue;
    }
    break;

        // 成员函数调用:func subop,funcserial,argcnt,this,arg1,...,argn
    case subop_call_r4_member_func: // 8-8-32-4,4-4-4-...-4
    {
        // 成员函数编号
        uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
        // 获取参数数量
        uint32_t argcnt = insarr[*pc + 3] & 0xF;
        assert(argcnt != 0);
        uint32_t align = (argcnt + 4) & (~3);
        // 计算并偏移量
        uint32_t shift = 3 + (align >> 2);
        insresult("%4X: call_r4_member_func\n", *pc);
        // 获取函数地址
        airvm_func_t call = airvm_get_func(func, funcserial);
        // 计算真正的函数的参数寄存器个数
        uint32_t realargcnt = argcnt + sizeof(uintptr_t) / sizeof(uint32_t) - 1;
        assert(call != 0 && call->arg_count == realargcnt);
        // 构建栈并传递参数
        airvm_build_stack(actor, call);
        insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
        // if (argcnt != 0)
        {
            uint32_t argshift = call->reg_count - call->arg_count;
            uint32_t *argreg = &(actor->stack->reg_set[argshift]);
            uint8_t *arv = (uint8_t *)&insarr[*pc + 3];

            // 取this寄存器
            uint32_t thisreg = (*arv) >> 4;
            ++arv;
            argcnt -= 1;

            uint32_t ari;
            for (uint32_t i = 0; i < argcnt; ++i)
            {
                if (i % 2 == 0)
                    ari = (*arv) & 0xF;
                else
                {
                    ari = (*arv) >> 4;
                    ++arv;
                }
                *argreg = reg[ari];
                insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                ++argreg;
            }
            // 传入this参数
            (*(uintptr_t *)argreg) = *(uintptr_t *)&reg[thisreg];
            insresult("\tthis r%d\n", thisreg);
        }

        *pc += shift;
        insresult("\n\tresult: %X\n\n", *pc);
        // 更新运行参数
        inscallfunc();
        continue;
    }
    break;

        // 成员函数调用:func subop,funcserial,argcnt,this,arg1,...,argn
    case subop_call_r8_member_func: // 8-8-32-8,8-8-8-...-8
    {
        // 成员函数编号
        uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
        // 获取参数数量
        uint32_t argcnt = insarr[*pc + 3] & 0xFF;
        assert(argcnt != 0);
        uint32_t align = (argcnt + 2) & (~1);
        // 计算并偏移量
        uint32_t shift = 3 + (align >> 1);
        insresult("%4X: call_r8_member_func\n", *pc);
        // 获取函数地址
        airvm_func_t call = airvm_get_func(func, funcserial);
        // 计算真正的函数的参数寄存器个数
        uint32_t realargcnt = argcnt + sizeof(uintptr_t) / sizeof(uint32_t) - 1;
        assert(call != 0 && call->arg_count == realargcnt);
        // 构建栈并传递参数
        airvm_build_stack(actor, call);
        insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
        // if (argcnt != 0)
        {
            uint32_t argshift = call->reg_count - call->arg_count;
            uint32_t *argreg = &(actor->stack->reg_set[argshift]);
            uint8_t *arv = (uint8_t *)&insarr[*pc + 3];
            arv += 1;

            uint32_t thisreg = (*arv);
            arv += 1;

            uint32_t ari;
            argcnt -= 1;
            for (uint32_t i = 0; i < argcnt; ++i)
            {
                ari = (*arv);
                ++arv;
                *argreg = reg[ari];
                insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                ++argreg;
            }
            // 传入this参数
            (*(uintptr_t *)argreg) = *(uintptr_t *)&reg[thisreg];
            insresult("\tthis r%d\n", thisreg);
        }

        *pc += shift;
        insresult("\n\tresult: %X\n\n", *pc);
        // 更新运行参数
        inscallfunc();
        continue;
    }
    break;
        // 成员函数调用:func subop,funcserial,argcnt,this,arg1,...,argn
    case subop_call_r16_member_func: // 8-8-32-16,16-16-16-...-16
    {
        // 成员函数编号
        uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
        // 获取参数数量
        uint32_t argcnt = insarr[*pc + 3];
        assert(argcnt != 0);
        // 计算并偏移量
        uint32_t shift = 4 + argcnt;
        insresult("%4X: call_r16_member_func\n", *pc);
        // 获取函数地址
        airvm_func_t call = airvm_get_func(func, funcserial);
        // 计算真正的函数的参数寄存器个数
        uint32_t realargcnt = argcnt + sizeof(uintptr_t) / sizeof(uint32_t) - 1;
        assert(call != 0 && call->arg_count == realargcnt);
        // 构建栈并传递参数
        airvm_build_stack(actor, call);
        insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
        // if (argcnt != 0)
        {
            uint32_t argshift = call->reg_count - call->arg_count;
            uint32_t *argreg = &(actor->stack->reg_set[argshift]);

            uint32_t thisreg = insarr[*pc + 4];

            uint16_t *arv = (uint16_t *)&insarr[*pc + 5];
            uint32_t ari = 0;
            argcnt -= 1;
            for (uint32_t i = 0; i < argcnt; ++i)
            {
                ari = (*arv);
                ++arv;
                *argreg = reg[ari];
                insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                ++argreg;
            }
            // 传入this参数
            (*(uintptr_t *)argreg) = *(uintptr_t *)&reg[thisreg];
            insresult("\tthis r%d\n", thisreg);
        }

        *pc += shift;
        insresult("\n\tresult: %X\n\n", *pc);
        // 更新运行参数
        inscallfunc();
        continue;
    }
    break;
        /*
        // 虚函数函数调用:func subop,funcserial,argcnt,this,arg1,...,argn
        case subop_call_r4_virtual_func: // 8-8-16-4,4-4-4-...-4
        {
            // 虚函数编号
            uint32_t funcserial = insarr[*pc + 1];
            // 获取参数数量
            uint32_t argcnt = insarr[*pc + 2] & 0xF;
            assert(argcnt != 0);
            uint32_t align = (argcnt + 4) & (~3);
            // 计算并偏移量
            uint32_t shift = 3 + (align >> 2);
            insresult("%4X: call_r4_member_func\n", *pc);
            // 取this寄存器
            uint32_t thisreg = (insarr[*pc + 2] & 0xFF) >> 4;
            // 获取函数地址
            airvm_func_t call = airvm_get_func(func, funcserial);
            // 计算真正的函数的参数寄存器个数
            uint32_t realargcnt = argcnt + sizeof(uintptr_t) / sizeof(uint32_t) - 1;
            assert(call != 0 && call->arg_count == realargcnt);
            // 构建栈并传递参数
            airvm_build_stack(actor, call);
            insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
            // if (argcnt != 0)
            {
                uint32_t argshift = call->reg_count - call->arg_count;
                uint32_t *argreg = &(actor->stack->reg_set[argshift]);
                uint8_t *arv = (uint8_t *)&insarr[*pc + 2];

                ++arv;
                argcnt -= 1;

                uint32_t ari;
                for (uint32_t i = 0; i < argcnt; ++i)
                {
                    if (i % 2 == 0)
                        ari = (*arv) & 0xF;
                    else
                    {
                        ari = (*arv) >> 4;
                        ++arv;
                    }
                    *argreg = reg[ari];
                    insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                    ++argreg;
                }
                // 传入this参数
                (*(uintptr_t *)argreg) = *(uintptr_t *)&reg[thisreg];
                insresult("\tthis r%d\n", thisreg);
            }

            *pc += shift;
            insresult("\n\tresult: %X\n\n", *pc);
            // 更新运行参数
            inscallfunc();
            continue;
        }
        break;
        // 虚函数调用:func subop,funcserial,argcnt,this,arg1,...,argn
        case subop_call_r8_virtual_func: // 8-8-16-8,8-8-8-...-8
        {
            // 静态函数编号
            uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
            // 获取参数数量
            uint32_t argcnt = insarr[*pc + 3] & 0xFF;
            uint32_t align = (argcnt + 2) & (~1);
            // 计算并偏移量
            uint32_t shift = 3 + (align >> 1);
            insresult("%4X: call_r8_member_func\n", *pc);
            // 获取函数地址
            airvm_func_t call = airvm_get_func(func, funcserial);
            assert(call != 0 && call->arg_count == argcnt);
            // 构建栈并传递参数
            airvm_build_stack(actor, call);
            insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
            if (argcnt != 0)
            {
                uint32_t argshift = call->reg_count - call->arg_count;
                uint32_t *argreg = &(actor->stack->reg_set[argshift]);
                uint8_t *arv = (uint8_t *)&insarr[*pc + 3];
                arv += 1;

                uint32_t ari = 0;

                for (uint32_t i = 0; i < argcnt; ++i)
                {
                    ari = (*arv);
                    ++arv;
                    *argreg = reg[ari];
                    insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                    ++argreg;
                }
            }

            *pc += shift;
            insresult("\n\tresult: %X\n\n", *pc);
            // 更新运行参数
            inscallfunc();
            continue;
        }
        break;
            // 虚函数调用:func subop,funcserial,argcnt,this,arg1,...,argn
        case subop_call_r16_virtual_func: // 8-8-16-16,16-16-16-...-16
        {
            // 静态函数编号
            uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
            // 获取参数数量
            uint32_t argcnt = insarr[*pc + 3];
            // 计算并偏移量
            uint32_t shift = 4 + argcnt;
            insresult("%4X: call_r16_virtual_func\n", *pc);
            // 获取函数地址
            airvm_func_t call = airvm_get_func(func, funcserial);
            assert(call != 0 && call->arg_count == argcnt);
            // 构建栈并传递参数
            airvm_build_stack(actor, call);
            insresult("\t%u : %s \n\targ: %u\n", funcserial, airvm_get_func_name(call)->str, argcnt);
            if (argcnt != 0)
            {
                uint32_t argshift = call->reg_count - call->arg_count;
                uint32_t *argreg = &(actor->stack->reg_set[argshift]);
                uint16_t *arv = (uint16_t *)&insarr[*pc + 4];
                // arv += 1;

                uint32_t ari = 0;

                for (uint32_t i = 0; i < argcnt; ++i)
                {
                    ari = (*arv);
                    ++arv;
                    *argreg = reg[ari];
                    insresult("\tr%d: 0x%X\t%d\t%f\n", ari, *argreg, *argreg, *(flt32_t *)argreg);
                    ++argreg;
                }
            }

            *pc += shift;
            insresult("\n\tresult: %X\n\n", *pc);
            // 更新运行参数
            inscallfunc();
            continue;
        }
        break;
        */

    // 获取静态/成员函数地址:func funcserial,des : 8-8-32-16
    case subop_get_static_func_ptr:
    {
        // 静态函数编号
        uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
        // 获取函数
        airvm_func_t call = airvm_get_func(func, funcserial);
        // 存储函数
        uint32_t des = insarr[*pc + 3];
        *(uintptr_t *)&reg[des] = (uintptr_t)call;
        insresult("%4X: get_static_func_ptr %u,\tr%d  ptr:0x%p\n", *pc, funcserial, des, call);
        *pc += 4;
        continue;
    }
    break;
    case subop_get_member_func_ptr:
    {
        // 静态函数编号
        uint32_t funcserial = (insarr[*pc + 2] << 16) | insarr[*pc + 1];
        // 获取函数
        airvm_func_t call = airvm_get_func(func, funcserial);
        // 存储函数
        uint32_t des = insarr[*pc + 3];
        *(uintptr_t *)&reg[des] = (uintptr_t)call;
        insresult("%4X: get_member_func_ptr %u,\tr%d  ptr:0x%p\n", *pc, funcserial, des, call);
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