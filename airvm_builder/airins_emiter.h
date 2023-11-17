#ifndef __AIRINS_EMITER_INC__
#define __AIRINS_EMITER_INC__

#include <vector>
#include <cstdint>
#include <stdio.h>
#include <airvm_opcode.h>


// 小端序列
struct airvm_code_file_t
{
    std::vector<uint8_t> buffer;

    inline void emiter(uint8_t byte) { buffer.push_back(byte); }
    inline void emiter2(uint16_t word)
    {
        buffer.push_back(word);
        buffer.push_back(word >> 8);
    }
    inline void emiter4(uint32_t dword)
    {
        buffer.push_back(dword);
        buffer.push_back(dword >> 8);
        buffer.push_back(dword >> 16);
        buffer.push_back(dword >> 24);
    }
    inline void emiter8(uint64_t qword)
    {
        buffer.push_back(qword);
        buffer.push_back(qword >> 8);
        buffer.push_back(qword >> 16);
        buffer.push_back(qword >> 24);
        buffer.push_back(qword >> 32);
        buffer.push_back(qword >> 40);
        buffer.push_back(qword >> 48);
        buffer.push_back(qword >> 56);
    }
};
struct Emiter
{
    Emiter(airvm_code_file_t &code) : code(code) {}
    airvm_code_file_t &code;

    void write_to_flie(const char *file)
    {
        FILE *fp = nullptr;
        fopen_s(&fp, file, "wb");
        fwrite(code.buffer.data(), 1, code.buffer.size(), fp);
        fclose(fp);
    }

    inline void nop() { code.emiter2(op_nop); }
    // 4 bit 常量赋值: 8-4-4
    inline void const_r4_imm4(uint8_t op, uint8_t des, uint8_t imm)
    {
        uint16_t ins = op << 8;
        ins |= (des << 4) | (imm & 0xF);
        code.emiter2(ins);
    }
    // 8 bit 常量赋值：8-8-8-8
    inline void const_r8_imm8(uint8_t subop, uint8_t des, uint8_t imm)
    {
        uint16_t ins = (op_const_r8_subop << 8) | subop;
        code.emiter2(ins);
        ins = (des << 8) | imm;
        code.emiter2(ins);
    }
    // 16 bit 常量赋值：8-8-16
    inline void const_r8_imm16(uint8_t op, uint8_t des, uint16_t imm)
    {
        uint16_t ins = (op << 8) | des;
        code.emiter2(ins);
        code.emiter2(imm);
    }
    // 32 bit 常量赋值：8-8-32
    inline void const_r8_imm32(uint8_t op, uint8_t des, uint32_t imm)
    {
        uint16_t ins = (op << 8) | des;
        code.emiter2(ins);
        code.emiter4(imm);
    }
    // 64 bit 常量赋值：8-8-64
    inline void const_r8_imm64(uint8_t op, uint8_t des, uint64_t imm)
    {
        uint16_t ins = (op << 8) | des;
        code.emiter2(ins);
        code.emiter8(imm);
    }
    // 16/32/64 bit 常量赋值：8-8-16-16/8-8-16-32/8-8-16-64
    inline void const_r16_imm16(uint8_t subop, uint16_t des, uint16_t imm)
    {
        uint16_t ins = (op_const_r16_subop << 8) | subop;
        code.emiter2(ins);
        code.emiter2(des);
        code.emiter2(imm);
    }
    inline void const_r16_imm32(uint8_t subop, uint16_t des, uint32_t imm)
    {
        uint16_t ins = (op_const_r16_subop << 8) | subop;
        code.emiter2(ins);
        code.emiter2(des);
        code.emiter4(imm);
    }
    inline void const_r16_imm64(uint8_t subop, uint16_t des, uint64_t imm)
    {
        uint16_t ins = (op_const_r16_subop << 8) | subop;
        code.emiter2(ins);
        code.emiter2(des);
        code.emiter8(imm);
    }

    inline void mov_r4(uint8_t op, uint8_t des, uint8_t src)
    {
        uint16_t ins = (op << 8) | ((des & 0xF) << 4) | (src & 0xF);
        code.emiter2(ins);
    }
    inline void mov_r8(uint8_t subop, uint8_t des, uint8_t src)
    {
        uint16_t ins = (op_mov_r8_subop << 8) | subop;
        code.emiter2(ins);
        ins = (des << 8) | src;
        code.emiter2(ins);
    }
    inline void mov_r16(uint8_t subop, uint16_t des, uint16_t src)
    {
        uint16_t ins = (op_mov_r16_subop << 8) | subop;
        code.emiter2(ins);
        code.emiter2(des);
        code.emiter2(src);
    }

    inline void math_r8(uint8_t subop, uint8_t des, uint8_t src)
    {
        uint16_t ins = (op_math2_r8_subop << 8) | subop;
        code.emiter2(ins);
        ins = (des << 8) | src;
        code.emiter2(ins);
    }
    inline void math_r16(uint8_t subop, uint16_t des, uint16_t src)
    {
        uint16_t ins = (op_math2_r16_subop << 8) | subop;
        code.emiter2(ins);
        code.emiter2(des);
        code.emiter2(src);
    }

    inline void math3_r4(uint8_t subop, uint8_t des, uint8_t src, uint8_t src2)
    {
        uint16_t ins = (op_math3_r4_subop << 8) | subop;
        code.emiter2(ins);
        ins = (des << 8) | ((src & 0xF) << 4) | (src2 & 0xF);
        code.emiter2(ins);
    }
    inline void math3_r8(uint8_t subop, uint16_t des, uint8_t src, uint8_t src2)
    {
        uint16_t ins = (op_math3_r8_subop << 8) | subop;
        code.emiter2(ins);
        code.emiter2(des);
        ins = (src << 8) | src2;
        code.emiter2(ins);
    }
    inline void math3_r16(uint8_t subop, uint16_t des, uint16_t src, uint16_t src2)
    {
        uint16_t ins = (op_math3_r16_subop << 8) | subop;
        code.emiter2(ins);
        code.emiter2(des);
        code.emiter2(src);
        code.emiter2(src2);
    }
};

#endif // __AIRINS_EMITER_INC__