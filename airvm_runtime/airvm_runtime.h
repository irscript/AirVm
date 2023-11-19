#ifndef __AIRVM_RUNTIME_INC__
#define __AIRVM_RUNTIME_INC__

#include <Precompiled.h>

typedef struct airvm_actuator *airvm_actor_t; // 虚拟机执行器上下文
typedef struct airvm_function *airvm_func_t;  // 虚拟机执行的函数
typedef void (*airvm_native_func_t)();        // 插件提供的本地函数

typedef struct
{

} airvm_config;

// 初始化
void airvm_init(const airvm_config *config);

// 获取一个执行器上下文
airvm_actor_t airvm_alloc_actor();
// 释放执行器上下文
void airvm_free_actor(airvm_actor_t* actor);
// 设置运行函数函数栈
void airvm_set_func(airvm_actor_t actor, airvm_func_t func);

// 运行函数
void airvm_run(airvm_actor_t actor);

#endif // __AIRVM_RUNTIME_INC__