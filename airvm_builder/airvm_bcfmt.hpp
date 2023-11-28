#ifndef __AIRVM_BCFMT_INC__
#define __AIRVM_BCFMT_INC__

#include <cstdint>
#include <map>
#include <memory>
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
        auto count = items.size();
        std::string str2 = str;
        auto res = items.insert(std::pair{str2, count});
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

// 类型头信息

struct bcfmt_type_hd_t
{
    uint32_t flag;   // 类型标识
    uint32_t name;   // 类型名称索引
    uint32_t size;   // 类型大小
    uint32_t align;  // 对齐大小
    uint32_t serial; // 类型编号
};
// 类型基类
struct bcfmt_type_base_t
{
    bcfmt_type_hd_t hd; // 类型头信息
    virtual void build(airvm_code_buffer_t &content)
    {
        content.emiter4(hd.flag);
        content.emiter4(hd.name);
        content.emiter4(hd.size);
        content.emiter4(hd.align);
    }
};

// 枚举类型
struct bcfmt_type_enum_t : public bcfmt_type_base_t
{
    uint32_t parent;             // 父类型索引
    uint32_t name;               // 类型名称字符串索引
    uint32_t count;              // 枚举成员数量
    std::vector<uint32_t> ename; // 枚举名称字符串索引数组
    airvm_code_buffer_t evalue;  // 枚举值数据

    virtual void build(airvm_code_buffer_t &content) override
    {
        bcfmt_type_base_t::build(content);
        content.emiter4(parent);
        content.emiter4(name);
        content.emiter4(count);
    }
};
// 类型数据智能指针
using bcfmt_type_ref = std::shared_ptr<bcfmt_type_base_t>;
// 类型表
struct bcfmt_typetab_t
{
    std::vector<uintptr_t> items; // 偏移信息
    airvm_code_buffer_t content;  // 类型数据
    void addItem(uintptr_t offset) { items.push_back(offset); }
};
// 类型内容表段
struct bcfmt_typearea_t
{
    std::vector<bcfmt_type_ref> items;

    // 生成一个内建类型
    bcfmt_type_base_t &genBuildinType()
    {
        auto ref = std::make_shared<bcfmt_type_base_t>();
        ref->hd.serial = (uint32_t)items.size();
        ref->hd.flag = airvm_bcfmt_type_data_init | airvm_bcfmt_type_builtin;
        items.push_back(ref);
        return *ref.get();
    }

