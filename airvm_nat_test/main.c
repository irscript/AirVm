#include "ANI.h"

// 函数定义
#include "ani_funcs.h"

// 函数名称定义
#define ANI_Func(name) airvm_ani_string_t gFN_##name = {sizeof(#name) - 1, #name};
#include "ani_name.h"
#undef ANI_Func

// 函数名称枚举值
#define ANI_Func(name) nat_func_enum_##name,
enum nat_func_enum
{
#include "ani_name.h"
    nat_func_enum_count // 函数声明计数
};
#undef ANI_Func

// 函数表定义
#define ANI_Func(func) \
    {                  \
        &gFN_##func, func},

airvm_ani_func_table_t gNAIFunTab = {
    nat_func_enum_count,
    {
#include "ani_name.h"
    }};
#undef ANI_Func


const airvm_uint32_t gNatVersion = 1; // 本库的版本
airvm_ani_mate_t gNAIMeta = {
    1,
    nat_dll_terminal,
    &gNAIFunTab

};

// 每个主机插件库初始化函数
airvm_ani_mate_t *nat_dll_init(airvm_interface_t inf, airvm_uint32_t version)
{
    gNatVMINF = inf;

    if (version != gNatVersion)
        return 0;
    return &gNAIMeta;
}
// 每个主机插件库终结化函数
void nat_dll_terminal()
{
    printf("nat-test-dll release\n");
}