#ifndef __ANI_FUNC_TABLE_INC__
#define __ANI_FUNC_TABLE_INC__

#include "ANI_Func.h"

#define ANI_FUNC(func)   \
    {                    \
        &gFN##func, func \
    }

airvm_ani_func_table_t gNAIFunTab = {
    4,
    {
        ANI_FUNC(test),
        ANI_FUNC(print),
        ANI_FUNC(add_i32),
        ANI_FUNC(callback),
    }};

#endif // __ANI_FUNC_TABLE_INC__