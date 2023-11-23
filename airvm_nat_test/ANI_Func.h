#ifndef __ANI_FUN_DEF_INC__
#define __ANI_FUN_DEF_INC__

#include "ANI_Func_name.h"
#include <stdio.h>
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
#endif // __ANI_FUN_DEF_INC__