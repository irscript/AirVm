#include "airvm_bcfmt.hpp"

void build_exe()
{
    bcfmt_file_t file;
    file.header.fomart = airvm_bcfmt_header_file_formart;
    file.header.insver = airvm_bcfmt_header_instruction_version;
    file.header.kind = airvm_bcfmt_header_file_kind_exe;

    // 添加dll项
    {
        auto &dll = file.tabnat.genItem();
        dll.name = file.areastr.addItem("liblibtest.dll");
        dll.version = 1;
    }

    // 添加 main 函数
    {
        auto &main = file.areafunc.genItem();
        main.name_index = file.areastr.addItem("main(uint32 argc,cstring argv[])->int32");
        main.arg_count = 0;
        main.reg_count = 32;
        main.func_flag = airvm_bcfmt_func_static | airvm_bcfmt_func_public;
        // 运行代码
        main.func_code.const_r4_imm4(op_const_w32_r4_i4, 0, -2);
        main.func_code.const_r4_imm4(op_const_w32_r4_u4, 1, 15);
        main.func_code.const_r4_imm4(op_const_w32_r4_u4, 2, 15);

        // 调用静态函数
        std::vector<uint8_t> arg;
        arg.push_back(3);
        arg.push_back(0);
        arg.push_back(1);
        arg.push_back(2);
        main.func_code.call_r4_static_func(1, arg);
        main.func_code.getret_reg(subop_getret_w32_r16_i32, 0);

        main.func_code.call_r8_static_func(1, arg);
        main.func_code.getret_reg(subop_getret_w32_r16_i32, 0);

        std::vector<uint16_t> arg2;
        arg2.push_back(3);
        arg2.push_back(0);
        arg2.push_back(1);
        arg2.push_back(2);
        main.func_code.call_r16_static_func(1, arg2);
        main.func_code.getret_reg(subop_getret_w32_r16_i32, 0);

        // 调用dll函数
        std::vector<uint8_t> natarg;
        natarg.push_back(0);
        main.func_code.call_r4_native_func(0, 0, natarg);
        natarg.clear();
        natarg.push_back(1);
        natarg.push_back(0);
        main.func_code.call_r4_native_func(0, 1, natarg);
        natarg.clear();
        natarg.push_back(2);
        natarg.push_back(0);
        natarg.push_back(0);
        main.func_code.call_r4_native_func(0, 2, natarg);

        natarg.clear();
        natarg.push_back(0);
        main.func_code.call_r8_native_func(0, 0, natarg);
        natarg.clear();
        natarg.push_back(1);
        natarg.push_back(0);
        main.func_code.call_r8_native_func(0, 1, natarg);
        natarg.clear();
        natarg.push_back(2);
        natarg.push_back(0);
        natarg.push_back(0);
        main.func_code.call_r8_native_func(0, 2, natarg);

        {
            std::vector<uint16_t> natarg;
            natarg.push_back(0);
            main.func_code.call_r16_native_func(0, 0, natarg);
            natarg.clear();
            natarg.push_back(1);
            natarg.push_back(0);
            main.func_code.call_r16_native_func(0, 1, natarg);
            natarg.clear();
            natarg.push_back(2);
            natarg.push_back(0);
            natarg.push_back(0);
            main.func_code.call_r16_native_func(0, 2, natarg);
        }

        main.func_code.return_imm16(subop_return_u16, 0);
    }
    // 添加 add 函数
    {
        auto &add = file.areafunc.genItem();
        add.name_index = file.areastr.addItem("add(int32 a,int32 b)->int32");
        add.arg_count = 3;
        add.reg_count = 4;
        add.func_flag = airvm_bcfmt_func_static | airvm_bcfmt_func_public;
        // 运行代码
        add.func_code.math3_r4(subop_math3_add_i32, 0, 1, 2);
        add.func_code.math3_r4(subop_math3_add_i32, 0, 0, 3);
        add.func_code.return_reg(subop_return_r16_i32, 0);
    }
    // 写入文件
    file.write_file("call_test.ave");
}