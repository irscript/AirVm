#ifndef __ANI_FUNC_NAME_DEF_INC__
#define __ANI_FUNC_NAME_DEF_INC__

#include "ANI.h"

#define ANI_STRING(name, str) airvm_ani_string_t gFN##name = {sizeof(str) - 1, str}

ANI_STRING(test, "test()->void");
ANI_STRING(print, "print(int32)->void");
ANI_STRING(add_i32, "add_i32(int32,int32)->void");
#undef ANI_STRING

#endif // __ANI_FUNC_NAME_DEF_INC__