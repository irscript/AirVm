#include <stdio.h>
#include <stdint.h>
#include <airvm_runtime.h>
uint8_t gdata[10*1024];
int main()
{
   // system("chcp 65001");
    FILE *fp = 0;
    fopen_s(&fp, "test.bc", "rb");
    uint32_t len = fread_s(gdata, sizeof(gdata), 1, sizeof(gdata), fp);
    fclose(fp);

    airvm_func_t func = (airvm_func_t)gdata;
    airvm_actor_t actor = airvm_run(NULL, func, 1);

    return 0;
}
