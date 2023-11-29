#include "airvm_bcfmt.hpp"

void build_exe()
{
    bcfmt_file_t file;
    file.header.fomart = airvm_bcfmt_header_file_formart;
    file.header.insver = airvm_bcfmt_header_instruction_version;
    file.header.kind = airvm_bcfmt_header_file_kind_exe;

    file.buildin_type();
    // 添加dll项
    {
        auto &dll = file.tabnat.genItem();
        dll.name = file.areastr.addItem("liblibtest.dll");
        dll.version = 1;
    }

    // 添加 main 函数
    {
        auto &main = file.areafunc.genItem();
        main.name_index = file.areastr.addItem("main");
        main.arg_count = 0;
        main.reg_count = 32;
        main.func_flag = airvm_bcfmt_func_static | airvm_bcfmt_func_public;
        // 运行代码
        /*
        main.func_code.const_r4_imm4(op_const_w32_r4_i4, 0, -2);
       main.func_code.const_r4_imm4(op_const_w32_r4_u4, 1, 15);
       main.func_code.const_r4_imm4(op_const_w32_r4_u4, 2, 15);

               // 调用静态函数
               {
                   {
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
                   }

                   {
                       std::vector<uint8_t> arg;
                       arg.push_back(2);
                       arg.push_back(0);
                       arg.push_back(1);
                       main.func_code.call_r4_static_func(2, arg);
                       main.func_code.getret_reg(subop_getret_w32_r16_i32, 0);

                       main.func_code.call_r8_static_func(2, arg);
                       main.func_code.getret_reg(subop_getret_w32_r16_i32, 0);

                       std::vector<uint16_t> arg2;
                       arg2.push_back(2);
                       arg2.push_back(0);
                       arg2.push_back(1);
                       main.func_code.call_r16_static_func(2, arg2);
                       main.func_code.getret_reg(subop_getret_w32_r16_i32, 0);
                   }

                   {
                       std::vector<uint8_t> arg;
                       arg.push_back(0);
                       main.func_code.call_r4_static_func(3, arg);
                       main.func_code.getret_reg(subop_getret_w32_r16_i32, 0);

                       main.func_code.call_r8_static_func(3, arg);
                       main.func_code.getret_reg(subop_getret_w32_r16_i32, 0);

                       std::vector<uint16_t> arg2;
                       arg2.push_back(0);
                       main.func_code.call_r16_static_func(3, arg2);
                       main.func_code.getret_reg(subop_getret_w32_r16_i32, 0);
                   }
               }

               // 调用dll函数
               {
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

                   // 无参数回调测试
                   main.func_code.get_static_func_ptr(3, 0);
                   natarg.clear();
                   natarg.push_back(2);
                   natarg.push_back(0);
                   natarg.push_back(1);
                   main.func_code.call_r4_native_func(0, 3, natarg);
                   // 带参数回调测试
                   main.func_code.get_static_func_ptr(2, 0);
                   natarg.clear();
                   natarg.push_back(2);
                   natarg.push_back(0);
                   natarg.push_back(1);
                   main.func_code.call_r4_native_func(0, 4, natarg);
               }

        // 内存分配
        {
            main.func_code.const_r8_imm8(subop_const_w64_r8_u8, 0, 64);
            main.func_code.alloc_r8(2, 0);
            main.func_code.free_r8(2);
            main.func_code.alloc_r16(2, 0);
            main.func_code.free_r16(2);
        }

        // 内存数据加载
        {
            main.func_code.const_r8_imm8(subop_const_w64_r8_u8, 0, 64);
            main.func_code.alloc_r8(2, 0);

            main.func_code.store_r16(subop_store_w32_i8, 2, 0);
            main.func_code.load_r16(subop_load_w32_i8, 4, 2);

            main.func_code.store_r16(subop_store_w32_u8, 2, 0);
            main.func_code.load_r16(subop_load_w32_u8, 4, 2);

            main.func_code.store_r16(subop_store_w32_i16, 2, 0);
            main.func_code.load_r16(subop_load_w32_i16, 4, 2);

            main.func_code.store_r16(subop_store_w32_u16, 2, 0);
            main.func_code.load_r16(subop_load_w32_u16, 4, 2);

            main.func_code.store_r16(subop_store_w32_i32, 2, 0);
            main.func_code.load_r16(subop_load_w32_i32, 4, 2);

            main.func_code.store_r16(subop_store_w32_u32, 2, 0);
            main.func_code.load_r16(subop_load_w32_u32, 4, 2);

            float flt32 = 3.14159;
            main.func_code.const_r8_imm32(op_const_w32_r8_f32, 7, *(uint32_t *)&flt32);
            main.func_code.store_r16(subop_store_w32_f32, 2, 7);
            main.func_code.load_r16(subop_load_w32_f32, 7, 2);

            main.func_code.const_r8_imm8(subop_const_w64_r8_i8, 0, -64);
            main.func_code.store_r16(subop_store_w64_i8, 2, 0);
            main.func_code.load_r16(subop_load_w64_i8, 4, 2);

            main.func_code.store_r16(subop_store_w64_u8, 2, 0);
            main.func_code.load_r16(subop_load_w64_u8, 4, 2);

            main.func_code.store_r16(subop_store_w64_i16, 2, 0);
            main.func_code.load_r16(subop_load_w64_i16, 4, 2);

            main.func_code.store_r16(subop_store_w64_u16, 2, 0);
            main.func_code.load_r16(subop_load_w64_u16, 4, 2);

            main.func_code.store_r16(subop_store_w64_i32, 2, 0);
            main.func_code.load_r16(subop_load_w64_i32, 4, 2);

            main.func_code.store_r16(subop_store_w64_u32, 2, 0);
            main.func_code.load_r16(subop_load_w64_u32, 4, 2);

            main.func_code.store_r16(subop_store_w64_i64, 2, 0);
            main.func_code.load_r16(subop_load_w64_i64, 4, 2);

            main.func_code.store_r16(subop_store_w64_u64, 2, 0);
            main.func_code.load_r16(subop_load_w64_u64, 4, 2);

            double flt64 = 3.14159;
            main.func_code.const_r8_imm64(op_const_w64_r8_f64, 7, *(uint64_t *)&flt64);
            main.func_code.store_r16(subop_store_w64_f64, 2, 7);
            main.func_code.load_r16(subop_load_w64_f64, 7, 2);

            main.func_code.store_r16(subop_store_ptr, 2, 2);
            main.func_code.load_r16(subop_load_ptr, 7, 2);

            main.func_code.free_r8(2);
        }

        // 寄存器偏移内存数据加载
        {
            main.func_code.const_r8_imm8(subop_const_w64_r8_u8, 0, 64);
            main.func_code.const_r4_imm4(op_const_w64_r4_i4, 2, 0);
            main.func_code.alloc_r8(4, 0);

            main.func_code.store_r16_reg(subop_store_w32_i8, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w32_i8, 6, 4, 2);
            main.func_code.store_r16_reg(subop_store_w32_u8, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w32_u8, 6, 4, 2);

            main.func_code.store_r16_reg(subop_store_w32_i16, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w32_i16, 6, 4, 2);
            main.func_code.store_r16_reg(subop_store_w32_u16, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w32_u16, 6, 4, 2);

            main.func_code.store_r16_reg(subop_store_w32_i32, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w32_i32, 6, 4, 2);
            main.func_code.store_r16_reg(subop_store_w32_u32, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w32_u32, 6, 4, 2);

            float flt32 = 3.14159;
            main.func_code.const_r8_imm32(op_const_w32_r8_f32, 7, *(uint32_t *)&flt32);
            main.func_code.store_r16_reg(subop_store_w32_f32, 4, 2, 7);
            main.func_code.load_r16_reg(subop_load_w32_f32, 7, 4, 2);

            main.func_code.const_r8_imm8(subop_const_w64_r8_i8, 0, -64);

            main.func_code.store_r16_reg(subop_store_w64_i8, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w64_i8, 6, 4, 2);
            main.func_code.store_r16_reg(subop_store_w64_u8, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w64_u8, 6, 4, 2);

            main.func_code.store_r16_reg(subop_store_w64_i16, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w64_i16, 6, 4, 2);
            main.func_code.store_r16_reg(subop_store_w64_u16, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w64_u16, 6, 4, 2);

            main.func_code.store_r16_reg(subop_store_w64_i32, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w64_i32, 6, 4, 2);
            main.func_code.store_r16_reg(subop_store_w64_u32, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w64_u32, 6, 4, 2);

            main.func_code.store_r16_reg(subop_store_w64_i64, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w64_i64, 6, 4, 2);
            main.func_code.store_r16_reg(subop_store_w64_u64, 4, 2, 0);
            main.func_code.load_r16_reg(subop_load_w64_u64, 6, 4, 2);

            double flt64 = 3.14159;
            main.func_code.const_r8_imm64(op_const_w64_r8_f64, 7, *(uint64_t *)&flt64);
            main.func_code.store_r16_reg(subop_store_w64_f64, 4, 2, 7);
            main.func_code.load_r16_reg(subop_load_w64_f64, 7, 4, 2);

            main.func_code.store_r16_reg(subop_store_ptr, 4, 2, 4);
            main.func_code.load_r16_reg(subop_load_ptr, 7, 4, 2);

            main.func_code.free_r8(2);
        }


        // 立即数内存数据加载
        {
            main.func_code.const_r8_imm8(subop_const_w64_r8_u8, 0, 64);
            main.func_code.const_r4_imm4(op_const_w64_r4_i4, 2, 0);
            main.func_code.alloc_r8(4, 0);

            main.func_code.store_r16_imm32(subop_store_w32_i8, 4, 2, 0);
            main.func_code.load_r16_imm32(subop_load_w32_i8, 6, 4, 2);
            main.func_code.store_r16_imm32(subop_store_w32_u8, 4, 2, 0);
            main.func_code.load_r16_imm32(subop_load_w32_u8, 6, 4, 2);

            main.func_code.store_r16_imm32(subop_store_w32_i16, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w32_i16, 6, 4, 0);
            main.func_code.store_r16_imm32(subop_store_w32_u16, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w32_u16, 6, 4, 0);

            main.func_code.store_r16_imm32(subop_store_w32_i32, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w32_i32, 6, 4, 0);
            main.func_code.store_r16_imm32(subop_store_w32_u32, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w32_u32, 6, 4, 0);

            float flt32 = 3.14159;
            main.func_code.const_r8_imm32(op_const_w32_r8_f32, 7, *(uint32_t *)&flt32);
            main.func_code.store_r16_imm32(subop_store_w32_f32, 4, 0, 7);
            main.func_code.load_r16_imm32(subop_load_w32_f32, 7, 4, 0);

            main.func_code.const_r8_imm8(subop_const_w64_r8_i8, 0, -64);

            main.func_code.store_r16_imm32(subop_store_w64_i8, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w64_i8, 6, 4, 0);
            main.func_code.store_r16_imm32(subop_store_w64_u8, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w64_u8, 6, 4, 0);

            main.func_code.store_r16_imm32(subop_store_w64_i16, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w64_i16, 6, 4, 0);
            main.func_code.store_r16_imm32(subop_store_w64_u16, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w64_u16, 6, 4, 0);

            main.func_code.store_r16_imm32(subop_store_w64_i32, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w64_i32, 6, 4, 0);
            main.func_code.store_r16_imm32(subop_store_w64_u32, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w64_u32, 6, 4, 0);

            main.func_code.store_r16_imm32(subop_store_w64_i64, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w64_i64, 6, 4, 0);
            main.func_code.store_r16_imm32(subop_store_w64_u64, 4, 0, 0);
            main.func_code.load_r16_imm32(subop_load_w64_u64, 6, 4, 0);

            double flt64 = 3.14159;
            main.func_code.const_r8_imm64(op_const_w64_r8_f64, 7, *(uint64_t *)&flt64);
            main.func_code.store_r16_imm32(subop_store_w64_f64, 4, 0, 7);
            main.func_code.load_r16_imm32(subop_load_w64_f64, 7, 4, 0);

            main.func_code.store_r16_imm32(subop_store_ptr, 4, 2, 4);
            main.func_code.load_r16_imm32(subop_load_ptr, 7, 4, 2);

            main.func_code.free_r8(2);
        }
        */

        // 对象分配等测试
        {
            main.func_code.new_obj_r8(0, 5);
            main.func_code.grab_obj_r8(0);
            main.func_code.drop_obj_r8(0);
            main.func_code.lock_obj_r8(0);
            main.func_code.unlock_obj_r8(0);
            main.func_code.drop_obj_r8(0);

            main.func_code.new_obj_r16(0, 6);
            main.func_code.grab_obj_r16(0);
            main.func_code.drop_obj_r16(0);
            main.func_code.lock_obj_r16(0);
            main.func_code.unlock_obj_r16(0);
            main.func_code.drop_obj_r16(0);

            main.func_code.const_r8_imm32(op_const_w64_r8_u32, 0, 4); // 0-1
            main.func_code.const_r8_imm32(op_const_w64_r8_u32, 2, 4); // 2-3
            std::vector<uint8_t> cols;
            cols.push_back(0);
            cols.push_back(2);
            main.func_code.new_array_r8(4, 6, cols);
            main.func_code.drop_obj_r8(4);
            std::vector<uint16_t> colss;
            colss.push_back(0);
            colss.push_back(2);
            main.func_code.new_array_r16(4, 7, colss);
            main.func_code.drop_obj_r16(4);
        }

        main.func_code.return_imm16(subop_return_u16, 0);
    }
    // 添加 add3 函数
    {
        auto &add = file.areafunc.genItem();
        add.name_index = file.areastr.addItem("add3");
        add.arg_count = 3;
        add.reg_count = 4;
        add.func_flag = airvm_bcfmt_func_static | airvm_bcfmt_func_public;
        // 运行代码
        add.func_code.math3_r4(subop_math3_add_i32, 0, 1, 2);
        add.func_code.math3_r4(subop_math3_add_i32, 0, 0, 3);
        add.func_code.return_reg(subop_return_r16_i32, 0);
    }
    // 添加 add2 函数
    {
        auto &add = file.areafunc.genItem();
        add.name_index = file.areastr.addItem("add2");
        add.arg_count = 2;
        add.reg_count = 3;
        add.func_flag = airvm_bcfmt_func_static | airvm_bcfmt_func_public;
        // 运行代码
        add.func_code.math3_r4(subop_math3_add_i32, 0, 1, 2);
        add.func_code.return_reg(subop_return_r16_i32, 0);
    }
    // 添加 empty 函数
    {
        auto &add = file.areafunc.genItem();
        add.name_index = file.areastr.addItem("empty");
        add.arg_count = 0;
        add.reg_count = 0;
        add.func_flag = airvm_bcfmt_func_static | airvm_bcfmt_func_public;
        // 运行代码
        add.func_code.return_imm16(subop_return_u16, 16);
    }
    // 写入文件
    file.write_file("call_test.ave");
}