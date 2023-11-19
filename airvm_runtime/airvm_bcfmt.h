#ifndef __AIRVM_BCFMT_INC__
#define __AIRVM_BCFMT_INC__
#include <stdint.h>
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
    uintptr_t count; // 项数量
    struct
    {
        uintptr_t kind;   // 项类别
        uintptr_t offset; // 项数据偏移，地址计算后是实际地址
    } item[];             // 项
} bcfmt_segtab_t;

// 表
typedef struct
{
    uintptr_t count;  // 项数量
    uintptr_t item[]; // 项偏移，地址计算后是实际地址
} bcfmt_strstab_t,    // 字符串表
    bcfmt_typetab_t,  // 类型表
    bcfmt_functab_t;  // 函数表

typedef struct
{
    uintptr_t count; // 项数量
    struct
    {
        uint32_t name;    // 动态库的名称，在符号表中的编号
        uint32_t version; // 编译时查询的版本号，用于兼容性判断
        uintptr_t nat;    // 库加载验证后的插件表数据地址
    } item[];             // 项
} bcfmt_nattab_t,         // 主机库表
    bcfmt_plugtab_t;      // 插件库表

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
typedef struct bcfmt_file_t bcfmt_file_t;
struct
{
    uintptr_t handle; // 文件映射的句柄
    uintptr_t size;   // 文件大小

    bcfmt_header_t *header; // 文件头
    bcfmt_segtab_t *segtab; // 段表

    bcfmt_strstab_t *strtab;  // 字符串表
    bcfmt_typetab_t *typetab; // 类型表
    bcfmt_functab_t *functab; // 函数表

    bcfmt_nattab_t *nattab;   // 主机库表
    bcfmt_plugtab_t *plugtab; // 插件库表

    bcfmt_reltab_t *reltab; // 重定位表

} bcfmt_file_t;

#endif // __AIRVM_BCFMT_INC__