    void build(bcfmt_typetab_t &data)
    {
        // data.content.emiter8(items.size());
        for (auto item : items)
        {
            // 记录偏移
            data.addItem(data.content.getsize());
            // 构建数据
            item->build(data.content);
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

    bcfmt_typetab_t tabtype;
    bcfmt_typearea_t areatype;

    bcfmt_functab_t tabfunc;
    bcfmt_funcarea_t areafunc;

    bcfmt_nat_t tabnat;

    /*  bcfmt_file_t()
      {
          memset(&header, 0, sizeof(header));
      }*/

    void buildin_type()
    {
        memset(&header, 0, sizeof(header));
        std::string szName;
        // 构建基本类型信息
        auto &buildin_void = areatype.genBuildinType();
        buildin_void.hd.align = 0;
        buildin_void.hd.size = 0;
        szName = "void";
        buildin_void.hd.name = areastr.addItem(szName);

        auto &buildin_bool = areatype.genBuildinType();
        buildin_bool.hd.align = 1;
        buildin_bool.hd.size = 1;
        szName = "bool";
        buildin_bool.hd.name = areastr.addItem(szName);

        auto &buildin_int8 = areatype.genBuildinType();
        buildin_int8.hd.align = 1;
        buildin_int8.hd.size = 1;
        szName = "int8";
        buildin_int8.hd.name = areastr.addItem(szName);

        auto &buildin_int16 = areatype.genBuildinType();
        buildin_int16.hd.align = 2;
        buildin_int16.hd.size = 2;
        szName = "int16";
        buildin_int16.hd.name = areastr.addItem(szName);

        auto &buildin_int32 = areatype.genBuildinType();
        buildin_int32.hd.align = 4;
        buildin_int32.hd.size = 4;
        szName = "int32";
        buildin_int32.hd.name = areastr.addItem(szName);

        auto &buildin_int64 = areatype.genBuildinType();
        buildin_int64.hd.align = sizeof(uintptr_t);
        buildin_int64.hd.size = 8;
        szName = "int64";
        buildin_int64.hd.name = areastr.addItem(szName);

        auto &buildin_uint8 = areatype.genBuildinType();
        buildin_uint8.hd.align = 1;
        buildin_uint8.hd.size = 1;
        szName = "uint8";
        buildin_uint8.hd.name = areastr.addItem(szName);

        auto &buildin_uint16 = areatype.genBuildinType();
        buildin_uint16.hd.align = 2;
        buildin_uint16.hd.size = 2;
        szName = "uint16";
        buildin_uint16.hd.name = areastr.addItem(szName);

        auto &buildin_uint32 = areatype.genBuildinType();
        buildin_uint32.hd.align = 4;
        buildin_uint32.hd.size = 4;
        szName = "uint32";
        buildin_uint32.hd.name = areastr.addItem(szName);

        auto &buildin_uint64 = areatype.genBuildinType();
        buildin_uint64.hd.align = sizeof(uintptr_t);
        buildin_uint64.hd.size = 8;
        szName = "uint64";
        buildin_uint64.hd.name = areastr.addItem(szName);

        auto &buildin_sint = areatype.genBuildinType();
        buildin_sint.hd.align = sizeof(uintptr_t);
        buildin_sint.hd.size = sizeof(uintptr_t);
        szName = "sint";
        buildin_sint.hd.name = areastr.addItem(szName);

        auto &buildin_uint = areatype.genBuildinType();
        buildin_uint.hd.align = sizeof(uintptr_t);
        buildin_uint.hd.size = sizeof(uintptr_t);
        szName = "uint";
        buildin_uint.hd.name = areastr.addItem(szName);

        auto &buildin_flt32 = areatype.genBuildinType();
        buildin_flt32.hd.align = 4;
        buildin_flt32.hd.size = sizeof(flt32_t);
        szName = "flt32";
        buildin_flt32.hd.name = areastr.addItem(szName);

        auto &buildin_flt64 = areatype.genBuildinType();
        buildin_flt64.hd.align = sizeof(uintptr_t);
        buildin_flt64.hd.size = sizeof(flt64_t);
        szName = "flt64";
        buildin_flt64.hd.name = areastr.addItem(szName);

        auto &buildin_uintptr = areatype.genBuildinType();
        buildin_uintptr.hd.align = sizeof(uintptr_t);
        buildin_uintptr.hd.size = sizeof(uintptr_t);
        szName = "uintptr";
        buildin_uintptr.hd.name = areastr.addItem(szName);

        auto &buildin_char = areatype.genBuildinType();
        buildin_uintptr.hd.align = sizeof(uintptr_t);
        buildin_uintptr.hd.size = sizeof(uintptr_t);
        szName = "char";
        buildin_uintptr.hd.name = areastr.addItem(szName);

        auto &buildin_cstring = areatype.genBuildinType();
        buildin_cstring.hd.align = sizeof(uintptr_t);
        buildin_cstring.hd.size = sizeof(uintptr_t);
        szName = "cstring";
        buildin_cstring.hd.name = areastr.addItem(szName);

        auto &buildin_string = areatype.genBuildinType();
        buildin_string.hd.align = sizeof(uintptr_t);
        buildin_string.hd.size = sizeof(uintptr_t);
        szName = "string";
        buildin_string.hd.name = areastr.addItem(szName);
    }

    void write_file(const std::string &path)
    {
        //----------计算数据索引等---------------

        // 计算字符串数据
        areastr.build(tabstr);
        // 计算类型数据
        areatype.build(tabtype);
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

        // 计算类型数据
        segtab.addItem(airvm_bcfmt_segtab_item_kind_type_table, offset);
        offset += tabtype.items.size() * sizeof(uintptr_t) + sizeof(uintptr_t);
        segtab.addItem(airvm_bcfmt_segtab_item_kind_type_data, offset);
        offset += tabtype.content.buffer.size();

        // 计算函数表区
        segtab.addItem(airvm_bcfmt_segtab_item_kind_function_table, offset);
        offset += tabfunc.items.size() * sizeof(uintptr_t) + sizeof(uintptr_t);
        segtab.addItem(airvm_bcfmt_segtab_item_kind_function_data, offset);
        offset += tabfunc.content.buffer.size();

        // 计算插件表
        if (tabnat.content.buffer.empty() == false)
        {
            segtab.addItem(airvm_bcfmt_segtab_item_kind_host_dll, offset);
            offset += tabnat.content.buffer.size();
        }

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

        // 类型表区
        data.emiter8(tabtype.items.size());
        for (auto &item : tabtype.items)
            data.emiter8(item);
        for (auto &item : tabtype.content.buffer)
            data.emiter(item);

        // 函数表区
        data.emiter8(tabfunc.items.size());
        for (auto &item : tabfunc.items)
            data.emiter8(item);
        for (auto &item : tabfunc.content.buffer)
            data.emiter(item);

        // 插件表区
        for (auto &item : tabnat.content.buffer)
            data.emiter(item);

        //------------- -保存到文件------------
        FILE *fp = nullptr;
        fopen_s(&fp, path.c_str(), "wb");
        fwrite(data.buffer.data(), 1, data.buffer.size(), fp);
        fclose(fp);
    }
};

#endif // __AIRVM_BCFMT_INC__