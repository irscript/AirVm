#ifndef __AIRVM_BCFMT_INC__
#define __AIRVM_BCFMT_INC__

#include <cstdint>
#include <map>
#include <set>
#include <string>
#include <vector>

#include <cstring>
#include <stdlib.h>

#include "airins_emiter.hpp"
#include <airvm_bcfmt_enum.h>
// 字节码文件定义
// 文件头
struct bcfmt_header_t
{
    uint8_t magic[4]; // 魔数
    uint8_t hash[16]; // 哈希
    uint16_t fomart;  // 文件格式版本
    uint16_t insver;  // 指令版本
    uint32_t kind;    // 文件内别
    uint32_t flag;    // 声明标志
    uint64_t time;    // 生成时间
};
// 段表
struct bcfmt_segtab_t
{
    struct Item
    {
        uint32_t kind;   // 项类别
        uint32_t offset; // 项数据偏移，地址计算后是实际地址
    };
    std::vector<Item> items;

    void addItem(uint32_t kind, uint32_t offset) { items.push_back(Item{kind, offset}); }
};

// 字符串表
struct bcfmt_strstab_t
{
    std::vector<uintptr_t> items; // 偏移信息
    airvm_code_buffer_t content;  // 字符串数据
};

// 字符串内容表
struct bcfmt_strsarea_t
{
    std::map<std::string, uint32_t> items;

    // 插入返回编号
    uint32_t addItem(const std::string &str)
    {
        auto res = items.insert({str, items.size()});
        return res.first->second;
    }
    // 字符串表
    void build(bcfmt_strstab_t &data)
    {
        data.items.resize(items.size());
        for (auto &iter : items)
        { // 记录偏移量
            data.items[iter.second] = data.content.getsize();
            // 填充数据
            uint16_t len = iter.first.length();
            // 填充长度
            data.content.emiter2(len);
            // 填充字符串
            for (auto ch : iter.first)
                data.content.emiter(ch);
            data.content.emiter(0);
            // 2 字节对齐
            if (len % 2 == 0)
                data.content.emiter(0);
        }
        // 4 字节对齐
        uint32_t len = data.content.getsize() % 4;
        if (len != 0)
        {
            len = 4 - len;
            for (uint32_t i = 0; i < len; ++i)
                data.content.emiter(0);
        }
    }
};
// 函数表
struct bcfmt_functab_t
{
    std::vector<uintptr_t> items;
    airvm_code_buffer_t content; // 函数数据
    void addItem(uintptr_t offset) { items.push_back(offset); }
};
// 函数内容
struct bcfmt_funcarea_t
{
    struct Item
    {
        uint32_t func_flag;            // 函数标记
        uint32_t name_index;           // 名称字符串索引
        uint16_t reg_count;            // 函数需要的寄存器数量
        uint16_t arg_count;            // 函数的参数数量
        Emiter func_code;              // 函数的代码
        airvm_code_buffer_t func_data; // 函数的背景数据
    };
    std::vector<Item> items;
    // 生成一个函数内容
    Item &genItem() { return items.emplace_back(); }

    void build(bcfmt_functab_t &data)
    {
        for (auto &func : items)
        {
            // 生成索引
            data.addItem(data.content.getsize());
            // 判断函数是否存在背景数据
            if (func.func_data.getsize() == 0)
                func.func_flag |= airvm_bcfmt_func_no_data;

            // 生成函数头信息
            data.content.emiter4(func.func_flag);  // 函数标记
            data.content.emiter4(func.name_index); // 名称字符串索引
            data.content.emiter8(0);               // 背景数据偏移
            data.content.emiter2(func.reg_count);  // 函数需要的寄存器数量
            data.content.emiter2(func.arg_count);  // 函数的参数数量

            uint32_t codelen = func.func_code.code.buffer.size();
            codelen /= 2;
            data.content.emiter4(codelen); // 函数的指令条数
            // 指令数据
            for (auto &it : func.func_code.code.buffer)
                data.content.emiter(it);
            // 背景数据
            for (auto &it : func.func_data.buffer)
                data.content.emiter(it);
            // 4 字节对齐
            uint32_t len = data.content.getsize() % 4;
            if (len != 0)
            {
                len = 4 - len;
                for (uint32_t i = 0; i < len; ++i)
                    data.content.emiter(0);
            }
        }
    }
};

// dll插件
struct bcfmt_nat_t
{
    struct Item
    {
        uint32_t name;    // 名称字符串索引
        uint32_t version; // 版本号
        // uintptr_t meta;   // 插件信息元地址
    };
    std::vector<Item> items;

