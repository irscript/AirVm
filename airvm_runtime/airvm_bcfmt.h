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
    uint32_t count;//项数量
    struct{
        uint32_t kind;//项类别
        uint32_t offset;//项数据偏移
    }item[];
}bcfmt_segtab;

//表
typedef struct{
    uintptr_t count;//项数量
    uintptr_t item[];//项偏移，地址计算后是实际地址
}bcfmt_strtab,//字符串表
bcfmt_typetab,//类型表
bcfmt_functab;//函数表

//本地函数表
typedef struct{}bcfmt_nattab;

#endif // __AIRVM_BCFMT_INC__