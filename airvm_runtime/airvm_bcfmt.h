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

//段表
typedef struct{
    uintptr_t count;//项数量
    struct{
        uintptr_t kind;//项类别
        uintptr_t offset;//项数据偏移，地址计算后是实际地址
    }item[];//项
}bcfmt_segtab;

//表
typedef struct{
    uintptr_t count;//项数量
    uintptr_t item[];//项偏移，地址计算后是实际地址
}bcfmt_strtab,//字符串表
bcfmt_typetab,//类型表
bcfmt_functab;//函数表

typedef struct{
    uintptr_t count;//项数量
    struct{
        uint32_t name;//动态库的名称，在符号表中的编号
        uint32_t version;//编译时查询的版本号，用于兼容性判断
        uintptr_t nat;//库加载验证后的插件表数据地址
    }item[];//项
}bcfmt_nattab,//主机函数表
bcfmt_plugtab;//插件函数表

#endif // __AIRVM_BCFMT_INC__