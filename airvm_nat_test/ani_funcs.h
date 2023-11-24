#include "ANI.h"

airvm_interface_t gNatVMINF = 0;
#include <stdio.h>

#define ANI_Func(name) airvm_pointer_t name(airvm_uint32_t argc,   \
                                            airvm_uint32_t argv[], \
                                            airvm_pointer_t ret)

ANI_Func(test)
{
    printf("\nnat lib test!\n");
    return 0;
}

ANI_Func(print)
{
    printf("print-i32:%d\n", *argv);
    return 0;
}

ANI_Func(add_i32)
{
    if (argc == 2)
    {
        uint32_t sum = argv[0] + argv[1];
        printf("add_i32:%d\n", sum);
    }

    return 0;
}

ANI_Func(callback)
{
    airvm_func_t call = *(uintptr_t *)argv; // argv[0] | (((uintptr_t)argv[1]) << 32);
    printf("ptr:0x%p\n", call);
    // 分配执行器
    airvm_actor_t actor = gNatVMINF->airvm_alloc_actor();

    // 设置运行函数
    gNatVMINF->airvm_set_func(actor, call, 0, 0);
    // 运行函数
    gNatVMINF->airvm_run(actor);
    // 释放执行器
    gNatVMINF->airvm_free_actor(&actor);

    return 0;
}

ANI_Func(callback2)
{
    airvm_func_t call = *(uintptr_t *)argv; // argv[0] | (((uintptr_t)argv[1]) << 32);
    printf("ptr:0x%p\n", call);
    // 分配执行器
    airvm_actor_t actor = gNatVMINF->airvm_alloc_actor();
    airvm_uint32_t arg[2];
    airvm_uint32_t *dst = arg;
    ANI_PushI32(dst, -1);
    ANI_PushI32(dst, -2);
    // 设置运行函数
    gNatVMINF->airvm_set_func(actor, call, 2, arg);
    // 运行函数
    gNatVMINF->airvm_run(actor);
    // 释放执行器
    gNatVMINF->airvm_free_actor(&actor);

    return 0;
}
#undef ANI_Func
