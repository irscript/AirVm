add_rules("mode.debug", "mode.release")

set_languages("c17", "c++17")

if(is_mode("release")) then
    set_optimize("fastest")
    add_cxflags("-O3")
end

--运行时库
target("airvm_runtime")
    set_kind("shared")
    add_includedirs("./airvm_runtime")
    set_pcheader("airvm_runtime/Precompiled.h")
    add_files("airvm_runtime/*.c")

target("libtest")
    set_kind("shared")
    add_includedirs("./airvm_nat_test")
    add_files("airvm_nat_test/*.c")

--汇编器
target("airvm_builder")
    set_kind("binary")
    add_includedirs("./airvm_runtime")
    set_pcheader("airvm_runtime/Precompiled.h")
    add_files("airvm_builder/*.cpp")

--虚拟机主程序
target("AirVM")
    add_includedirs("./airvm_runtime")
    set_kind("binary")
    add_deps("airvm_runtime")
    add_files("src/*.c")


