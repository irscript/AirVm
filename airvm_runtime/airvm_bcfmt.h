#ifndef __AIRVM_BCFMT_INC__
#define __AIRVM_BCFMT_INC__
#include <stdint.h>
#ifdef Airvm_Plat_Window
#include <windows.h>
#endif
// 字节码文件定义
// 文件头
typedef struct
{
    uint8_t magic[4]; // 魔数
    uint8_t hash[16]; // 哈希
    uint16_t fomart;  // 文件格式版本
    uint16_t insver;  // 指令版本
    uint32_t kind;    // 文件内别
    uint32_t flag;    // 声明标志
    uint64_t time;    // 生成时间

} bcfmt_header_t;

// 段表
typedef struct
{
    uint32_t count; // 项数量
    struct
    {
        uint32_t kind;   // 项类别
        uint32_t offset; // 项数据偏移，地址计算后是实际地址
    } item[];            // 项
} bcfmt_segtab_t;

// 字符串
typedef struct
{
    uint16_t len;     // 字符串长度，不包括null字符
    const char str[]; // 字符串内容
} bcfmt_string_t;
typedef struct
{
    uintptr_t count;        // 项数量
    bcfmt_string_t *item[]; // 项偏移，地址计算后是实际地址
} bcfmt_strstab_t;          // 字符串表
// 表
typedef struct
{
    uintptr_t count;  // 项数量
    uintptr_t item[]; // 项偏移，地址计算后是实际地址
} bcfmt_typetab_t,    // 类型表
    bcfmt_varitab_t,  // 变量表
    bcfmt_functab_t;  // 函数表

// 类型数据基本头
typedef struct
{
    uint32_t flag;  // 类型标识
    uint32_t name;  // 类型名称索引
    uint32_t size;  // 类型大小
    uint32_t align; // 对齐大小
} bcfmt_type_hd_t;

typedef struct bcfmt_type_hd_t bcfmt_type_buildin_t; // 基本(内建)类型

// 枚举类型
typedef struct
{
    bcfmt_type_hd_t hd; // 类型头信息
    uint32_t parent;    // 父类型索引
    uint32_t name;      // 类型名称字符串索引
    uint32_t count;     // 枚举成员数量
    uint32_t *ename;    // 枚举名称字符串索引数组
    uint8_t *evalue;    // 枚举值数据
} bcfmt_type_enum_t;

typedef struct
{
    uint32_t name;    // 名称索引
    uint32_t type;    // 类型索引
    uintptr_t offset; // 偏移量值
} bcfmt_type_struct_var_item_t;

// 结构体类型
typedef struct
{
    bcfmt_type_hd_t hd;                    // 类型头信息
    uint32_t parent;                       // 父类型索引
    uint32_t name;                         // 类型名称字符串索引
    uint32_t vcount;                       // 成员变量数量
    uint32_t fcount;                       // 成员函数数量
    bcfmt_type_struct_var_item_t *varinfo; // 成员变量信息
    uintptr_t funcinfo[];                  // 成员函数信息
} bcfmt_type_struct_t;

// 接口类型
typedef struct
{
    bcfmt_type_hd_t hd; // 类型头信息
} bcfmt_type_interface_t;

// 类类型
typedef struct
{
    bcfmt_type_hd_t hd; // 类型头信息
} bcfmt_type_class_t;

typedef struct airvm_native *airvm_native_mate_t;
typedef struct
{
    uintptr_t count; // 项数量
    struct
    {
        uint32_t name;           // 动态库的名称，在字符串表中的编号
        uint32_t version;        // 编译时查询的版本号，用于兼容性判断
        uintptr_t handle;        // 加载文件句柄
        airvm_native_mate_t nat; // 库加载验证后的插件表数据地址
    } item[];                    // 项
} bcfmt_nattab_t;                // 主机库表

typedef struct bcfmt_file *bcfmt_file_t;
typedef struct
{
    uintptr_t count; // 项数量
    struct
    {
        uint32_t name;     // 动态库的名称，在字符串表中的编号
        uint32_t version;  // 编译时查询的版本号，用于兼容性判断
        bcfmt_file_t file; // 库加载验证后的插件表数据地址
    } item[];              // 项
} bcfmt_plugtab_t;         // 插件库表

// 重定位表
typedef struct
{
    uintptr_t count; // 项数量
    struct
    {
        uint16_t kind;   // 重定位类型
        uint16_t index;  // 重定位的库编号
        uint32_t serial; // 重定位的类型、函数的编号
    } item[];            // 项
} bcfmt_reltab_t;

// 字节码文件
typedef struct bcfmt_file
{
    uintptr_t address; // 文件映射的地址
    uintptr_t size;    // 文件大小

#ifdef Airvm_Plat_Window
    HANDLE fileHD; // 文件句柄
    HANDLE mapHD;  // 映射对象句柄
#endif

    bcfmt_header_t *header; // 文件头
    bcfmt_segtab_t *segtab; // 段表

    bcfmt_strstab_t *tabstr;  // 字符串表
    bcfmt_typetab_t *tabtype; // 类型表
    bcfmt_varitab_t *tabvari; // 变量表
    bcfmt_functab_t *tabfunc; // 函数表

    uintptr_t areastr;  // 字符串区
    uintptr_t areatype; // 类型区
    uintptr_t areavari; // 变量区
    uintptr_t areafunc; // 函数区

    bcfmt_nattab_t *tabnat;   // 主机库表
    bcfmt_plugtab_t *tabplug; // 插件库表

    bcfmt_reltab_t *reltab; // 重定位表

    bcfmt_string_t filename; // 文件名称
} bcfmt_file;

//--------------主机函数接口定义---------------------
typedef struct airvm_native_func
{
    bcfmt_string_t *name; // 函数名称
    uintptr_t (*entry)(uint32_t argc,
                       uint32_t argv[],
                       uintptr_t ret); // 函数入口
} airvm_native_func_t;

typedef struct
{
    uint32_t fun_count;          // 插件函数数量
    airvm_native_func_t funcs[]; // 插件函数
} *airvm_native_func_table_t;

// 主机信息表辅助结构
typedef struct airvm_native
{
    uint32_t version;                 // 版本号
    void (*terminal)();               // 库卸载函数
    airvm_native_func_table_t tabfun; // 接口函数表
} *airvm_native_mate_t;

// 提供给插件库使用的函数接口
typedef struct airvm_interface
{
    // 获取一个执行器上下文
    airvm_actor_t (*airvm_alloc_actor)();
    // 释放执行器上下文
    void (*airvm_free_actor)(airvm_actor_t *actor);
    // 设置运行函数函数栈
    int32_t (*airvm_set_func)(airvm_actor_t actor, airvm_func_t func, uint32_t argc, uint32_t argv[]);
    // 运行函数
    void (*airvm_run)(airvm_actor_t actor);
} airvm_interface_t;

// 插件初始化函数，传人参数为插件版本号
typedef airvm_native_mate_t (*airvm_native_init)(airvm_interface_t *, uint32_t);

#endif // __AIRVM_BCFMT_INC__