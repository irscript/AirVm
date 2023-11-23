#ifndef __ANI_FUN_DEF_INC__
#define __ANI_FUN_DEF_INC__

#include "ANI_Func_name.h"
#include <stdio.h>

airvm_interface_t gNatVMINF = 0;

airvm_pointer_t test(airvm_uint32_t argc,
                     airvm_uint32_t argv[],
                     airvm_pointer_t ret)
{
    printf("\nnat lib test!\n");
    return 0;
}
airvm_pointer_t print(airvm_uint32_t argc,
                      airvm_uint32_t argv[],
                      airvm_pointer_t ret)
{
    printf("print-i32:%d\n", *argv);
    return 0;
}
airvm_pointer_t add_i32(airvm_uint32_t argc,
                        airvm_uint32_t argv[],
                        airvm_pointer_t ret)
{
    if (argc == 2)
    {
        uint32_t sum = argv[0] + argv[1];
        printf("add_i32:%d\n", sum);
    }

    return 0;
}

airvm_pointer_t callback(airvm_uint32_t argc,
                         airvm_uint32_t argv[],
                         airvm_pointer_t ret)
{
    airvm_func_t call = (airvm_func_t)argv;
    // 分配执行器
    airvm_actor_t actor = gNatVMINF->airvm_alloc_actor();
    // 设置运行函数
    gNatVMINF->airvm_set_func(actor, call);
    // 运行函数
    gNatVMINF->airvm_run(actor);
    // 释放执行器
    gNatVMINF->airvm_free_actor(&actor);

    return 0;
}

#endif // __ANI_FUN_DEF_INC__