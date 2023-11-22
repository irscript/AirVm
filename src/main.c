#include <airvm_runtime.h>
#include <stdint.h>
#include <stdio.h>
uint8_t gdata[10 * 1024];
int main()
{
    /* // system("chcp 65001");
     FILE *fp = 0;
     fopen_s(&fp, "test.bc", "rb");
     uint32_t len = fread_s(gdata, sizeof(gdata), 1, sizeof(gdata), fp);
     fclose(fp);

     airvm_func_t func = (airvm_func_t)gdata;
     airvm_actor_t actor = airvm_alloc_actor();
     airvm_set_func(actor, func);

     airvm_run(actor);

     airvm_free_actor(&actor);
     */

    airvm_config cfg;
    cfg.mainfile = "call_test.ave";

    uintptr_t content = airvm_init(&cfg);
    
    // 获取入口函数
    airvm_func_t main = airvm_get_entry(content);
    // 分配执行器
    airvm_actor_t actor = airvm_alloc_actor();
    // 设置运行函数
    airvm_set_func(actor, main);
    // 运行函数
    airvm_run(actor);
    // 释放执行器
    airvm_free_actor(&actor);

    airvm_terminal();

    return 0;
}