    Item &genItem() { return items.emplace_back(); }
    airvm_code_buffer_t content;

    void build()
    {
        if (items.empty())
            return;
        content.emiter8(items.size());
        for (auto &item : items)
        {
            content.emiter4(item.name);
            content.emiter4(item.version);
            content.emiter8(0);
            content.emiter8(0);
        }
    }
};

// 字节码文件
struct bcfmt_file_t
{
    bcfmt_header_t header;
    bcfmt_segtab_t segtab;

    bcfmt_strstab_t tabstr;
    bcfmt_strsarea_t areastr;

    bcfmt_functab_t tabfunc;
    bcfmt_funcarea_t areafunc;

    bcfmt_nat_t tabnat;

    bcfmt_file_t()
    {
        memset(&header, 0, sizeof(header));
    }

    void write_file(const std::string &path)
    {
        //----------计算数据索引等---------------

        // 计算字符串数据
        areastr.build(tabstr);
        // 计算 dll 数据
        tabnat.build();
        // 计算函数数据
        areafunc.build(tabfunc);

        // --------------计算段表数据----------------
        uint32_t offset = 0;
        // 计算字符串表区
        segtab.addItem(airvm_bcfmt_segtab_item_kind_string_table, offset);
        offset += tabstr.items.size() * sizeof(uintptr_t) + sizeof(uintptr_t);
        segtab.addItem(airvm_bcfmt_segtab_item_kind_string_data, offset);
        offset += tabstr.content.buffer.size();
        // 计算插件表
        if (tabnat.content.buffer.empty() == false)
        {
            segtab.addItem(airvm_bcfmt_segtab_item_kind_host_dll, offset);
            offset += tabnat.content.buffer.size();
        }

        // 计算函数表区
        segtab.addItem(airvm_bcfmt_segtab_item_kind_function_table, offset);
        offset += tabfunc.items.size() * sizeof(uintptr_t) + sizeof(uintptr_t);
        segtab.addItem(airvm_bcfmt_segtab_item_kind_function_data, offset);
        offset += tabfunc.content.buffer.size();

        // --------------头部数据填充--------------
        airvm_code_buffer_t data;
        //---------文件头----------
        header.magic[0] = '#';
        header.magic[1] = 'A';
        header.magic[2] = 'I';
        header.magic[3] = 'R';
        data.emiter(header.magic[0]); // 魔数
        data.emiter(header.magic[1]);
        data.emiter(header.magic[2]);
        data.emiter(header.magic[3]);
        // 哈希
        {
            data.emiter(header.hash[0]);
            data.emiter(header.hash[1]);
            data.emiter(header.hash[2]);
            data.emiter(header.hash[3]);
            data.emiter(header.hash[4]);
            data.emiter(header.hash[5]);
            data.emiter(header.hash[6]);
            data.emiter(header.hash[7]);
            data.emiter(header.hash[8]);
            data.emiter(header.hash[9]);
            data.emiter(header.hash[10]);
            data.emiter(header.hash[11]);
            data.emiter(header.hash[12]);
            data.emiter(header.hash[13]);
            data.emiter(header.hash[14]);
            data.emiter(header.hash[15]);
        }

        data.emiter2(header.fomart); // 文件格式版本
        data.emiter2(header.insver); // 指令版本
        data.emiter4(header.kind);   // 文件内别
        data.emiter4(header.flag);   // 声明标志
        data.emiter8(header.time);   // 生成时间

        //-----------段表----------
        data.emiter4(segtab.items.size());
        for (auto &item : segtab.items)
        {
            data.emiter4(item.kind);
            data.emiter4(item.offset);
        }
        // 字符串表区
        data.emiter8(tabstr.items.size());
        for (auto &item : tabstr.items)
            data.emiter8(item);
        for (auto &item : tabstr.content.buffer)
            data.emiter(item);

        // 插件库
        for (auto &item : tabnat.content.buffer)
            data.emiter(item);

        // 函数表区
        data.emiter8(tabfunc.items.size());
        for (auto &item : tabfunc.items)
            data.emiter8(item);
        for (auto &item : tabfunc.content.buffer)
            data.emiter(item);

        //------------- -保存到文件------------
        FILE *fp = nullptr;
        fopen_s(&fp, path.c_str(), "wb");
        fwrite(data.buffer.data(), 1, data.buffer.size(), fp);
        fclose(fp);
    }
};

#endif // __AIRVM_BCFMT_INC__