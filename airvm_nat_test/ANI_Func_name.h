#ifndef __ANI_FUNC_NAME_DEF_INC__
#define __ANI_FUNC_NAME_DEF_INC__

#include "ANI.h"

#define ANI_STRING(name, str) airvm_ani_string_t gFN##name = {sizeof(str) - 1, str}

ANI_STRING(test, "test");
ANI_STRING(print, "print");
ANI_STRING(add_i32, "add_i32");
ANI_STRING(callback, "callback");
#undef ANI_STRING

#endif // __ANI_FUNC_NAME_DEF_INC__