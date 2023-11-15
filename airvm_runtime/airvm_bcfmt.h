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



#endif // __AIRVM_BCFMT_INC__