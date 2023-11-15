#ifndef __AIRVM_PLUGIN_INC__
#define __AIRVM_PLUGIN_INC__
#include <Precompiled.h>
typedef struct airvm_plugin_func *airvm_plugin_func_t;

// 插件结构
typedef struct airvm_plugin
{
    uint32_t version;            // 版本号
    uint32_t fun_count;          // 插件函数数量
    airvm_plugin_func_t funcs[]; // 插件函数
} *airvm_plugin_t;

// 插件初始化函数，传人参数为插件版本号
typedef airvm_plugin_t (*plugin_init)(uint32_t);

#endif // __AIRVM_PLUGIN_INC__