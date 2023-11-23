#include "ANI_Func_table.h"

airvm_interface_t gNatVMINF = 0;      // 记录虚拟机提供的接口
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