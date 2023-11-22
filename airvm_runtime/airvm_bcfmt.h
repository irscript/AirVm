#ifndef __AIRVM_BCFMT_INC__
#define __AIRVM_BCFMT_INC__
#include <stdint.h>
#include <windows.h>
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
    } item[];             // 项
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

typedef struct airvm_plugin *airvm_plugin_t;
typedef struct
{
    uintptr_t count; // 项数量
    struct
    {
        uint32_t name;      // 动态库的名称，在字符串表中的编号
        uint32_t version;   // 编译时查询的版本号，用于兼容性判断
        airvm_plugin_t nat; // 库加载验证后的插件表数据地址
    } item[];               // 项
} bcfmt_nattab_t;           // 主机库表

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
    uintptr_t size;   // 文件大小

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

#endif // __AIRVM_BCFMT_INC__