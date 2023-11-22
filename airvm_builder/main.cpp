#include "airvm_bcfmt.hpp"
#include "build_dll.h"
#include "build_exe.h"
int main(int argc, const char *argv[])
{
    printf("building...\n");
    build_exe();
    build_dll();
    printf("build end\n");
    return 0;
}