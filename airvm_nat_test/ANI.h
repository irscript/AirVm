#ifndef __ANI_INC__
#define __ANI_INC__

#include <stdint.h>

// 接口声明定义

// 基本类型定义
typedef int8_t airvm_int8_t;
typedef int16_t airvm_int16_t;
typedef int32_t airvm_int32_t;
typedef int64_t airvm_int64_t;

typedef uint8_t airvm_uint8_t;
typedef uint16_t airvm_uint16_t;
typedef uint32_t airvm_uint32_t;
typedef uint64_t airvm_uint64_t;

typedef intptr_t airvm_sint_t;
typedef uintptr_t airvm_uint_t;

typedef uintptr_t airvm_pointer_t;

typedef float airvm_flt32_t;
typedef double airvm_fltt64_t;

typedef uintptr_t airvm_actor_t; // 代码执行器指针
typedef uintptr_t airvm_func_t;  // 虚拟机函数指针

// 声明使用的字符串
typedef struct
{
    airvm_uint16_t len;  // 字符串长度
    airvm_uint8_t str[]; // 字符串名称
} airvm_ani_string_t;

// 接口函数
typedef struct
{
    airvm_ani_string_t *name;                       // 函数名称
    airvm_pointer_t (*entry)(airvm_uint32_t argc,   // 参数数量
                             airvm_uint32_t argv[], // 参数数值
                             airvm_pointer_t ret    // 异常情况返回
    );                                              // 函数入口
} airvm_ani_func_t;
// 接口函数表
typedef struct
{
    airvm_uint32_t fun_count; // 插件函数数量
    airvm_ani_func_t funcs[]; // 插件函数
} airvm_ani_func_table_t;

// 总接口表
typedef struct
{
    airvm_uint32_t version;         // 版本号
    void (*terminal)();             // 库卸载函数
    airvm_ani_func_table_t *tabfun; // 接口函数表
} airvm_ani_mate_t;

// 提供给插件库使用的函数接口
typedef struct airvm_interface
{
    // 获取一个执行器上下文
    airvm_actor_t (*airvm_alloc_actor)();
    // 释放执行器上下文
    void (*airvm_free_actor)(airvm_actor_t *actor);
    // 设置运行函数函数栈
    airvm_int32_t (*airvm_set_func)(airvm_actor_t actor, airvm_func_t func, airvm_uint32_t argc, airvm_uint32_t *argv);
    // 运行函数
    void (*airvm_run)(airvm_actor_t actor);
} *airvm_interface_t;

// 每个主机插件库初始化函数
airvm_ani_mate_t *nat_dll_init(airvm_interface_t inf, airvm_uint32_t version);
// 每个主机插件库终结化函数
void nat_dll_terminal();

#endif // __ANI_INC__
