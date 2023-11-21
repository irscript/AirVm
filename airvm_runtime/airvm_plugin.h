#ifndef __AIRVM_PLUGIN_INC__
#define __AIRVM_PLUGIN_INC__
#include <Precompiled.h>
#include <airvm_runtime.h>
typedef struct airvm_plugin_func{
    const char* name;//函数名称
    void (*entry)(uint32_t argc,uint32_t argv[],uintptr_t ret);//函数入口
} *airvm_plugin_func_t;

// 插件结构
typedef struct airvm_plugin
{
    uint32_t version;            // 版本号
    uint32_t fun_count;          // 插件函数数量
    airvm_plugin_func_t funcs[]; // 插件函数
} *airvm_plugin_t;

// 提供给插件库使用的函数接口
typedef struct airvm_interface
{
    // 获取一个执行器上下文
    airvm_actor_t (*airvm_alloc_actor)();
    // 释放执行器上下文
    void (*airvm_free_actor)(airvm_actor_t *actor);
    // 设置运行函数函数栈
    void (*airvm_set_func)(airvm_actor_t actor, airvm_func_t func);
    // 运行函数
    void (*airvm_run)(airvm_actor_t actor);
} *airvm_interface_t;

// 插件初始化函数，传人参数为插件版本号
typedef airvm_plugin_t (*plugin_init)(airvm_interface_t,uint32_t);

#endif // __AIRVM_PLUGIN_INC__