	.file	"airvm_runtime.c"
	.text
	.p2align 4
	.globl	airvm_init
	.def	airvm_init;	.scl	2;	.type	32;	.endef
	.seh_proc	airvm_init
airvm_init:
	.seh_endprologue
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii ".\\airvm_runtime.c\0"
.LC1:
	.ascii "func != 0\0"
.LC2:
	.ascii "actor != 0 && func != 0\0"
.LC3:
	.ascii "%4X: nop\12\0"
	.align 8
.LC4:
	.ascii "%4d: This nop instruction should not be run!\12\0"
	.align 8
.LC5:
	.ascii "%4X: const_w32_r4_i4 \11r%d, \11%d\12\0"
	.align 8
.LC6:
	.ascii "%4X: const_w32_r4_u4 \11r%d, \11%d\12\0"
	.align 8
.LC7:
	.ascii "%4X: const_w64_r4_i4 \11r%d, \11%lld\12\0"
	.align 8
.LC8:
	.ascii "%4X: const_w64_r4_u4 \11r%d, \11%lld\12\0"
	.align 8
.LC9:
	.ascii "%4d: const_w32_r8_b0 \11r%d, \11"
	.ascii "0x%X\12\0"
	.align 8
.LC10:
	.ascii "%4d: const_w32_r8_b1 \11r%d, \11"
	.ascii "0x%X\12\0"
	.align 8
.LC11:
	.ascii "%4d: const_w32_r8_b2 \11r%d, \11"
	.ascii "0x%X\12\0"
	.align 8
.LC12:
	.ascii "%4d: const_w32_r8_b3 \11r%d, \11"
	.ascii "0x%X\12\0"
	.align 8
.LC13:
	.ascii "%4d: const_w32_r8_i8 \11r%d, \11%d\12\0"
	.align 8
.LC14:
	.ascii "%4d: const_w32_r8_u8 \11r%d, \11%u\12\0"
	.align 8
.LC15:
	.ascii "%4d: const_w32_r8_h16_i8 \11r%d, \11%d\12\0"
	.align 8
.LC16:
	.ascii "%4d: const_w32_r8_h16_u8 \11r%d, \11%u\12\0"
	.align 8
.LC17:
	.ascii "%4d: const_w32_r8_l16_i8 \11r%d, \11%d\12\0"
	.align 8
.LC18:
	.ascii "%4d: const_w32_r8_l16_u8 \11r%d, \11%u\12\0"
	.align 8
.LC19:
	.ascii "%4d: const_w64_r8_i8 \11r%d, \11%lld\12\0"
	.align 8
.LC20:
	.ascii "%4d: const_w64_r8_u8 \11r%d, \11%llu\12\0"
	.align 8
.LC21:
	.ascii "%4X: const_w32_r8_i16  \11r%d, \11%d\12\0"
	.align 8
.LC22:
	.ascii "%4X: const_w32_r8_u16  \11r%d, \11%u\12\0"
	.align 8
.LC23:
	.ascii "%4X: const_w64_r8_i16  \11r%d, \11%lld\12\0"
	.align 8
.LC24:
	.ascii "%4X: const_w64_r8_u16  \11r%d, \11%llu\12\0"
	.align 8
.LC25:
	.ascii "%4X: const_w32_r8_h16  \11r%d, \11"
	.ascii "0x%X\12\0"
	.align 8
.LC26:
	.ascii "%4X: const_w32_r8_l16  \11r%d, \11"
	.ascii "0x%X\12\0"
	.align 8
.LC27:
	.ascii "%4X: const_w32_r8_i32  \11r%d, \11%d\12\0"
	.align 8
.LC28:
	.ascii "%4X: const_w32_r8_u32  \11r%d, \11%u\12\0"
	.align 8
.LC29:
	.ascii "%4X: const_w32_r8_f32  \11r%d, \11%f\12\0"
	.align 8
.LC30:
	.ascii "%4X: const_w64_r8_i64  \11r%d, \11%lld\12\0"
	.align 8
.LC31:
	.ascii "%4X: const_w64_r8_u64  \11r%d, \11%llu\12\0"
	.align 8
.LC32:
	.ascii "%4X: const_w64_r8_f64  \11r%d, \11%lf\12\0"
	.align 8
.LC33:
	.ascii "%4X: const_w32_r16_i16  \11r%d, \11%d\12\0"
	.align 8
.LC34:
	.ascii "%4X: const_w32_r16_u16  \11r%d, \11%u\12\0"
	.align 8
.LC35:
	.ascii "%4X: const_w32_r16_i32  \11r%d, \11%d\12\0"
	.align 8
.LC36:
	.ascii "%4X: const_w32_r16_u32  \11r%d, \11%u\12\0"
	.align 8
.LC37:
	.ascii "%4X: const_w32_r16_f32  \11r%d, \11%f\12\0"
	.align 8
.LC38:
	.ascii "%4X: const_w64_r16_i16  \11r%d, \11%lld\12\0"
	.align 8
.LC39:
	.ascii "%4X: const_w64_r16_u16  \11r%d, \11%llu\12\0"
	.align 8
.LC40:
	.ascii "%4X: const_w64_r16_i32  \11r%d, \11%lld\12\0"
	.align 8
.LC41:
	.ascii "%4X: const_w64_r16_u32  \11r%d, \11%llu\12\0"
	.align 8
.LC42:
	.ascii "%4X: const_w64_r16_i64  \11r%d, \11%lld\12\0"
	.align 8
.LC43:
	.ascii "%4X: const_w64_r16_u64  \11r%d, \11%llu\12\0"
	.align 8
.LC44:
	.ascii "%4X: const_w64_r16_f64  \11r%d, \11%lf\12\0"
	.align 8
.LC45:
	.ascii "%4X: mov_w32_r4_i32  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC46:
	.ascii "%4X: mov_w32_r4_u32  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC47:
	.ascii "%4X: mov_w32_r4_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC48:
	.ascii "%4X: mov_w64_r4_i64  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC49:
	.ascii "%4X: mov_w64_r4_u64  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC50:
	.ascii "%4X: mov_w64_r4_f64  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC51:
	.ascii "%4X: mov_w32_r8_sb0  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC52:
	.ascii "%4X: mov_w32_r8_ub0  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC53:
	.ascii "%4X: mov_w32_r8_sb1  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC54:
	.ascii "%4X: mov_w32_r8_ub1  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC55:
	.ascii "%4X: mov_w32_r8_sb2  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC56:
	.ascii "%4X: mov_w32_r8_ub2  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC57:
	.ascii "%4X: mov_w32_r8_sb3  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC58:
	.ascii "%4X: mov_w32_r8_ub3  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC59:
	.ascii "%4X: mov_w32_r8_sh16  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC60:
	.ascii "%4X: mov_w32_r8_uh16  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC61:
	.ascii "%4X: mov_w32_r8_sl16  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC62:
	.ascii "%4X: mov_w32_r8_ul16  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC63:
	.ascii "%4X: mov_w32_r8_i32  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC64:
	.ascii "%4X: mov_w32_r8_u32  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC65:
	.ascii "%4X: mov_w32_r8_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC66:
	.ascii "%4X: mov_w32_r8_bitcast  \11r%d, \11r%d \11result: %d \11%u \11%f\12\0"
	.align 8
.LC67:
	.ascii "%4X: mov_w64_r8_sb0  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC68:
	.ascii "%4X: mov_w64_r8_ub0  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC69:
	.ascii "%4X: mov_w64_r8_sb1  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC70:
	.ascii "%4X: mov_w64_r8_ub1  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC71:
	.ascii "%4X: mov_w64_r8_sb2  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC72:
	.ascii "%4X: mov_w64_r8_ub2  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC73:
	.ascii "%4X: mov_w64_r8_sb3  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC74:
	.ascii "%4X: mov_w64_r8_ub3  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC75:
	.ascii "%4X: mov_w64_r8_sh16  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC76:
	.ascii "%4X: mov_w64_r8_uh16  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC77:
	.ascii "%4X: mov_w64_r8_sl16  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC78:
	.ascii "%4X: mov_w64_r8_ul16  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC79:
	.ascii "%4X: mov_w64_r8_i64  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC80:
	.ascii "%4X: mov_w64_r8_u64  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC81:
	.ascii "%4X: mov_w64_r8_f64  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC82:
	.ascii "%4X: mov_w64_r8_bitcast  \11r%d, \11r%d \11result: %lld \11%llu \11%lf\12\0"
	.align 8
.LC83:
	.ascii "%4X: cast_r8_i32_to_i64  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC84:
	.ascii "%4X: cast_r8_u32_to_u64  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC85:
	.ascii "%4X: cast_r8_i64_to_i32  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC86:
	.ascii "%4X: cast_r8_u64_to_u32  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC87:
	.ascii "%4X: cast_r8_f32_to_f64  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC88:
	.ascii "%4X: cast_r8_f64_to_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC89:
	.ascii "%4X: cast_r8_i32_to_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC90:
	.ascii "%4X: cast_r8_u32_to_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC91:
	.ascii "%4X: cast_r8_i32_to_f32  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC92:
	.ascii "%4X: cast_r8_u32_to_f32  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC93:
	.ascii "%4X: cast_r8_i64_to_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC94:
	.ascii "%4X: cast_r8_u64_to_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC95:
	.ascii "%4X: cast_r8_i64_to_f32  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC96:
	.ascii "%4X: cast_r8_u64_to_f32  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC97:
	.ascii "%4X: cast_r8_f32_to_i32  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC98:
	.ascii "%4X: cast_r8_f32_to_u32  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC99:
	.ascii "%4X: cast_r8_f32_to_i64  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC101:
	.ascii "%4X: cast_r8_f32_to_u64  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC102:
	.ascii "%4X: cast_r8_f64_to_i32  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC103:
	.ascii "%4X: cast_r8_f64_to_u32  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC104:
	.ascii "%4X: cast_r8_f64_to_i64  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC106:
	.ascii "%4X: cast_r8_f64_to_u64  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC107:
	.ascii "%4X: mov_w32_r16_sb0  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC108:
	.ascii "%4X: mov_w32_r16_ub0  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC109:
	.ascii "%4X: mov_w32_r16_sb1  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC110:
	.ascii "%4X: mov_w32_r16_ub1  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC111:
	.ascii "%4X: mov_w32_r16_sb2  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC112:
	.ascii "%4X: mov_w32_r16_ub2  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC113:
	.ascii "%4X: mov_w32_r16_sb3  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC114:
	.ascii "%4X: mov_w32_r16_ub3  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC115:
	.ascii "%4X: mov_w32_r16_sh16  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC116:
	.ascii "%4X: mov_w32_r16_uh16  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC117:
	.ascii "%4X: mov_w32_r16_sl16  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC118:
	.ascii "%4X: mov_w32_r16_ul16  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC119:
	.ascii "%4X: mov_w32_r16_i32  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC120:
	.ascii "%4X: mov_w32_r16_u32  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC121:
	.ascii "%4X: mov_w32_r16_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC122:
	.ascii "%4X: mov_w32_r16_bitcast  \11r%d, \11r%d \11result: %d \11%u \11%f\12\0"
	.align 8
.LC123:
	.ascii "%4X: mov_w64_r16_sb0  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC124:
	.ascii "%4X: mov_w64_r16_ub0  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC125:
	.ascii "%4X: mov_w64_r16_sb1  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC126:
	.ascii "%4X: mov_w64_r16_ub1  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC127:
	.ascii "%4X: mov_w64_r16_sb2  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC128:
	.ascii "%4X: mov_w64_r16_ub2  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC129:
	.ascii "%4X: mov_w64_r16_sb3  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC130:
	.ascii "%4X: mov_w64_r16_ub3  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC131:
	.ascii "%4X: mov_w64_r16_sh16  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC132:
	.ascii "%4X: mov_w64_r16_uh16  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC133:
	.ascii "%4X: mov_w64_r16_sl16  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC134:
	.ascii "%4X: mov_w64_r16_ul16  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC135:
	.ascii "%4X: mov_w64_r16_i64  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC136:
	.ascii "%4X: mov_w64_r16_u64  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC137:
	.ascii "%4X: mov_w64_r16_f64  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC138:
	.ascii "%4X: mov_w64_r16_bitcast  \11r%d, \11r%d \11result: %lld \11%llu \11%lf\12\0"
	.align 8
.LC139:
	.ascii "%4X: cast_r16_i32_to_i64  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC140:
	.ascii "%4X: cast_r16_u32_to_u64  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC141:
	.ascii "%4X: cast_r16_i64_to_i32  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC142:
	.ascii "%4X: cast_r16_u64_to_u32  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC143:
	.ascii "%4X: cast_r16_f32_to_f64  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC144:
	.ascii "%4X: cast_r16_f64_to_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC145:
	.ascii "%4X: cast_r16_i32_to_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC146:
	.ascii "%4X: cast_r16_u32_to_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC147:
	.ascii "%4X: cast_r16_i32_to_f32  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC148:
	.ascii "%4X: cast_r16_u32_to_f32  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC149:
	.ascii "%4X: cast_r16_i64_to_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC150:
	.ascii "%4X: cast_r16_u64_to_f32  \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC151:
	.ascii "%4X: cast_r16_i64_to_f32  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC152:
	.ascii "%4X: cast_r16_u64_to_f32  \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC153:
	.ascii "%4X: cast_r16_f32_to_i32  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC154:
	.ascii "%4X: cast_r16_f32_to_u32  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC155:
	.ascii "%4X: cast_r16_f32_to_i64  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC156:
	.ascii "%4X: cast_r16_f32_to_u64  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC157:
	.ascii "%4X: cast_r16_f64_to_i32  \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC158:
	.ascii "%4X: cast_r16_f64_to_u32  \11r%d, \11r%d \11result: %u\12\0"
	.align 8
.LC159:
	.ascii "%4X: cast_r16_f64_to_i64  \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC160:
	.ascii "%4X: cast_r16_f64_to_u64  \11r%d, \11r%d \11result: %llu\12\0"
	.align 8
.LC161:
	.ascii "%4X: not_r8_w32  \11r%d, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC162:
	.ascii "%4X: not_r8_w64 \11r%d, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC163:
	.ascii "%4X: neg_r8_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC164:
	.ascii "%4X: neg_r8_i64 \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC166:
	.ascii "%4X: neg_r8_f32 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC168:
	.ascii "%4X: neg_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC169:
	.ascii "%4X: abs_r8_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC170:
	.ascii "%4X: abs_r8_i64 \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC171:
	.ascii "%4X: abs_r8_f32 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC172:
	.ascii "%4X: abs_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC173:
	.ascii "%4X: cmpltz_r8_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC174:
	.ascii "%4X: cmpeqz_r8_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC175:
	.ascii "%4X: cmpnez_r8_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC176:
	.ascii "%4X: cmpgtz_r8_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC177:
	.ascii "%4X: cmpgez_r8_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC178:
	.ascii "%4X: cmpltz_r8_i64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC179:
	.ascii "%4X: cmpeqz_r8_i64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC180:
	.ascii "%4X: cmpnez_r8_i64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC181:
	.ascii "%4X: cmpgtz_r8_i64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC182:
	.ascii "%4X: cmpgez_r8_i64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC184:
	.ascii "%4X: cmpltz_r8_f32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC185:
	.ascii "%4X: cmpeqz_r8_f32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC186:
	.ascii "%4X: cmpnez_r8_f32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC187:
	.ascii "%4X: cmpgtz_r8_f32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC188:
	.ascii "%4X: cmpgez_r8_f32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC190:
	.ascii "%4X: cmpltz_r8_f64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC191:
	.ascii "%4X: cmpeqz_r8_f64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC192:
	.ascii "%4X: cmpnez_r8_f64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC193:
	.ascii "%4X: cmpgtz_r8_f64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC194:
	.ascii "%4X: cmpgez_r8_f64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC195:
	.ascii "%4X: sin_r8_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC196:
	.ascii "%4X: sin_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC197:
	.ascii "%4X: cos_r8_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC198:
	.ascii "%4X: cos_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC199:
	.ascii "%4X: tan_r8_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC200:
	.ascii "%4X: tan_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC202:
	.ascii "%4X: cot_r8_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC204:
	.ascii "%4X: cot_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC205:
	.ascii "%4X: sec_r8_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC206:
	.ascii "%4X: sec_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC207:
	.ascii "%4X: csc_r8_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC208:
	.ascii "%4X: csc_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC209:
	.ascii "%4X: asin_r8_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC210:
	.ascii "%4X: asin_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC211:
	.ascii "%4X: acos_r8_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC212:
	.ascii "%4X: acos_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC213:
	.ascii "%4X: atan_r8_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC214:
	.ascii "%4X: atan_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC215:
	.ascii "%4X: acot_r8_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC216:
	.ascii "%4X: acot_r8_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC217:
	.ascii "%4X: not_r16_w32  \11r%d, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC218:
	.ascii "%4X: not_r16_w64 \11r%d, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC219:
	.ascii "%4X: neg_r16_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC220:
	.ascii "%4X: neg_r16_i64 \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC221:
	.ascii "%4X: neg_r16_f32 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC222:
	.ascii "%4X: neg_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC223:
	.ascii "%4X: abs_r16_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC224:
	.ascii "%4X: abs_r16_i64 \11r%d, \11r%d \11result: %lld\12\0"
	.align 8
.LC225:
	.ascii "%4X: abs_r16_f32 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC226:
	.ascii "%4X: abs_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC227:
	.ascii "%4X: cmpltz_r16_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC228:
	.ascii "%4X: cmpeqz_r16_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC229:
	.ascii "%4X: cmpnez_r16_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC230:
	.ascii "%4X: cmpgtz_r16_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC231:
	.ascii "%4X: cmpgez_r16_i32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC232:
	.ascii "%4X: cmpltz_r16_i64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC233:
	.ascii "%4X: cmpeqz_r16_i64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC234:
	.ascii "%4X: cmpnez_r16_i64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC235:
	.ascii "%4X: cmpgtz_r16_i64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC236:
	.ascii "%4X: cmpgez_r16_i64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC237:
	.ascii "%4X: cmpltz_r16_f32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC238:
	.ascii "%4X: cmpeqz_r16_f32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC239:
	.ascii "%4X: cmpnez_r16_f32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC240:
	.ascii "%4X: cmpgtz_r16_f32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC241:
	.ascii "%4X: cmpgez_r16_f32 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC242:
	.ascii "%4X: cmpltz_r16_f64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC243:
	.ascii "%4X: cmpeqz_r16_f64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC244:
	.ascii "%4X: cmpnez_r16_f64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC245:
	.ascii "%4X: cmpgtz_r16_f64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC246:
	.ascii "%4X: cmpgez_r16_f64 \11r%d, \11r%d \11result: %d\12\0"
	.align 8
.LC247:
	.ascii "%4X: sin_r16_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC248:
	.ascii "%4X: sin_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC249:
	.ascii "%4X: cos_r16_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC250:
	.ascii "%4X: cos_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC251:
	.ascii "%4X: tan_r16_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC252:
	.ascii "%4X: tan_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC253:
	.ascii "%4X: cot_r16_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC254:
	.ascii "%4X: cot_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC255:
	.ascii "%4X: sec_r16_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC256:
	.ascii "%4X: sec_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC257:
	.ascii "%4X: csc_r16_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC258:
	.ascii "%4X: csc_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC259:
	.ascii "%4X: asin_r16_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC260:
	.ascii "%4X: asin_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC261:
	.ascii "%4X: acos_r16_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC262:
	.ascii "%4X: acos_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC263:
	.ascii "%4X: atan_r16_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC264:
	.ascii "%4X: atan_r16_f64 \11r%d, \11r%d \11result: %lf\12\0"
	.align 8
.LC265:
	.ascii "%4X: acot_r16_f64 \11r%d, \11r%d \11result: %f\12\0"
	.align 8
.LC266:
	.ascii "%4X: add_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC267:
	.ascii "%4X: sub_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC268:
	.ascii "%4X: mul_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC269:
	.ascii "%4X: div_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC270:
	.ascii "%4X: mod_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC271:
	.ascii "%4X: add_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC272:
	.ascii "%4X: sub_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC273:
	.ascii "%4X: mul_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC274:
	.ascii "%4X: div_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC275:
	.ascii "%4X: mod_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC276:
	.ascii "%4X: add_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC277:
	.ascii "%4X: sub_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC278:
	.ascii "%4X: mul_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC279:
	.ascii "%4X: div_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC280:
	.ascii "%4X: mod_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC281:
	.ascii "%4X: add_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC282:
	.ascii "%4X: sub_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC283:
	.ascii "%4X: mul_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC284:
	.ascii "%4X: div_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC285:
	.ascii "%4X: mod_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC286:
	.ascii "%4X: add_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC287:
	.ascii "%4X: sub_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC288:
	.ascii "%4X: mul_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC289:
	.ascii "%4X: div_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC290:
	.ascii "%4X: mod_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC291:
	.ascii "%4X: add_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC292:
	.ascii "%4X: sub_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC293:
	.ascii "%4X: mul_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC294:
	.ascii "%4X: div_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC295:
	.ascii "%4X: mod_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC296:
	.ascii "%4X: land_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC297:
	.ascii "%4X: land_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC298:
	.ascii "%4X: lor_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC299:
	.ascii "%4X: lor_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC300:
	.ascii "%4X: shl_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC301:
	.ascii "%4X: shl_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC302:
	.ascii "%4X: lshr_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC303:
	.ascii "%4X: lshr_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC304:
	.ascii "%4X: ashr_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC305:
	.ascii "%4X: ashr_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC306:
	.ascii "%4X: rol_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC307:
	.ascii "%4X: rol_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC308:
	.ascii "%4X: ror_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC309:
	.ascii "%4X: ror_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC310:
	.ascii "%4X: and_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC311:
	.ascii "%4X: and_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC312:
	.ascii "%4X: or_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC313:
	.ascii "%4X: or_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC314:
	.ascii "%4X: xor_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC315:
	.ascii "%4X: xor_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC316:
	.ascii "%4X: andn_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC317:
	.ascii "%4X: andn_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC318:
	.ascii "%4X: orn_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC319:
	.ascii "%4X: orn_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC320:
	.ascii "%4X: xorn_r4_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC321:
	.ascii "%4X: xorn_r4_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC322:
	.ascii "%4X: cmplt_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC323:
	.ascii "%4X: cmple_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC324:
	.ascii "%4X: cmpeq_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC325:
	.ascii "%4X: cmpne_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC326:
	.ascii "%4X: cmpgt_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC327:
	.ascii "%4X: cmpge_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC328:
	.ascii "%4X: cmplt_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC329:
	.ascii "%4X: cmple_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC330:
	.ascii "%4X: cmpeq_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC331:
	.ascii "%4X: cmpne_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC332:
	.ascii "%4X: cmpgt_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC333:
	.ascii "%4X: cmpge_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC334:
	.ascii "%4X: cmplt_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC335:
	.ascii "%4X: cmple_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC336:
	.ascii "%4X: cmpeq_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC337:
	.ascii "%4X: cmpne_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC338:
	.ascii "%4X: cmpgt_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC339:
	.ascii "%4X: cmpge_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC340:
	.ascii "%4X: cmplt_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC341:
	.ascii "%4X: cmple_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC342:
	.ascii "%4X: cmpeq_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC343:
	.ascii "%4X: cmpne_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC344:
	.ascii "%4X: cmpgt_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC345:
	.ascii "%4X: cmpge_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC346:
	.ascii "%4X: cmplt_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC347:
	.ascii "%4X: cmple_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC348:
	.ascii "%4X: cmpeq_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC349:
	.ascii "%4X: cmpne_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC350:
	.ascii "%4X: cmpgt_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC351:
	.ascii "%4X: cmpge_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC352:
	.ascii "%4X: cmplt_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC353:
	.ascii "%4X: cmple_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC354:
	.ascii "%4X: cmpeq_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC355:
	.ascii "%4X: cmpne_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC356:
	.ascii "%4X: cmpgt_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC357:
	.ascii "%4X: cmpge_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC358:
	.ascii "%4X: max_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC359:
	.ascii "%4X: max_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC360:
	.ascii "%4X: max_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC361:
	.ascii "%4X: max_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC362:
	.ascii "%4X: max_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC363:
	.ascii "%4X: max_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC364:
	.ascii "%4X: min_r4_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC365:
	.ascii "%4X: min_r4_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC366:
	.ascii "%4X: min_r4_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC367:
	.ascii "%4X: min_r4_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC368:
	.ascii "%4X: min_r4_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC369:
	.ascii "%4X: min_r4_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC370:
	.ascii "%4X: add_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC371:
	.ascii "%4X: sub_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC372:
	.ascii "%4X: mul_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC373:
	.ascii "%4X: div_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC374:
	.ascii "%4X: mod_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC375:
	.ascii "%4X: add_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC376:
	.ascii "%4X: sub_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC377:
	.ascii "%4X: mul_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC378:
	.ascii "%4X: div_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC379:
	.ascii "%4X: mod_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC380:
	.ascii "%4X: add_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC381:
	.ascii "%4X: sub_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC382:
	.ascii "%4X: mul_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC383:
	.ascii "%4X: div_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC384:
	.ascii "%4X: mod_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC385:
	.ascii "%4X: add_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC386:
	.ascii "%4X: sub_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC387:
	.ascii "%4X: mul_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC388:
	.ascii "%4X: div_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC389:
	.ascii "%4X: mod_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC390:
	.ascii "%4X: add_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC391:
	.ascii "%4X: sub_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC392:
	.ascii "%4X: mul_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC393:
	.ascii "%4X: div_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC394:
	.ascii "%4X: mod_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC395:
	.ascii "%4X: add_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC396:
	.ascii "%4X: sub_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC397:
	.ascii "%4X: mul_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC398:
	.ascii "%4X: div_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC399:
	.ascii "%4X: mod_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC400:
	.ascii "%4X: land_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC401:
	.ascii "%4X: land_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC402:
	.ascii "%4X: lor_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC403:
	.ascii "%4X: lor_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC404:
	.ascii "%4X: shl_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC405:
	.ascii "%4X: shl_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC406:
	.ascii "%4X: lshr_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC407:
	.ascii "%4X: lshr_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC408:
	.ascii "%4X: ashr_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC409:
	.ascii "%4X: ashr_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC410:
	.ascii "%4X: rol_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC411:
	.ascii "%4X: rol_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC412:
	.ascii "%4X: ror_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC413:
	.ascii "%4X: ror_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC414:
	.ascii "%4X: and_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC415:
	.ascii "%4X: and_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC416:
	.ascii "%4X: or_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC417:
	.ascii "%4X: or_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC418:
	.ascii "%4X: xor_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC419:
	.ascii "%4X: xor_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC420:
	.ascii "%4X: andn_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC421:
	.ascii "%4X: andn_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC422:
	.ascii "%4X: orn_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC423:
	.ascii "%4X: orn_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC424:
	.ascii "%4X: xorn_r8_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC425:
	.ascii "%4X: xorn_r8_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC426:
	.ascii "%4X: cmplt_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC427:
	.ascii "%4X: cmple_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC428:
	.ascii "%4X: cmpeq_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC429:
	.ascii "%4X: cmpne_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC430:
	.ascii "%4X: cmpgt_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC431:
	.ascii "%4X: cmpge_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC432:
	.ascii "%4X: cmplt_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC433:
	.ascii "%4X: cmple_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC434:
	.ascii "%4X: cmpeq_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC435:
	.ascii "%4X: cmpne_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC436:
	.ascii "%4X: cmpgt_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC437:
	.ascii "%4X: cmpge_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC438:
	.ascii "%4X: cmplt_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC439:
	.ascii "%4X: cmple_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC440:
	.ascii "%4X: cmpeq_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC441:
	.ascii "%4X: cmpne_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC442:
	.ascii "%4X: cmpgt_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC443:
	.ascii "%4X: cmpge_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC444:
	.ascii "%4X: cmplt_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC445:
	.ascii "%4X: cmple_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC446:
	.ascii "%4X: cmpeq_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC447:
	.ascii "%4X: cmpne_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC448:
	.ascii "%4X: cmpgt_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC449:
	.ascii "%4X: cmpge_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC450:
	.ascii "%4X: cmplt_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC451:
	.ascii "%4X: cmple_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC452:
	.ascii "%4X: cmpeq_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC453:
	.ascii "%4X: cmpne_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC454:
	.ascii "%4X: cmpgt_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC455:
	.ascii "%4X: cmpge_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC456:
	.ascii "%4X: cmplt_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC457:
	.ascii "%4X: cmple_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC458:
	.ascii "%4X: cmpeq_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC459:
	.ascii "%4X: cmpne_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC460:
	.ascii "%4X: cmpgt_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC461:
	.ascii "%4X: cmpge_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC462:
	.ascii "%4X: max_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC463:
	.ascii "%4X: max_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC464:
	.ascii "%4X: max_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC465:
	.ascii "%4X: max_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC466:
	.ascii "%4X: max_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC467:
	.ascii "%4X: max_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC468:
	.ascii "%4X: min_r8_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC469:
	.ascii "%4X: min_r8_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC470:
	.ascii "%4X: min_r8_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC471:
	.ascii "%4X: min_r8_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC472:
	.ascii "%4X: min_r8_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC473:
	.ascii "%4X: min_r8_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC474:
	.ascii "%4X: add_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC475:
	.ascii "%4X: sub_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC476:
	.ascii "%4X: mul_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC477:
	.ascii "%4X: div_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC478:
	.ascii "%4X: mod_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC479:
	.ascii "%4X: add_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC480:
	.ascii "%4X: sub_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC481:
	.ascii "%4X: mul_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC482:
	.ascii "%4X: div_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC483:
	.ascii "%4X: mod_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC484:
	.ascii "%4X: add_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC485:
	.ascii "%4X: sub_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC486:
	.ascii "%4X: mul_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC487:
	.ascii "%4X: div_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC488:
	.ascii "%4X: mod_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC489:
	.ascii "%4X: add_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC490:
	.ascii "%4X: sub_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC491:
	.ascii "%4X: mul_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC492:
	.ascii "%4X: div_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC493:
	.ascii "%4X: mod_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC494:
	.ascii "%4X: add_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC495:
	.ascii "%4X: sub_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC496:
	.ascii "%4X: mul_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC497:
	.ascii "%4X: div_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC498:
	.ascii "%4X: mod_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC499:
	.ascii "%4X: add_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC500:
	.ascii "%4X: sub_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC501:
	.ascii "%4X: mul_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC502:
	.ascii "%4X: div_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC503:
	.ascii "%4X: mod_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC504:
	.ascii "%4X: land_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC505:
	.ascii "%4X: land_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC506:
	.ascii "%4X: lor_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC507:
	.ascii "%4X: lor_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC508:
	.ascii "%4X: shl_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC509:
	.ascii "%4X: shl_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC510:
	.ascii "%4X: lshr_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC511:
	.ascii "%4X: lshr_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC512:
	.ascii "%4X: ashr_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC513:
	.ascii "%4X: ashr_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC514:
	.ascii "%4X: rol_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC515:
	.ascii "%4X: rol_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC516:
	.ascii "%4X: ror_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC517:
	.ascii "%4X: ror_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC518:
	.ascii "%4X: and_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC519:
	.ascii "%4X: and_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC520:
	.ascii "%4X: or_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC521:
	.ascii "%4X: or_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC522:
	.ascii "%4X: xor_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC523:
	.ascii "%4X: xor_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC524:
	.ascii "%4X: andn_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC525:
	.ascii "%4X: andn_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC526:
	.ascii "%4X: orn_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC527:
	.ascii "%4X: orn_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC528:
	.ascii "%4X: xorn_r16_b32  \11r%d, \11r%d \11, \11r%d \11result: 0x%X\12\0"
	.align 8
.LC529:
	.ascii "%4X: xorn_r16_b64  \11r%d, \11r%d \11, \11r%d \11result: 0x%llX\12\0"
	.align 8
.LC530:
	.ascii "%4X: cmplt_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC531:
	.ascii "%4X: cmple_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC532:
	.ascii "%4X: cmpeq_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC533:
	.ascii "%4X: cmpne_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC534:
	.ascii "%4X: cmpgt_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC535:
	.ascii "%4X: cmpge_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC536:
	.ascii "%4X: cmplt_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC537:
	.ascii "%4X: cmple_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC538:
	.ascii "%4X: cmpeq_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC539:
	.ascii "%4X: cmpne_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC540:
	.ascii "%4X: cmpgt_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC541:
	.ascii "%4X: cmpge_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC542:
	.ascii "%4X: cmplt_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC543:
	.ascii "%4X: cmple_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC544:
	.ascii "%4X: cmpeq_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC545:
	.ascii "%4X: cmpne_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC546:
	.ascii "%4X: cmpgt_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC547:
	.ascii "%4X: cmpge_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC548:
	.ascii "%4X: cmplt_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC549:
	.ascii "%4X: cmple_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC550:
	.ascii "%4X: cmpeq_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC551:
	.ascii "%4X: cmpne_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC552:
	.ascii "%4X: cmpgt_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC553:
	.ascii "%4X: cmpge_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC554:
	.ascii "%4X: cmplt_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC555:
	.ascii "%4X: cmple_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC556:
	.ascii "%4X: cmpeq_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC557:
	.ascii "%4X: cmpne_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC558:
	.ascii "%4X: cmpgt_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC559:
	.ascii "%4X: cmpge_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC560:
	.ascii "%4X: cmplt_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC561:
	.ascii "%4X: cmple_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC562:
	.ascii "%4X: cmpeq_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC563:
	.ascii "%4X: cmpne_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC564:
	.ascii "%4X: cmpgt_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC565:
	.ascii "%4X: cmpge_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC566:
	.ascii "%4X: max_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC567:
	.ascii "%4X: max_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC568:
	.ascii "%4X: max_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC569:
	.ascii "%4X: max_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC570:
	.ascii "%4X: max_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC571:
	.ascii "%4X: max_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC572:
	.ascii "%4X: min_r16_i32  \11r%d, \11r%d \11, \11r%d \11result: %d\12\0"
	.align 8
.LC573:
	.ascii "%4X: min_r16_u32  \11r%d, \11r%d \11, \11r%d \11result: %u\12\0"
	.align 8
.LC574:
	.ascii "%4X: min_r16_i64  \11r%d, \11r%d \11, \11r%d \11result: %lld\12\0"
	.align 8
.LC575:
	.ascii "%4X: min_r16_u64  \11r%d, \11r%d \11, \11r%d \11result: %llu\12\0"
	.align 8
.LC576:
	.ascii "%4X: min_r16_f32  \11r%d, \11r%d \11, \11r%d \11result: %f\12\0"
	.align 8
.LC577:
	.ascii "%4X: min_r16_f64  \11r%d, \11r%d \11, \11r%d \11result: %lf\12\0"
	.align 8
.LC578:
	.ascii "%4d: Instruction format error or unknown instruction!\12\0"
	.text
	.p2align 4
	.globl	airvm_run
	.def	airvm_run;	.scl	2;	.type	32;	.endef
	.seh_proc	airvm_run
airvm_run:
	pushq	%r15
	.seh_pushreg	%r15
	pushq	%r14
	.seh_pushreg	%r14
	pushq	%r13
	.seh_pushreg	%r13
	pushq	%r12
	.seh_pushreg	%r12
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rdi
	.seh_pushreg	%rdi
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$120, %rsp
	.seh_stackalloc	120
	movaps	%xmm6, 96(%rsp)
	.seh_savexmm	%xmm6, 96
	.seh_endprologue
	testl	%r8d, %r8d
	movq	%rcx, %rsi
	movq	%rdx, %rbx
	jne	.L856
	testq	%rcx, %rcx
	je	.L814
	testq	%rdx, %rdx
	je	.L814
.L6:
	movl	4(%rbx), %r13d
	leaq	8(%rbx), %r12
	movl	32(%rsi), %ebx
	leaq	36(%rsi), %rdi
	cmpl	%r13d, %ebx
	jnb	.L8
	leaq	.L11(%rip), %rbp
	leaq	.L680(%rip), %r14
	.p2align 4,,10
	.p2align 3
.L800:
	movl	%ebx, %eax
	movzwl	(%r12,%rax,2), %eax
	movl	%eax, %edx
	shrw	$8, %dx
	cmpw	$8447, %ax
	ja	.L9
	movzwl	%dx, %edx
	movslq	0(%rbp,%rdx,4), %rdx
	addq	%rbp, %rdx
	jmp	*%rdx
	.section .rdata,"dr"
	.align 4
.L11:
	.long	.L43-.L11
	.long	.L42-.L11
	.long	.L41-.L11
	.long	.L40-.L11
	.long	.L39-.L11
	.long	.L38-.L11
	.long	.L37-.L11
	.long	.L36-.L11
	.long	.L35-.L11
	.long	.L34-.L11
	.long	.L33-.L11
	.long	.L32-.L11
	.long	.L31-.L11
	.long	.L30-.L11
	.long	.L29-.L11
	.long	.L28-.L11
	.long	.L27-.L11
	.long	.L26-.L11
	.long	.L25-.L11
	.long	.L24-.L11
	.long	.L23-.L11
	.long	.L22-.L11
	.long	.L21-.L11
	.long	.L20-.L11
	.long	.L19-.L11
	.long	.L18-.L11
	.long	.L17-.L11
	.long	.L16-.L11
	.long	.L15-.L11
	.long	.L14-.L11
	.long	.L13-.L11
	.long	.L12-.L11
	.long	.L10-.L11
	.text
	.p2align 4,,10
	.p2align 3
.L12:
	leal	1(%rbx), %edx
	cmpb	$103, %al
	movzbl	%al, %r11d
	movzwl	(%r12,%rdx,2), %r8d
	leal	2(%rbx), %edx
	movzwl	(%r12,%rdx,2), %r9d
	leal	3(%rbx), %edx
	movzwl	(%r12,%rdx,2), %r15d
	movq	%r8, %r10
	ja	.L9
	leaq	.L559(%rip), %rax
	movslq	(%rax,%r11,4), %rax
	leaq	.L559(%rip), %r11
	addq	%r11, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L559:
	.long	.L662-.L559
	.long	.L661-.L559
	.long	.L660-.L559
	.long	.L659-.L559
	.long	.L658-.L559
	.long	.L657-.L559
	.long	.L656-.L559
	.long	.L655-.L559
	.long	.L654-.L559
	.long	.L653-.L559
	.long	.L652-.L559
	.long	.L651-.L559
	.long	.L650-.L559
	.long	.L649-.L559
	.long	.L648-.L559
	.long	.L647-.L559
	.long	.L646-.L559
	.long	.L645-.L559
	.long	.L644-.L559
	.long	.L643-.L559
	.long	.L642-.L559
	.long	.L641-.L559
	.long	.L640-.L559
	.long	.L639-.L559
	.long	.L638-.L559
	.long	.L637-.L559
	.long	.L636-.L559
	.long	.L635-.L559
	.long	.L634-.L559
	.long	.L633-.L559
	.long	.L632-.L559
	.long	.L631-.L559
	.long	.L630-.L559
	.long	.L629-.L559
	.long	.L628-.L559
	.long	.L627-.L559
	.long	.L626-.L559
	.long	.L625-.L559
	.long	.L624-.L559
	.long	.L623-.L559
	.long	.L622-.L559
	.long	.L621-.L559
	.long	.L620-.L559
	.long	.L619-.L559
	.long	.L618-.L559
	.long	.L617-.L559
	.long	.L616-.L559
	.long	.L615-.L559
	.long	.L614-.L559
	.long	.L613-.L559
	.long	.L612-.L559
	.long	.L611-.L559
	.long	.L610-.L559
	.long	.L609-.L559
	.long	.L608-.L559
	.long	.L607-.L559
	.long	.L606-.L559
	.long	.L605-.L559
	.long	.L604-.L559
	.long	.L603-.L559
	.long	.L602-.L559
	.long	.L601-.L559
	.long	.L600-.L559
	.long	.L599-.L559
	.long	.L598-.L559
	.long	.L597-.L559
	.long	.L596-.L559
	.long	.L595-.L559
	.long	.L594-.L559
	.long	.L593-.L559
	.long	.L592-.L559
	.long	.L591-.L559
	.long	.L590-.L559
	.long	.L589-.L559
	.long	.L588-.L559
	.long	.L587-.L559
	.long	.L586-.L559
	.long	.L585-.L559
	.long	.L584-.L559
	.long	.L583-.L559
	.long	.L582-.L559
	.long	.L581-.L559
	.long	.L580-.L559
	.long	.L579-.L559
	.long	.L578-.L559
	.long	.L577-.L559
	.long	.L576-.L559
	.long	.L575-.L559
	.long	.L574-.L559
	.long	.L573-.L559
	.long	.L572-.L559
	.long	.L571-.L559
	.long	.L570-.L559
	.long	.L569-.L559
	.long	.L568-.L559
	.long	.L567-.L559
	.long	.L566-.L559
	.long	.L565-.L559
	.long	.L564-.L559
	.long	.L563-.L559
	.long	.L562-.L559
	.long	.L561-.L559
	.long	.L560-.L559
	.long	.L558-.L559
	.text
	.p2align 4,,10
	.p2align 3
.L13:
	leal	1(%rbx), %edx
	cmpb	$103, %al
	movzwl	(%r12,%rdx,2), %r8d
	leal	2(%rbx), %edx
	movzwl	(%r12,%rdx,2), %ecx
	movq	%r8, %r10
	movzbl	%ch, %edx
	movzbl	%cl, %r15d
	movl	%edx, %r9d
	movzbl	%cl, %edx
	movzbl	%al, %ecx
	ja	.L9
	leaq	.L438(%rip), %r11
	movslq	(%r11,%rcx,4), %rax
	addq	%r11, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L438:
	.long	.L541-.L438
	.long	.L540-.L438
	.long	.L539-.L438
	.long	.L538-.L438
	.long	.L537-.L438
	.long	.L536-.L438
	.long	.L535-.L438
	.long	.L534-.L438
	.long	.L533-.L438
	.long	.L532-.L438
	.long	.L531-.L438
	.long	.L530-.L438
	.long	.L529-.L438
	.long	.L528-.L438
	.long	.L527-.L438
	.long	.L526-.L438
	.long	.L525-.L438
	.long	.L524-.L438
	.long	.L523-.L438
	.long	.L522-.L438
	.long	.L521-.L438
	.long	.L520-.L438
	.long	.L519-.L438
	.long	.L518-.L438
	.long	.L517-.L438
	.long	.L516-.L438
	.long	.L515-.L438
	.long	.L514-.L438
	.long	.L513-.L438
	.long	.L512-.L438
	.long	.L511-.L438
	.long	.L510-.L438
	.long	.L509-.L438
	.long	.L508-.L438
	.long	.L507-.L438
	.long	.L506-.L438
	.long	.L505-.L438
	.long	.L504-.L438
	.long	.L503-.L438
	.long	.L502-.L438
	.long	.L501-.L438
	.long	.L500-.L438
	.long	.L499-.L438
	.long	.L498-.L438
	.long	.L497-.L438
	.long	.L496-.L438
	.long	.L495-.L438
	.long	.L494-.L438
	.long	.L493-.L438
	.long	.L492-.L438
	.long	.L491-.L438
	.long	.L490-.L438
	.long	.L489-.L438
	.long	.L488-.L438
	.long	.L487-.L438
	.long	.L486-.L438
	.long	.L485-.L438
	.long	.L484-.L438
	.long	.L483-.L438
	.long	.L482-.L438
	.long	.L481-.L438
	.long	.L480-.L438
	.long	.L479-.L438
	.long	.L478-.L438
	.long	.L477-.L438
	.long	.L476-.L438
	.long	.L475-.L438
	.long	.L474-.L438
	.long	.L473-.L438
	.long	.L472-.L438
	.long	.L471-.L438
	.long	.L470-.L438
	.long	.L469-.L438
	.long	.L468-.L438
	.long	.L467-.L438
	.long	.L466-.L438
	.long	.L465-.L438
	.long	.L464-.L438
	.long	.L463-.L438
	.long	.L462-.L438
	.long	.L461-.L438
	.long	.L460-.L438
	.long	.L459-.L438
	.long	.L458-.L438
	.long	.L457-.L438
	.long	.L456-.L438
	.long	.L455-.L438
	.long	.L454-.L438
	.long	.L453-.L438
	.long	.L452-.L438
	.long	.L451-.L438
	.long	.L450-.L438
	.long	.L449-.L438
	.long	.L448-.L438
	.long	.L447-.L438
	.long	.L446-.L438
	.long	.L445-.L438
	.long	.L444-.L438
	.long	.L443-.L438
	.long	.L442-.L438
	.long	.L441-.L438
	.long	.L440-.L438
	.long	.L439-.L438
	.long	.L437-.L438
	.text
	.p2align 4,,10
	.p2align 3
.L14:
	leal	1(%rbx), %edx
	movzwl	(%r12,%rdx,2), %ecx
	movzbl	%ch, %edx
	movl	%ecx, %r9d
	movl	%ecx, %r15d
	shrl	$4, %r9d
	movl	%edx, %r8d
	movl	%ecx, %edx
	andl	$15, %r9d
	andl	$15, %edx
	andl	$15, %r15d
	cmpb	$103, %al
	movzbl	%al, %ecx
	ja	.L9
	leaq	.L317(%rip), %r10
	movslq	(%r10,%rcx,4), %rax
	addq	%r10, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L317:
	.long	.L420-.L317
	.long	.L419-.L317
	.long	.L418-.L317
	.long	.L417-.L317
	.long	.L416-.L317
	.long	.L415-.L317
	.long	.L414-.L317
	.long	.L413-.L317
	.long	.L412-.L317
	.long	.L411-.L317
	.long	.L410-.L317
	.long	.L409-.L317
	.long	.L408-.L317
	.long	.L407-.L317
	.long	.L406-.L317
	.long	.L405-.L317
	.long	.L404-.L317
	.long	.L403-.L317
	.long	.L402-.L317
	.long	.L401-.L317
	.long	.L400-.L317
	.long	.L399-.L317
	.long	.L398-.L317
	.long	.L397-.L317
	.long	.L396-.L317
	.long	.L395-.L317
	.long	.L394-.L317
	.long	.L393-.L317
	.long	.L392-.L317
	.long	.L391-.L317
	.long	.L390-.L317
	.long	.L389-.L317
	.long	.L388-.L317
	.long	.L387-.L317
	.long	.L386-.L317
	.long	.L385-.L317
	.long	.L384-.L317
	.long	.L383-.L317
	.long	.L382-.L317
	.long	.L381-.L317
	.long	.L380-.L317
	.long	.L379-.L317
	.long	.L378-.L317
	.long	.L377-.L317
	.long	.L376-.L317
	.long	.L375-.L317
	.long	.L374-.L317
	.long	.L373-.L317
	.long	.L372-.L317
	.long	.L371-.L317
	.long	.L370-.L317
	.long	.L369-.L317
	.long	.L368-.L317
	.long	.L367-.L317
	.long	.L366-.L317
	.long	.L365-.L317
	.long	.L364-.L317
	.long	.L363-.L317
	.long	.L362-.L317
	.long	.L361-.L317
	.long	.L360-.L317
	.long	.L359-.L317
	.long	.L358-.L317
	.long	.L357-.L317
	.long	.L356-.L317
	.long	.L355-.L317
	.long	.L354-.L317
	.long	.L353-.L317
	.long	.L352-.L317
	.long	.L351-.L317
	.long	.L350-.L317
	.long	.L349-.L317
	.long	.L348-.L317
	.long	.L347-.L317
	.long	.L346-.L317
	.long	.L345-.L317
	.long	.L344-.L317
	.long	.L343-.L317
	.long	.L342-.L317
	.long	.L341-.L317
	.long	.L340-.L317
	.long	.L339-.L317
	.long	.L338-.L317
	.long	.L337-.L317
	.long	.L336-.L317
	.long	.L335-.L317
	.long	.L334-.L317
	.long	.L333-.L317
	.long	.L332-.L317
	.long	.L331-.L317
	.long	.L330-.L317
	.long	.L329-.L317
	.long	.L328-.L317
	.long	.L327-.L317
	.long	.L326-.L317
	.long	.L325-.L317
	.long	.L324-.L317
	.long	.L323-.L317
	.long	.L322-.L317
	.long	.L321-.L317
	.long	.L320-.L317
	.long	.L319-.L317
	.long	.L318-.L317
	.long	.L316-.L317
	.text
	.p2align 4,,10
	.p2align 3
.L15:
	leal	1(%rbx), %edx
	cmpb	$53, %al
	movzbl	%al, %ecx
	movzwl	(%r12,%rdx,2), %r8d
	leal	2(%rbx), %edx
	movzwl	(%r12,%rdx,2), %r9d
	movq	%r8, %r15
	ja	.L9
	leaq	.L262(%rip), %r10
	movslq	(%r10,%rcx,4), %rax
	addq	%r10, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L262:
	.long	.L315-.L262
	.long	.L314-.L262
	.long	.L313-.L262
	.long	.L312-.L262
	.long	.L311-.L262
	.long	.L310-.L262
	.long	.L309-.L262
	.long	.L308-.L262
	.long	.L307-.L262
	.long	.L306-.L262
	.long	.L305-.L262
	.long	.L304-.L262
	.long	.L303-.L262
	.long	.L302-.L262
	.long	.L301-.L262
	.long	.L300-.L262
	.long	.L299-.L262
	.long	.L298-.L262
	.long	.L297-.L262
	.long	.L296-.L262
	.long	.L295-.L262
	.long	.L294-.L262
	.long	.L293-.L262
	.long	.L292-.L262
	.long	.L291-.L262
	.long	.L290-.L262
	.long	.L289-.L262
	.long	.L288-.L262
	.long	.L287-.L262
	.long	.L286-.L262
	.long	.L285-.L262
	.long	.L284-.L262
	.long	.L283-.L262
	.long	.L282-.L262
	.long	.L281-.L262
	.long	.L280-.L262
	.long	.L279-.L262
	.long	.L278-.L262
	.long	.L277-.L262
	.long	.L276-.L262
	.long	.L275-.L262
	.long	.L274-.L262
	.long	.L273-.L262
	.long	.L272-.L262
	.long	.L271-.L262
	.long	.L270-.L262
	.long	.L269-.L262
	.long	.L268-.L262
	.long	.L267-.L262
	.long	.L266-.L262
	.long	.L265-.L262
	.long	.L264-.L262
	.long	.L263-.L262
	.long	.L261-.L262
	.text
	.p2align 4,,10
	.p2align 3
.L16:
	leal	1(%rbx), %edx
	cmpb	$53, %al
	movzwl	(%r12,%rdx,2), %edx
	movzbl	%dh, %ecx
	movzbl	%dl, %r9d
	movl	%ecx, %r8d
	movzbl	%dl, %ecx
	movzbl	%al, %edx
	ja	.L9
	leaq	.L207(%rip), %r10
	movslq	(%r10,%rdx,4), %rax
	addq	%r10, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L207:
	.long	.L260-.L207
	.long	.L259-.L207
	.long	.L258-.L207
	.long	.L257-.L207
	.long	.L256-.L207
	.long	.L255-.L207
	.long	.L254-.L207
	.long	.L253-.L207
	.long	.L252-.L207
	.long	.L251-.L207
	.long	.L250-.L207
	.long	.L249-.L207
	.long	.L248-.L207
	.long	.L247-.L207
	.long	.L246-.L207
	.long	.L245-.L207
	.long	.L244-.L207
	.long	.L243-.L207
	.long	.L242-.L207
	.long	.L241-.L207
	.long	.L240-.L207
	.long	.L239-.L207
	.long	.L238-.L207
	.long	.L237-.L207
	.long	.L236-.L207
	.long	.L235-.L207
	.long	.L234-.L207
	.long	.L233-.L207
	.long	.L232-.L207
	.long	.L231-.L207
	.long	.L230-.L207
	.long	.L229-.L207
	.long	.L228-.L207
	.long	.L227-.L207
	.long	.L226-.L207
	.long	.L225-.L207
	.long	.L224-.L207
	.long	.L223-.L207
	.long	.L222-.L207
	.long	.L221-.L207
	.long	.L220-.L207
	.long	.L219-.L207
	.long	.L218-.L207
	.long	.L217-.L207
	.long	.L216-.L207
	.long	.L215-.L207
	.long	.L214-.L207
	.long	.L213-.L207
	.long	.L212-.L207
	.long	.L211-.L207
	.long	.L210-.L207
	.long	.L209-.L207
	.long	.L208-.L207
	.long	.L206-.L207
	.text
	.p2align 4,,10
	.p2align 3
.L17:
	leal	1(%rbx), %edx
	cmpb	$53, %al
	movzbl	%al, %r10d
	movzwl	(%r12,%rdx,2), %r8d
	leal	2(%rbx), %ecx
	movzwl	(%r12,%rcx,2), %r9d
	movq	%r8, %rdx
	ja	.L9
	leaq	.L140(%rip), %r11
	movslq	(%r11,%r10,4), %rax
	addq	%r11, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L140:
	.long	.L193-.L140
	.long	.L192-.L140
	.long	.L191-.L140
	.long	.L190-.L140
	.long	.L189-.L140
	.long	.L188-.L140
	.long	.L187-.L140
	.long	.L186-.L140
	.long	.L185-.L140
	.long	.L184-.L140
	.long	.L183-.L140
	.long	.L182-.L140
	.long	.L181-.L140
	.long	.L180-.L140
	.long	.L179-.L140
	.long	.L178-.L140
	.long	.L177-.L140
	.long	.L176-.L140
	.long	.L175-.L140
	.long	.L174-.L140
	.long	.L173-.L140
	.long	.L172-.L140
	.long	.L171-.L140
	.long	.L170-.L140
	.long	.L169-.L140
	.long	.L168-.L140
	.long	.L167-.L140
	.long	.L166-.L140
	.long	.L165-.L140
	.long	.L164-.L140
	.long	.L163-.L140
	.long	.L162-.L140
	.long	.L161-.L140
	.long	.L160-.L140
	.long	.L159-.L140
	.long	.L158-.L140
	.long	.L157-.L140
	.long	.L156-.L140
	.long	.L155-.L140
	.long	.L154-.L140
	.long	.L153-.L140
	.long	.L152-.L140
	.long	.L151-.L140
	.long	.L150-.L140
	.long	.L149-.L140
	.long	.L148-.L140
	.long	.L147-.L140
	.long	.L146-.L140
	.long	.L145-.L140
	.long	.L144-.L140
	.long	.L143-.L140
	.long	.L142-.L140
	.long	.L141-.L140
	.long	.L139-.L140
	.text
	.p2align 4,,10
	.p2align 3
.L18:
	leal	1(%rbx), %edx
	cmpb	$53, %al
	movzwl	(%r12,%rdx,2), %edx
	movzbl	%dh, %ecx
	movzbl	%dl, %r9d
	movl	%ecx, %r8d
	movzbl	%dl, %ecx
	movzbl	%al, %edx
	ja	.L9
	leaq	.L73(%rip), %r10
	movslq	(%r10,%rdx,4), %rax
	addq	%r10, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L73:
	.long	.L126-.L73
	.long	.L125-.L73
	.long	.L124-.L73
	.long	.L123-.L73
	.long	.L122-.L73
	.long	.L121-.L73
	.long	.L120-.L73
	.long	.L119-.L73
	.long	.L118-.L73
	.long	.L117-.L73
	.long	.L116-.L73
	.long	.L115-.L73
	.long	.L114-.L73
	.long	.L113-.L73
	.long	.L112-.L73
	.long	.L111-.L73
	.long	.L110-.L73
	.long	.L109-.L73
	.long	.L108-.L73
	.long	.L107-.L73
	.long	.L106-.L73
	.long	.L105-.L73
	.long	.L104-.L73
	.long	.L103-.L73
	.long	.L102-.L73
	.long	.L101-.L73
	.long	.L100-.L73
	.long	.L99-.L73
	.long	.L98-.L73
	.long	.L97-.L73
	.long	.L96-.L73
	.long	.L95-.L73
	.long	.L94-.L73
	.long	.L93-.L73
	.long	.L92-.L73
	.long	.L91-.L73
	.long	.L90-.L73
	.long	.L89-.L73
	.long	.L88-.L73
	.long	.L87-.L73
	.long	.L86-.L73
	.long	.L85-.L73
	.long	.L84-.L73
	.long	.L83-.L73
	.long	.L82-.L73
	.long	.L81-.L73
	.long	.L80-.L73
	.long	.L79-.L73
	.long	.L78-.L73
	.long	.L77-.L73
	.long	.L76-.L73
	.long	.L75-.L73
	.long	.L74-.L73
	.long	.L72-.L73
	.text
	.p2align 4,,10
	.p2align 3
.L19:
	movl	%eax, %r8d
	movq	%rax, %rdx
	movl	%eax, %r9d
	shrl	$4, %r8d
	andl	$15, %edx
	andl	$15, %r9d
	movsd	(%rdi,%rdx,4), %xmm0
	leaq	.LC50(%rip), %rcx
	movl	%r8d, %edx
	andl	$15, %r8d
	andl	$15, %edx
	movsd	%xmm0, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	1(%rax), %ebx
	.p2align 4,,10
	.p2align 3
.L44:
	cmpl	%r13d, %ebx
	movl	%ebx, 32(%rsi)
	jb	.L800
.L8:
	cmpl	%ebx, %r13d
	je	.L857
.L831:
	movaps	96(%rsp), %xmm6
	movq	%rsi, %rax
	addq	$120, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rdi
	popq	%rbp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	ret
	.p2align 4,,10
	.p2align 3
.L20:
	movq	%rax, %rdx
	movl	%eax, %r8d
	movl	%eax, %r9d
	andl	$15, %edx
	shrl	$4, %r8d
	andl	$15, %r9d
	movq	(%rdi,%rdx,4), %rdx
	movl	%r8d, %ecx
	andl	$15, %r8d
	andl	$15, %ecx
	movq	%rdx, (%rdi,%rcx,4)
	leaq	.LC49(%rip), %rcx
	movq	%rdx, 32(%rsp)
	movl	%ebx, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	1(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L21:
	movq	%rax, %rdx
	movl	%eax, %r8d
	movl	%eax, %r9d
	andl	$15, %edx
	shrl	$4, %r8d
	andl	$15, %r9d
	movq	(%rdi,%rdx,4), %rdx
	movl	%r8d, %ecx
	andl	$15, %r8d
	andl	$15, %ecx
	movq	%rdx, (%rdi,%rcx,4)
	leaq	.LC48(%rip), %rcx
	movq	%rdx, 32(%rsp)
	movl	%ebx, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	1(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L22:
	movl	%eax, %r8d
	movq	%rax, %rdx
	movl	%eax, %r9d
	shrl	$4, %r8d
	andl	$15, %edx
	andl	$15, %r9d
	movd	(%rdi,%rdx,4), %xmm0
	leaq	.LC47(%rip), %rcx
	movl	%r8d, %edx
	andl	$15, %r8d
	andl	$15, %edx
	movd	%xmm0, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	1(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L23:
	movq	%rax, %rdx
	movl	%eax, %r8d
	movl	%eax, %r9d
	andl	$15, %edx
	shrl	$4, %r8d
	andl	$15, %r9d
	movl	(%rdi,%rdx,4), %edx
	movl	%r8d, %ecx
	andl	$15, %r8d
	andl	$15, %ecx
	movl	%edx, (%rdi,%rcx,4)
	movl	32(%rsi), %ecx
	movl	%edx, 32(%rsp)
	movl	%ecx, %edx
	leaq	.LC46(%rip), %rcx
	call	printf
	movl	32(%rsi), %eax
	leal	1(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L24:
	movq	%rax, %rdx
	movl	%eax, %r8d
	movl	%eax, %r9d
	andl	$15, %edx
	shrl	$4, %r8d
	andl	$15, %r9d
	movl	(%rdi,%rdx,4), %edx
	movl	%r8d, %ecx
	andl	$15, %r8d
	andl	$15, %ecx
	movl	%edx, (%rdi,%rcx,4)
	movl	32(%rsi), %ecx
	movl	%edx, 32(%rsp)
	movl	%ecx, %edx
	leaq	.LC45(%rip), %rcx
	call	printf
	movl	32(%rsi), %eax
	leal	1(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L25:
	leal	1(%rbx), %edx
	cmpb	$11, %al
	movzbl	%al, %ecx
	movzwl	(%r12,%rdx,2), %r8d
	ja	.L9
	leaq	.L60(%rip), %r9
	movslq	(%r9,%rcx,4), %rax
	addq	%r9, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L60:
	.long	.L71-.L60
	.long	.L70-.L60
	.long	.L69-.L60
	.long	.L68-.L60
	.long	.L67-.L60
	.long	.L66-.L60
	.long	.L65-.L60
	.long	.L64-.L60
	.long	.L63-.L60
	.long	.L62-.L60
	.long	.L61-.L60
	.long	.L59-.L60
	.text
	.p2align 4,,10
	.p2align 3
.L26:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movq	(%r12,%rdx,2), %r9
	leaq	.LC32(%rip), %rcx
	movzbl	%al, %edx
	movq	%r9, (%rdi,%rdx,4)
	movq	%r9, %xmm3
	movl	%ebx, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	5(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L27:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movq	(%r12,%rdx,2), %r9
	leaq	.LC31(%rip), %rcx
	movzbl	%al, %edx
	movq	%r9, (%rdi,%rdx,4)
	movl	%ebx, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	5(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L28:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movq	(%r12,%rdx,2), %r9
	leaq	.LC30(%rip), %rcx
	movzbl	%al, %edx
	movq	%r9, (%rdi,%rdx,4)
	movl	%ebx, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	5(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L29:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	pxor	%xmm2, %xmm2
	movd	(%r12,%rdx,2), %xmm3
	leaq	.LC29(%rip), %rcx
	movzbl	%al, %edx
	movd	%xmm3, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	cvtss2sd	%xmm3, %xmm2
	movapd	%xmm2, %xmm3
	movq	%xmm2, %r9
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L30:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movl	(%r12,%rdx,2), %r9d
	leaq	.LC28(%rip), %rcx
	movzbl	%al, %edx
	movl	%r9d, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L31:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movl	(%r12,%rdx,2), %r9d
	leaq	.LC27(%rip), %rcx
	movzbl	%al, %edx
	movl	%r9d, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L32:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movzwl	(%r12,%rdx,2), %r9d
	leaq	.LC26(%rip), %rcx
	movzbl	%al, %edx
	movw	%r9w, (%rdi,%rdx,4)
	movl	%ebx, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L33:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movzwl	(%r12,%rdx,2), %r9d
	leaq	.LC25(%rip), %rcx
	movzbl	%al, %edx
	movw	%r9w, 2(%rdi,%rdx,4)
	movl	%ebx, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L34:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movzwl	(%r12,%rdx,2), %r9d
	leaq	.LC24(%rip), %rcx
	movzbl	%al, %edx
	movq	%r9, (%rdi,%rdx,4)
	movl	%ebx, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L35:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movswq	(%r12,%rdx,2), %r9
	leaq	.LC23(%rip), %rcx
	movzbl	%al, %edx
	movq	%r9, (%rdi,%rdx,4)
	movl	%ebx, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L36:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movzwl	(%r12,%rdx,2), %r9d
	leaq	.LC22(%rip), %rcx
	movzbl	%al, %edx
	movl	%r9d, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L37:
	leal	1(%rbx), %edx
	movzbl	%al, %r8d
	movswl	(%r12,%rdx,2), %r9d
	leaq	.LC21(%rip), %rcx
	movzbl	%al, %edx
	movl	%r9d, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L38:
	leal	1(%rbx), %edx
	cmpb	$11, %al
	movzwl	(%r12,%rdx,2), %ecx
	movzbl	%ch, %edx
	movzbl	%cl, %r9d
	movl	%edx, %r8d
	movzbl	%al, %edx
	ja	.L9
	leaq	.L46(%rip), %r10
	movslq	(%r10,%rdx,4), %rax
	addq	%r10, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L46:
	.long	.L57-.L46
	.long	.L56-.L46
	.long	.L55-.L46
	.long	.L54-.L46
	.long	.L53-.L46
	.long	.L52-.L46
	.long	.L51-.L46
	.long	.L50-.L46
	.long	.L49-.L46
	.long	.L48-.L46
	.long	.L47-.L46
	.long	.L45-.L46
	.text
	.p2align 4,,10
	.p2align 3
.L39:
	movl	%eax, %r8d
	movq	%rax, %r9
	movl	%ebx, %edx
	leaq	.LC8(%rip), %rcx
	shrl	$4, %r8d
	andl	$15, %r9d
	movl	%r8d, %eax
	andl	$15, %r8d
	andl	$15, %eax
	movq	%r9, (%rdi,%rax,4)
	call	printf
	movl	32(%rsi), %eax
	leal	1(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L40:
	leaq	.LC7(%rip), %rcx
	movl	%eax, %r8d
	andl	$15, %eax
	movl	%eax, %r9d
	shrl	$4, %r8d
	movl	%ebx, %edx
	shrl	$3, %r9d
	negl	%r9d
	andl	$-16, %r9d
	orl	%eax, %r9d
	movl	%r8d, %eax
	andl	$15, %r8d
	movslq	%r9d, %r9
	andl	$15, %eax
	movq	%r9, (%rdi,%rax,4)
	call	printf
	movl	32(%rsi), %eax
	leal	1(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L41:
	leaq	.LC6(%rip), %rcx
	movl	%eax, %r8d
	movl	%eax, %r9d
	shrl	$4, %r8d
	andl	$15, %r9d
	movl	%r8d, %eax
	andl	$15, %r8d
	andl	$15, %eax
	movl	%r9d, (%rdi,%rax,4)
	movl	32(%rsi), %edx
	call	printf
	movl	32(%rsi), %eax
	leal	1(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L42:
	leaq	.LC5(%rip), %rcx
	movl	%eax, %r8d
	andl	$15, %eax
	movl	%eax, %r9d
	shrl	$4, %r8d
	shrl	$3, %r9d
	negl	%r9d
	andl	$-16, %r9d
	orl	%eax, %r9d
	movl	%r8d, %eax
	andl	$15, %r8d
	andl	$15, %eax
	movl	%r9d, (%rdi,%rax,4)
	movl	32(%rsi), %edx
	call	printf
	movl	32(%rsi), %eax
	leal	1(%rax), %ebx
	jmp	.L44
	.p2align 4,,10
	.p2align 3
.L10:
	leal	1(%rbx), %edx
	cmpb	$103, %al
	movzbl	%al, %r11d
	movzwl	(%r12,%rdx,2), %r8d
	leal	2(%rbx), %edx
	movzwl	(%r12,%rdx,2), %r9d
	leal	3(%rbx), %edx
	movzwl	(%r12,%rdx,2), %r15d
	movq	%r8, %r10
	ja	.L9
	movslq	(%r14,%r11,4), %rax
	addq	%r14, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L680:
	.long	.L783-.L680
	.long	.L782-.L680
	.long	.L781-.L680
	.long	.L780-.L680
	.long	.L779-.L680
	.long	.L778-.L680
	.long	.L777-.L680
	.long	.L776-.L680
	.long	.L775-.L680
	.long	.L774-.L680
	.long	.L773-.L680
	.long	.L772-.L680
	.long	.L771-.L680
	.long	.L770-.L680
	.long	.L769-.L680
	.long	.L768-.L680
	.long	.L767-.L680
	.long	.L766-.L680
	.long	.L765-.L680
	.long	.L764-.L680
	.long	.L763-.L680
	.long	.L762-.L680
	.long	.L761-.L680
	.long	.L760-.L680
	.long	.L759-.L680
	.long	.L758-.L680
	.long	.L757-.L680
	.long	.L756-.L680
	.long	.L755-.L680
	.long	.L754-.L680
	.long	.L753-.L680
	.long	.L752-.L680
	.long	.L751-.L680
	.long	.L750-.L680
	.long	.L749-.L680
	.long	.L748-.L680
	.long	.L747-.L680
	.long	.L746-.L680
	.long	.L745-.L680
	.long	.L744-.L680
	.long	.L743-.L680
	.long	.L742-.L680
	.long	.L741-.L680
	.long	.L740-.L680
	.long	.L739-.L680
	.long	.L738-.L680
	.long	.L737-.L680
	.long	.L736-.L680
	.long	.L735-.L680
	.long	.L734-.L680
	.long	.L733-.L680
	.long	.L732-.L680
	.long	.L731-.L680
	.long	.L730-.L680
	.long	.L729-.L680
	.long	.L728-.L680
	.long	.L727-.L680
	.long	.L726-.L680
	.long	.L725-.L680
	.long	.L724-.L680
	.long	.L723-.L680
	.long	.L722-.L680
	.long	.L721-.L680
	.long	.L720-.L680
	.long	.L719-.L680
	.long	.L718-.L680
	.long	.L717-.L680
	.long	.L716-.L680
	.long	.L715-.L680
	.long	.L714-.L680
	.long	.L713-.L680
	.long	.L712-.L680
	.long	.L711-.L680
	.long	.L710-.L680
	.long	.L709-.L680
	.long	.L708-.L680
	.long	.L707-.L680
	.long	.L706-.L680
	.long	.L705-.L680
	.long	.L704-.L680
	.long	.L703-.L680
	.long	.L702-.L680
	.long	.L701-.L680
	.long	.L700-.L680
	.long	.L699-.L680
	.long	.L698-.L680
	.long	.L697-.L680
	.long	.L696-.L680
	.long	.L695-.L680
	.long	.L694-.L680
	.long	.L693-.L680
	.long	.L692-.L680
	.long	.L691-.L680
	.long	.L690-.L680
	.long	.L689-.L680
	.long	.L688-.L680
	.long	.L687-.L680
	.long	.L686-.L680
	.long	.L685-.L680
	.long	.L684-.L680
	.long	.L683-.L680
	.long	.L682-.L680
	.long	.L681-.L680
	.long	.L679-.L680
	.text
.L856:
	testq	%rdx, %rdx
	je	.L858
	movzwl	(%rdx), %eax
	movl	$1, %edx
	leaq	40(,%rax,4), %rcx
	call	calloc
	movq	%rsi, (%rax)
	movq	%rax, %rsi
	movq	%rbx, 24(%rax)
	jmp	.L6
.L59:
	leal	2(%rbx), %eax
	movl	%ebx, %edx
	movq	(%r12,%rax,2), %r9
	leaq	.LC44(%rip), %rcx
	movq	%r9, (%rdi,%r8,4)
	movq	%r9, %xmm3
	call	printf
	movl	32(%rsi), %eax
	leal	6(%rax), %ebx
	jmp	.L44
.L71:
	leal	2(%rbx), %eax
	movswl	(%r12,%rax,2), %r9d
	leaq	.LC33(%rip), %rcx
	movl	%r9d, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L70:
	leal	2(%rbx), %eax
	movzwl	(%r12,%rax,2), %r9d
	leaq	.LC34(%rip), %rcx
	movl	%r9d, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L69:
	leal	2(%rbx), %eax
	movl	(%r12,%rax,2), %r9d
	leaq	.LC35(%rip), %rcx
	movl	%r9d, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L68:
	leal	2(%rbx), %eax
	movl	(%r12,%rax,2), %r9d
	leaq	.LC36(%rip), %rcx
	movl	%r9d, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L67:
	leal	2(%rbx), %eax
	pxor	%xmm4, %xmm4
	movd	(%r12,%rax,2), %xmm0
	leaq	.LC37(%rip), %rcx
	movd	%xmm0, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	cvtss2sd	%xmm0, %xmm4
	movq	%xmm4, %r9
	movapd	%xmm4, %xmm3
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L66:
	leal	2(%rbx), %eax
	movl	%ebx, %edx
	movswq	(%r12,%rax,2), %r9
	leaq	.LC38(%rip), %rcx
	movq	%r9, (%rdi,%r8,4)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L65:
	leal	2(%rbx), %eax
	movl	%ebx, %edx
	movzwl	(%r12,%rax,2), %r9d
	leaq	.LC39(%rip), %rcx
	movq	%r9, (%rdi,%r8,4)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L64:
	leal	2(%rbx), %eax
	movl	%ebx, %edx
	movslq	(%r12,%rax,2), %r9
	leaq	.LC40(%rip), %rcx
	movq	%r9, (%rdi,%r8,4)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L63:
	leal	2(%rbx), %eax
	movl	%ebx, %edx
	movl	(%r12,%rax,2), %r9d
	leaq	.LC41(%rip), %rcx
	movq	%r9, (%rdi,%r8,4)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L62:
	leal	2(%rbx), %eax
	movl	%ebx, %edx
	movq	(%r12,%rax,2), %r9
	leaq	.LC42(%rip), %rcx
	movq	%r9, (%rdi,%r8,4)
	call	printf
	movl	32(%rsi), %eax
	leal	6(%rax), %ebx
	jmp	.L44
.L61:
	leal	2(%rbx), %eax
	movl	%ebx, %edx
	movq	(%r12,%rax,2), %r9
	leaq	.LC43(%rip), %rcx
	movq	%r9, (%rdi,%r8,4)
	call	printf
	movl	32(%rsi), %eax
	leal	6(%rax), %ebx
	jmp	.L44
.L45:
	leaq	.LC20(%rip), %rcx
	movl	%r8d, %eax
	movl	%ebx, %edx
	movq	%r9, (%rdi,%rax,4)
	call	printf
	.p2align 4,,10
	.p2align 3
.L58:
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L57:
	movl	%r8d, %eax
	movzbl	%cl, %r9d
	movb	%cl, (%rdi,%rax,4)
	movl	32(%rsi), %edx
	leaq	.LC9(%rip), %rcx
	call	printf
	jmp	.L58
.L56:
	movl	%r8d, %eax
	movzbl	%cl, %r9d
	movb	%cl, 1(%rdi,%rax,4)
	movl	32(%rsi), %edx
	leaq	.LC10(%rip), %rcx
	call	printf
	jmp	.L58
.L55:
	movl	%r8d, %eax
	movzbl	%cl, %r9d
	movb	%cl, 2(%rdi,%rax,4)
	movl	32(%rsi), %edx
	leaq	.LC11(%rip), %rcx
	call	printf
	jmp	.L58
.L54:
	movl	%r8d, %eax
	movzbl	%cl, %r9d
	movb	%cl, 3(%rdi,%rax,4)
	movl	32(%rsi), %edx
	leaq	.LC12(%rip), %rcx
	call	printf
	jmp	.L58
.L53:
	movsbl	%cl, %r9d
	movl	%r8d, %eax
	movl	%r9d, (%rdi,%rax,4)
	movl	32(%rsi), %edx
	leaq	.LC13(%rip), %rcx
	call	printf
	jmp	.L58
.L52:
	leaq	.LC14(%rip), %rcx
	movl	%r8d, %eax
	movl	%r9d, (%rdi,%rax,4)
	movl	32(%rsi), %edx
	call	printf
	jmp	.L58
.L51:
	movsbw	%cl, %dx
	movl	%r8d, %eax
	movsbl	%cl, %r9d
	movw	%dx, 2(%rdi,%rax,4)
	leaq	.LC15(%rip), %rcx
	movl	%ebx, %edx
	call	printf
	jmp	.L58
.L50:
	leaq	.LC16(%rip), %rcx
	movl	%r8d, %eax
	movl	%ebx, %edx
	movw	%r9w, 2(%rdi,%rax,4)
	movzbl	%r9b, %r9d
	call	printf
	jmp	.L58
.L49:
	movsbw	%cl, %dx
	movl	%r8d, %eax
	movsbl	%cl, %r9d
	movw	%dx, (%rdi,%rax,4)
	leaq	.LC17(%rip), %rcx
	movl	%ebx, %edx
	call	printf
	jmp	.L58
.L48:
	leaq	.LC18(%rip), %rcx
	movl	%r8d, %eax
	movl	%ebx, %edx
	movw	%r9w, (%rdi,%rax,4)
	movzbl	%r9b, %r9d
	call	printf
	jmp	.L58
.L47:
	movsbq	%cl, %r9
	movl	%r8d, %eax
	movl	%ebx, %edx
	movq	%r9, (%rdi,%rax,4)
	leaq	.LC19(%rip), %rcx
	call	printf
	jmp	.L58
.L857:
	movq	(%rsi), %rbx
	movq	%rsi, %rcx
	call	free
	movq	%rbx, %rsi
	jmp	.L831
	.p2align 4,,10
	.p2align 3
.L43:
	leaq	.LC3(%rip), %rcx
	movl	%ebx, %edx
	call	printf
	movl	32(%rsi), %edx
	leaq	.LC4(%rip), %rcx
	call	printf
	movl	$-1, %ecx
	call	exit
.L191:
	movsbl	1(%rdi,%r9,4), %eax
	leaq	.LC109(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L192:
	movzbl	(%rdi,%r9,4), %eax
	leaq	.LC108(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L193:
	movsbl	(%rdi,%r9,4), %eax
	leaq	.LC107(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L139:
	movsd	.LC105(%rip), %xmm1
	movsd	(%rdi,%r9,4), %xmm0
	comisd	%xmm1, %xmm0
	jnb	.L204
	cvttsd2siq	%xmm0, %rax
.L205:
	movq	%rax, (%rdi,%rdx,4)
	leaq	.LC160(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L208:
	movss	.LC201(%rip), %xmm0
	movl	%r9d, 80(%rsp)
	divss	(%rdi,%rcx,4), %xmm0
	movl	%r8d, 72(%rsp)
	call	atanf
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC215(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L210:
	movss	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	atanf
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC213(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L211:
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	cos
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC212(%rip), %rcx
	movsd	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L209:
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	atan
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC214(%rip), %rcx
	movsd	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L212:
	movss	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	acosf
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC211(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L213:
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	asin
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC210(%rip), %rcx
	movsd	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L214:
	movss	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	asinf
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC209(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L215:
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	sin
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC208(%rip), %rcx
	movapd	%xmm0, %xmm1
	movsd	.LC203(%rip), %xmm0
	divsd	%xmm1, %xmm0
	movq	%rax, %r8
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L216:
	movss	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	sinf
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC207(%rip), %rcx
	movaps	%xmm0, %xmm1
	movss	.LC201(%rip), %xmm0
	divss	%xmm1, %xmm0
	movq	%rax, %r8
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L217:
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	cos
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC206(%rip), %rcx
	movapd	%xmm0, %xmm1
	movsd	.LC203(%rip), %xmm0
	divsd	%xmm1, %xmm0
	movq	%rax, %r8
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L218:
	movss	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	cosf
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC205(%rip), %rcx
	movaps	%xmm0, %xmm1
	movss	.LC201(%rip), %xmm0
	divss	%xmm1, %xmm0
	movq	%rax, %r8
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L219:
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	tan
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC204(%rip), %rcx
	movapd	%xmm0, %xmm1
	movsd	.LC203(%rip), %xmm0
	divsd	%xmm1, %xmm0
	movq	%rax, %r8
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L220:
	movss	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	tanf
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC202(%rip), %rcx
	movaps	%xmm0, %xmm1
	movss	.LC201(%rip), %xmm0
	divss	%xmm1, %xmm0
	movq	%rax, %r8
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L221:
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	tan
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC200(%rip), %rcx
	movsd	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L222:
	movss	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	tanf
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC199(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L223:
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	cos
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC198(%rip), %rcx
	movsd	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L224:
	movss	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	cosf
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC197(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L225:
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	sin
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC196(%rip), %rcx
	movsd	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L226:
	movss	(%rdi,%rcx,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	sinf
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC195(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L227:
	movsd	(%rdi,%rcx,4), %xmm1
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	movl	%r8d, %edx
	leaq	.LC194(%rip), %rcx
	comisd	%xmm0, %xmm1
	setnb	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L228:
	movsd	(%rdi,%rcx,4), %xmm1
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	movl	%r8d, %edx
	leaq	.LC193(%rip), %rcx
	comisd	%xmm0, %xmm1
	seta	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L229:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	ucomisd	(%rdi,%rcx,4), %xmm0
	movl	$1, %edx
	leaq	.LC192(%rip), %rcx
	setp	%al
	cmovne	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L230:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	ucomisd	(%rdi,%rcx,4), %xmm0
	movl	$0, %edx
	leaq	.LC191(%rip), %rcx
	setnp	%al
	cmovne	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L231:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	comisd	(%rdi,%rcx,4), %xmm0
	movl	%r8d, %edx
	leaq	.LC190(%rip), %rcx
	setnb	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L232:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	comisd	(%rdi,%rcx,4), %xmm0
	movl	%r8d, %edx
	leaq	.LC190(%rip), %rcx
	seta	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L233:
	movss	(%rdi,%rcx,4), %xmm1
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	movl	%r8d, %edx
	leaq	.LC188(%rip), %rcx
	comiss	%xmm0, %xmm1
	setnb	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L234:
	movss	(%rdi,%rcx,4), %xmm1
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	movl	%r8d, %edx
	leaq	.LC187(%rip), %rcx
	comiss	%xmm0, %xmm1
	seta	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L235:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	ucomiss	(%rdi,%rcx,4), %xmm0
	movl	$1, %edx
	leaq	.LC186(%rip), %rcx
	setp	%al
	cmovne	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L236:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	ucomiss	(%rdi,%rcx,4), %xmm0
	movl	$0, %edx
	leaq	.LC185(%rip), %rcx
	setnp	%al
	cmovne	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L237:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	comiss	(%rdi,%rcx,4), %xmm0
	movl	%r8d, %edx
	leaq	.LC184(%rip), %rcx
	setnb	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L238:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	comiss	(%rdi,%rcx,4), %xmm0
	movl	%r8d, %edx
	leaq	.LC184(%rip), %rcx
	seta	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L239:
	movq	(%rdi,%rcx,4), %rax
	leaq	.LC182(%rip), %rcx
	movl	%r8d, %edx
	notq	%rax
	shrq	$63, %rax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L240:
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%rcx,4)
	movl	%r8d, %edx
	leaq	.LC181(%rip), %rcx
	setg	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L241:
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%rcx,4)
	movl	%r8d, %edx
	leaq	.LC180(%rip), %rcx
	setne	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L242:
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%rcx,4)
	movl	%r8d, %edx
	leaq	.LC179(%rip), %rcx
	sete	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L243:
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%rcx,4)
	movl	%r8d, %edx
	leaq	.LC178(%rip), %rcx
	setle	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L244:
	movq	(%rdi,%rcx,4), %rax
	leaq	.LC178(%rip), %rcx
	movl	%r8d, %edx
	shrq	$63, %rax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L245:
	movl	(%rdi,%rcx,4), %eax
	leaq	.LC177(%rip), %rcx
	movl	%r8d, %edx
	notl	%eax
	shrl	$31, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L246:
	movl	(%rdi,%rcx,4), %r10d
	leaq	.LC176(%rip), %rcx
	xorl	%eax, %eax
	movl	%r8d, %edx
	testl	%r10d, %r10d
	setg	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L247:
	movl	(%rdi,%rcx,4), %r11d
	leaq	.LC175(%rip), %rcx
	xorl	%eax, %eax
	movl	%r8d, %edx
	testl	%r11d, %r11d
	setne	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L248:
	movl	(%rdi,%rcx,4), %ebx
	leaq	.LC174(%rip), %rcx
	xorl	%eax, %eax
	movl	%r8d, %edx
	testl	%ebx, %ebx
	sete	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L249:
	movl	(%rdi,%rcx,4), %r15d
	leaq	.LC173(%rip), %rcx
	xorl	%eax, %eax
	movl	%r8d, %edx
	testl	%r15d, %r15d
	setle	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L250:
	movl	(%rdi,%rcx,4), %eax
	leaq	.LC173(%rip), %rcx
	movl	%r8d, %edx
	shrl	$31, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L251:
	movabsq	$9223372036854775807, %rax
	andq	(%rdi,%rcx,4), %rax
	movl	%r8d, %edx
	leaq	.LC172(%rip), %rcx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L252:
	movl	(%rdi,%rcx,4), %eax
	movl	%r8d, %edx
	pxor	%xmm0, %xmm0
	leaq	.LC171(%rip), %rcx
	andl	$2147483647, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movd	%eax, %xmm5
	cvtss2sd	%xmm5, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L253:
	movq	(%rdi,%rcx,4), %rax
	leaq	.LC170(%rip), %rcx
	cqto
	xorq	%rdx, %rax
	subq	%rdx, %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L254:
	movl	(%rdi,%rcx,4), %eax
	leaq	.LC169(%rip), %rcx
	cltd
	xorl	%edx, %eax
	subl	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L255:
	movl	%r8d, %eax
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%ebx, %edx
	xorpd	.LC167(%rip), %xmm0
	leaq	.LC168(%rip), %rcx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L256:
	movl	%r8d, %eax
	movss	(%rdi,%rcx,4), %xmm0
	movl	%ebx, %edx
	xorps	.LC165(%rip), %xmm0
	leaq	.LC166(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L257:
	movq	(%rdi,%rcx,4), %rax
	leaq	.LC164(%rip), %rcx
	movl	%r8d, %edx
	negq	%rax
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L258:
	movl	(%rdi,%rcx,4), %eax
	leaq	.LC163(%rip), %rcx
	movl	%r8d, %edx
	negl	%eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L259:
	movq	(%rdi,%rcx,4), %rax
	leaq	.LC162(%rip), %rcx
	movl	%r8d, %edx
	notq	%rax
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L260:
	movl	(%rdi,%rcx,4), %eax
	leaq	.LC161(%rip), %rcx
	movl	%r8d, %edx
	notl	%eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L206:
	movsd	.LC203(%rip), %xmm0
	movl	%r9d, 80(%rsp)
	divsd	(%rdi,%rcx,4), %xmm0
	movl	%r8d, 72(%rsp)
	call	atan
	movl	72(%rsp), %eax
	movl	%ebx, %edx
	movl	80(%rsp), %r9d
	leaq	.LC216(%rip), %rcx
	movsd	%xmm0, (%rdi,%rax,4)
	movq	%rax, %r8
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L263:
	movss	.LC201(%rip), %xmm0
	movl	%r9d, 80(%rsp)
	divss	(%rdi,%r9,4), %xmm0
	movl	%r8d, 72(%rsp)
	call	atanf
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movss	%xmm0, (%rdi,%r15,4)
	leaq	.LC265(%rip), %rcx
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L264:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	atan
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movsd	%xmm0, (%rdi,%r15,4)
	leaq	.LC264(%rip), %rcx
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L265:
	movss	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	atanf
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movss	%xmm0, (%rdi,%r15,4)
	leaq	.LC263(%rip), %rcx
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L266:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	cos
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movsd	%xmm0, (%rdi,%r15,4)
	leaq	.LC262(%rip), %rcx
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L267:
	movss	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	acosf
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movss	%xmm0, (%rdi,%r15,4)
	leaq	.LC261(%rip), %rcx
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L268:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	asin
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movsd	%xmm0, (%rdi,%r15,4)
	leaq	.LC260(%rip), %rcx
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L269:
	movss	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	asinf
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movss	%xmm0, (%rdi,%r15,4)
	leaq	.LC259(%rip), %rcx
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L270:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	sin
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	leaq	.LC258(%rip), %rcx
	movapd	%xmm0, %xmm1
	movsd	.LC203(%rip), %xmm0
	divsd	%xmm1, %xmm0
	movsd	%xmm0, (%rdi,%r15,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L271:
	movss	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	sinf
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	leaq	.LC257(%rip), %rcx
	movaps	%xmm0, %xmm1
	movss	.LC201(%rip), %xmm0
	divss	%xmm1, %xmm0
	movss	%xmm0, (%rdi,%r15,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L272:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	cos
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	leaq	.LC256(%rip), %rcx
	movapd	%xmm0, %xmm1
	movsd	.LC203(%rip), %xmm0
	divsd	%xmm1, %xmm0
	movsd	%xmm0, (%rdi,%r15,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L273:
	movss	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	cosf
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	leaq	.LC255(%rip), %rcx
	movaps	%xmm0, %xmm1
	movss	.LC201(%rip), %xmm0
	divss	%xmm1, %xmm0
	movss	%xmm0, (%rdi,%r15,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L274:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	tan
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	leaq	.LC254(%rip), %rcx
	movapd	%xmm0, %xmm1
	movsd	.LC203(%rip), %xmm0
	divsd	%xmm1, %xmm0
	movsd	%xmm0, (%rdi,%r15,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L275:
	movss	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	tanf
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	leaq	.LC253(%rip), %rcx
	movaps	%xmm0, %xmm1
	movss	.LC201(%rip), %xmm0
	divss	%xmm1, %xmm0
	movss	%xmm0, (%rdi,%r15,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L276:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	tan
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movsd	%xmm0, (%rdi,%r15,4)
	leaq	.LC252(%rip), %rcx
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L277:
	movss	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	tanf
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movss	%xmm0, (%rdi,%r15,4)
	leaq	.LC251(%rip), %rcx
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L278:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	cos
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movsd	%xmm0, (%rdi,%r15,4)
	leaq	.LC250(%rip), %rcx
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L279:
	movss	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	cosf
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movss	%xmm0, (%rdi,%r15,4)
	leaq	.LC249(%rip), %rcx
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L280:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	sin
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movsd	%xmm0, (%rdi,%r15,4)
	leaq	.LC248(%rip), %rcx
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L281:
	movss	(%rdi,%r9,4), %xmm0
	movl	%r9d, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	sinf
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movss	%xmm0, (%rdi,%r15,4)
	leaq	.LC247(%rip), %rcx
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L282:
	movsd	(%rdi,%r9,4), %xmm1
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	leaq	.LC246(%rip), %rcx
	comisd	%xmm0, %xmm1
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L283:
	movsd	(%rdi,%r9,4), %xmm1
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	leaq	.LC245(%rip), %rcx
	comisd	%xmm0, %xmm1
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L284:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	movl	$1, %edx
	ucomisd	(%rdi,%r9,4), %xmm0
	leaq	.LC244(%rip), %rcx
	setp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L285:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	movl	$0, %edx
	ucomisd	(%rdi,%r9,4), %xmm0
	leaq	.LC243(%rip), %rcx
	setnp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L286:
	pxor	%xmm0, %xmm0
	leaq	.LC242(%rip), %rcx
	xorl	%eax, %eax
	comisd	(%rdi,%r9,4), %xmm0
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L287:
	pxor	%xmm0, %xmm0
	leaq	.LC242(%rip), %rcx
	xorl	%eax, %eax
	comisd	(%rdi,%r9,4), %xmm0
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L288:
	movss	(%rdi,%r9,4), %xmm1
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	leaq	.LC241(%rip), %rcx
	comiss	%xmm0, %xmm1
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L289:
	movss	(%rdi,%r9,4), %xmm1
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	leaq	.LC240(%rip), %rcx
	comiss	%xmm0, %xmm1
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L290:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	ucomiss	(%rdi,%r9,4), %xmm0
	movl	$1, %edx
	leaq	.LC239(%rip), %rcx
	setp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L291:
	xorl	%eax, %eax
	pxor	%xmm0, %xmm0
	ucomiss	(%rdi,%r9,4), %xmm0
	movl	$0, %edx
	leaq	.LC238(%rip), %rcx
	setnp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L292:
	pxor	%xmm0, %xmm0
	leaq	.LC237(%rip), %rcx
	xorl	%eax, %eax
	comiss	(%rdi,%r9,4), %xmm0
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L293:
	pxor	%xmm0, %xmm0
	leaq	.LC237(%rip), %rcx
	xorl	%eax, %eax
	comiss	(%rdi,%r9,4), %xmm0
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L294:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC236(%rip), %rcx
	notq	%rax
	shrq	$63, %rax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L295:
	leaq	.LC235(%rip), %rcx
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%r9,4)
	setg	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L296:
	leaq	.LC234(%rip), %rcx
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%r9,4)
	setne	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L297:
	leaq	.LC233(%rip), %rcx
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%r9,4)
	sete	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L298:
	leaq	.LC232(%rip), %rcx
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%r9,4)
	setle	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L299:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC232(%rip), %rcx
	shrq	$63, %rax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L300:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC231(%rip), %rcx
	notl	%eax
	shrl	$31, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L301:
	movl	(%rdi,%r9,4), %r11d
	leaq	.LC230(%rip), %rcx
	xorl	%eax, %eax
	testl	%r11d, %r11d
	setg	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L302:
	movl	(%rdi,%r9,4), %ebx
	leaq	.LC229(%rip), %rcx
	xorl	%eax, %eax
	testl	%ebx, %ebx
	setne	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L303:
	movl	(%rdi,%r9,4), %edx
	leaq	.LC228(%rip), %rcx
	xorl	%eax, %eax
	testl	%edx, %edx
	sete	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L304:
	movl	(%rdi,%r9,4), %ecx
	xorl	%eax, %eax
	testl	%ecx, %ecx
	leaq	.LC227(%rip), %rcx
	setle	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L305:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC227(%rip), %rcx
	shrl	$31, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L306:
	movabsq	$9223372036854775807, %rax
	andq	(%rdi,%r9,4), %rax
	movl	%ebx, %edx
	leaq	.LC226(%rip), %rcx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L307:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC225(%rip), %rcx
	pxor	%xmm0, %xmm0
	andl	$2147483647, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movd	%eax, %xmm5
	cvtss2sd	%xmm5, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L308:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC224(%rip), %rcx
	cqto
	xorq	%rdx, %rax
	subq	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L309:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC223(%rip), %rcx
	cltd
	xorl	%edx, %eax
	subl	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L310:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%ebx, %edx
	xorpd	.LC167(%rip), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	leaq	.LC222(%rip), %rcx
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L311:
	movss	(%rdi,%r9,4), %xmm0
	movl	%ebx, %edx
	xorps	.LC165(%rip), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	leaq	.LC221(%rip), %rcx
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L312:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC220(%rip), %rcx
	movl	%ebx, %edx
	negq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L313:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC219(%rip), %rcx
	negl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L314:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC218(%rip), %rcx
	movl	%ebx, %edx
	notq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L315:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC217(%rip), %rcx
	notl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L261:
	movsd	.LC203(%rip), %xmm0
	movl	%r9d, 80(%rsp)
	divsd	(%rdi,%r9,4), %xmm0
	movl	%r8d, 72(%rsp)
	call	atan
	movl	80(%rsp), %r9d
	movl	%ebx, %edx
	movl	72(%rsp), %r8d
	movsd	%xmm0, (%rdi,%r15,4)
	leaq	.LC216(%rip), %rcx
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L114:
	movl	(%rdi,%rcx,4), %eax
	leaq	.LC63(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L115:
	movzwl	(%rdi,%rcx,4), %eax
	leaq	.LC62(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L116:
	movswl	(%rdi,%rcx,4), %eax
	leaq	.LC61(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L117:
	movzwl	2(%rdi,%rcx,4), %eax
	leaq	.LC60(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L118:
	movswl	2(%rdi,%rcx,4), %eax
	leaq	.LC59(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L119:
	movzbl	3(%rdi,%rcx,4), %eax
	leaq	.LC58(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L120:
	movsbl	3(%rdi,%rcx,4), %eax
	leaq	.LC57(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L121:
	movzbl	2(%rdi,%rcx,4), %eax
	leaq	.LC56(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L122:
	movsbl	2(%rdi,%rcx,4), %eax
	leaq	.LC55(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L123:
	movzbl	1(%rdi,%rcx,4), %eax
	leaq	.LC54(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L124:
	movsbl	1(%rdi,%rcx,4), %eax
	leaq	.LC53(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L125:
	movzbl	(%rdi,%rcx,4), %eax
	leaq	.LC52(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L126:
	movsbl	(%rdi,%rcx,4), %eax
	leaq	.LC51(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L72:
	movsd	.LC105(%rip), %xmm1
	movsd	(%rdi,%rcx,4), %xmm0
	comisd	%xmm1, %xmm0
	jnb	.L137
	cvttsd2siq	%xmm0, %rax
.L138:
	leaq	.LC106(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L141:
	cvttsd2siq	(%rdi,%r9,4), %rax
	leaq	.LC159(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L142:
	cvttsd2siq	(%rdi,%r9,4), %rax
	leaq	.LC158(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L143:
	cvttsd2sil	(%rdi,%r9,4), %eax
	leaq	.LC157(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L144:
	movss	(%rdi,%r9,4), %xmm0
	comiss	.LC100(%rip), %xmm0
	jnb	.L202
	cvttss2siq	%xmm0, %rax
.L203:
	movq	%rax, (%rdi,%rdx,4)
	leaq	.LC156(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L145:
	cvttss2siq	(%rdi,%r9,4), %rax
	leaq	.LC155(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L146:
	cvttss2siq	(%rdi,%r9,4), %rax
	leaq	.LC154(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L147:
	cvttss2sil	(%rdi,%r9,4), %eax
	leaq	.LC153(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L148:
	movq	(%rdi,%r9,4), %rax
	testq	%rax, %rax
	js	.L200
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
.L201:
	movsd	%xmm0, (%rdi,%rdx,4)
	leaq	.LC152(%rip), %rcx
	movl	%ebx, %edx
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L149:
	pxor	%xmm0, %xmm0
	cvtsi2sdq	(%rdi,%r9,4), %xmm0
	movl	%ebx, %edx
	leaq	.LC151(%rip), %rcx
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L150:
	movq	(%rdi,%r9,4), %rax
	testq	%rax, %rax
	js	.L198
	pxor	%xmm0, %xmm0
	cvtsi2ssq	%rax, %xmm0
.L199:
	movss	%xmm0, (%rdi,%rdx,4)
	leaq	.LC150(%rip), %rcx
	movl	%ebx, %edx
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L151:
	pxor	%xmm0, %xmm0
	cvtsi2ssq	(%rdi,%r9,4), %xmm0
	movl	%ebx, %edx
	leaq	.LC149(%rip), %rcx
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L159:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC141(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L160:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC140(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L161:
	movslq	(%rdi,%r9,4), %rax
	leaq	.LC139(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L162:
	movq	(%rdi,%r9,4), %rax
	leaq	(%rdi,%r8,4), %rdx
	leaq	.LC138(%rip), %rcx
	movq	%rax, (%rdx)
	movsd	(%rdx), %xmm0
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movsd	%xmm0, 48(%rsp)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L163:
	movsd	(%rdi,%r9,4), %xmm0
	leaq	.LC137(%rip), %rcx
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L164:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC136(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L165:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC135(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L166:
	movzwl	(%rdi,%r9,4), %eax
	leaq	.LC134(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L155:
	pxor	%xmm0, %xmm0
	cvtsi2ssl	(%rdi,%r9,4), %xmm0
	movl	%ebx, %edx
	leaq	.LC145(%rip), %rcx
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L156:
	leaq	.LC144(%rip), %rcx
	movl	%ebx, %edx
	pxor	%xmm0, %xmm0
	cvtsd2ss	(%rdi,%r9,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L157:
	leaq	.LC143(%rip), %rcx
	movl	%ebx, %edx
	pxor	%xmm0, %xmm0
	cvtss2sd	(%rdi,%r9,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L158:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC142(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L153:
	pxor	%xmm0, %xmm0
	cvtsi2sdl	(%rdi,%r9,4), %xmm0
	movl	%ebx, %edx
	leaq	.LC147(%rip), %rcx
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L154:
	movl	(%rdi,%r9,4), %eax
	pxor	%xmm0, %xmm0
	movl	%ebx, %edx
	leaq	.LC146(%rip), %rcx
	cvtsi2ssq	%rax, %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L152:
	movl	(%rdi,%r9,4), %eax
	pxor	%xmm0, %xmm0
	movl	%ebx, %edx
	leaq	.LC148(%rip), %rcx
	cvtsi2sdq	%rax, %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L167:
	movswq	(%rdi,%r9,4), %rax
	leaq	.LC133(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L168:
	movzwl	2(%rdi,%r9,4), %eax
	leaq	.LC132(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L169:
	movswq	2(%rdi,%r9,4), %rax
	leaq	.LC131(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L170:
	movzbl	3(%rdi,%r9,4), %eax
	leaq	.LC130(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L171:
	movsbq	3(%rdi,%r9,4), %rax
	leaq	.LC129(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L172:
	movzbl	2(%rdi,%r9,4), %eax
	leaq	.LC128(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L173:
	movsbq	2(%rdi,%r9,4), %rax
	leaq	.LC127(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L174:
	movzbl	1(%rdi,%r9,4), %eax
	leaq	.LC126(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L175:
	movsbq	1(%rdi,%r9,4), %rax
	leaq	.LC125(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L176:
	movzbl	(%rdi,%r9,4), %eax
	leaq	.LC124(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L177:
	movsbq	(%rdi,%r9,4), %rax
	leaq	.LC123(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L178:
	movl	(%rdi,%r9,4), %eax
	leaq	(%rdi,%r8,4), %rdx
	pxor	%xmm0, %xmm0
	movl	%eax, (%rdx)
	movl	32(%rsi), %ecx
	cvtss2sd	(%rdx), %xmm0
	movl	%eax, 40(%rsp)
	movsd	%xmm0, 48(%rsp)
	movl	%eax, 32(%rsp)
	movl	%ecx, %edx
	leaq	.LC122(%rip), %rcx
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L179:
	movl	(%rdi,%r9,4), %edx
	leaq	(%rdi,%r8,4), %rax
	pxor	%xmm0, %xmm0
	leaq	.LC121(%rip), %rcx
	movl	%edx, (%rax)
	movl	32(%rsi), %edx
	cvtss2sd	(%rax), %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L180:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC120(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L181:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC119(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L182:
	movzwl	(%rdi,%r9,4), %eax
	leaq	.LC118(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L183:
	movswl	(%rdi,%r9,4), %eax
	leaq	.LC117(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L184:
	movzwl	2(%rdi,%r9,4), %eax
	leaq	.LC116(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L185:
	movswl	2(%rdi,%r9,4), %eax
	leaq	.LC115(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L186:
	movzbl	3(%rdi,%r9,4), %eax
	leaq	.LC114(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L187:
	movsbl	3(%rdi,%r9,4), %eax
	leaq	.LC113(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L188:
	movzbl	2(%rdi,%r9,4), %eax
	leaq	.LC112(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L189:
	movsbl	2(%rdi,%r9,4), %eax
	leaq	.LC111(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L190:
	movzbl	1(%rdi,%r9,4), %eax
	leaq	.LC110(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L82:
	pxor	%xmm0, %xmm0
	cvtsi2sdq	(%rdi,%rcx,4), %xmm0
	movl	%r8d, %eax
	leaq	.LC95(%rip), %rcx
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L83:
	movq	(%rdi,%rcx,4), %rax
	testq	%rax, %rax
	js	.L131
	pxor	%xmm0, %xmm0
	cvtsi2ssq	%rax, %xmm0
.L132:
	leaq	.LC94(%rip), %rcx
	movl	%r8d, %eax
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L84:
	pxor	%xmm0, %xmm0
	cvtsi2ssq	(%rdi,%rcx,4), %xmm0
	movl	%r8d, %eax
	movl	%ebx, %edx
	leaq	.LC93(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L85:
	movl	(%rdi,%rcx,4), %eax
	pxor	%xmm0, %xmm0
	leaq	.LC92(%rip), %rcx
	movl	%ebx, %edx
	cvtsi2sdq	%rax, %xmm0
	movl	%r8d, %eax
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L86:
	pxor	%xmm0, %xmm0
	cvtsi2sdl	(%rdi,%rcx,4), %xmm0
	movl	%r8d, %eax
	leaq	.LC91(%rip), %rcx
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L87:
	movl	(%rdi,%rcx,4), %eax
	pxor	%xmm0, %xmm0
	leaq	.LC90(%rip), %rcx
	movl	%ebx, %edx
	cvtsi2ssq	%rax, %xmm0
	movl	%r8d, %eax
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L88:
	pxor	%xmm0, %xmm0
	cvtsi2ssl	(%rdi,%rcx,4), %xmm0
	movl	%r8d, %eax
	movl	%ebx, %edx
	leaq	.LC89(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L89:
	movl	%r8d, %eax
	movl	%ebx, %edx
	pxor	%xmm0, %xmm0
	cvtsd2ss	(%rdi,%rcx,4), %xmm0
	leaq	.LC88(%rip), %rcx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L90:
	movl	%r8d, %eax
	movl	%ebx, %edx
	pxor	%xmm0, %xmm0
	cvtss2sd	(%rdi,%rcx,4), %xmm0
	leaq	.LC87(%rip), %rcx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L91:
	movq	(%rdi,%rcx,4), %rax
	leaq	.LC86(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L92:
	movq	(%rdi,%rcx,4), %rax
	leaq	.LC85(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L93:
	movl	(%rdi,%rcx,4), %eax
	leaq	.LC84(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L94:
	movslq	(%rdi,%rcx,4), %rax
	leaq	.LC83(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L95:
	movl	%r8d, %eax
	leaq	(%rdi,%rax,4), %rdx
	movq	(%rdi,%rcx,4), %rax
	leaq	.LC82(%rip), %rcx
	movq	%rax, (%rdx)
	movsd	(%rdx), %xmm0
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movsd	%xmm0, 48(%rsp)
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L96:
	movsd	(%rdi,%rcx,4), %xmm0
	movl	%r8d, %eax
	movl	%ebx, %edx
	leaq	.LC81(%rip), %rcx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L97:
	movq	(%rdi,%rcx,4), %rax
	leaq	.LC80(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L98:
	movq	(%rdi,%rcx,4), %rax
	leaq	.LC79(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L99:
	movzwl	(%rdi,%rcx,4), %eax
	leaq	.LC78(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L100:
	movswq	(%rdi,%rcx,4), %rax
	leaq	.LC77(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L101:
	movzwl	2(%rdi,%rcx,4), %eax
	leaq	.LC76(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L102:
	movswq	2(%rdi,%rcx,4), %rax
	leaq	.LC75(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L103:
	movzbl	3(%rdi,%rcx,4), %eax
	leaq	.LC74(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L104:
	movsbq	3(%rdi,%rcx,4), %rax
	leaq	.LC73(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L105:
	movzbl	2(%rdi,%rcx,4), %eax
	leaq	.LC72(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L106:
	movsbq	2(%rdi,%rcx,4), %rax
	leaq	.LC71(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L107:
	movzbl	1(%rdi,%rcx,4), %eax
	leaq	.LC70(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L108:
	movsbq	1(%rdi,%rcx,4), %rax
	leaq	.LC69(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L109:
	movzbl	(%rdi,%rcx,4), %eax
	leaq	.LC68(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L110:
	movsbq	(%rdi,%rcx,4), %rax
	leaq	.LC67(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L111:
	movl	%r8d, %eax
	pxor	%xmm0, %xmm0
	leaq	(%rdi,%rax,4), %rdx
	movl	(%rdi,%rcx,4), %eax
	movl	%eax, (%rdx)
	movl	32(%rsi), %ecx
	cvtss2sd	(%rdx), %xmm0
	movl	%eax, 40(%rsp)
	movsd	%xmm0, 48(%rsp)
	movl	%eax, 32(%rsp)
	movl	%ecx, %edx
	leaq	.LC66(%rip), %rcx
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L112:
	movl	(%rdi,%rcx,4), %edx
	movl	%r8d, %eax
	pxor	%xmm0, %xmm0
	leaq	(%rdi,%rax,4), %rax
	leaq	.LC65(%rip), %rcx
	movl	%edx, (%rax)
	movl	32(%rsi), %edx
	cvtss2sd	(%rax), %xmm0
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L113:
	movl	(%rdi,%rcx,4), %eax
	leaq	.LC64(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L74:
	cvttsd2siq	(%rdi,%rcx,4), %rax
	leaq	.LC104(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L75:
	cvttsd2siq	(%rdi,%rcx,4), %rax
	leaq	.LC103(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L76:
	cvttsd2sil	(%rdi,%rcx,4), %eax
	leaq	.LC102(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L77:
	movss	(%rdi,%rcx,4), %xmm0
	comiss	.LC100(%rip), %xmm0
	jnb	.L135
	cvttss2siq	%xmm0, %rax
.L136:
	leaq	.LC101(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L78:
	cvttss2siq	(%rdi,%rcx,4), %rax
	leaq	.LC99(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L80:
	cvttss2sil	(%rdi,%rcx,4), %eax
	leaq	.LC97(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L81:
	movq	(%rdi,%rcx,4), %rax
	testq	%rax, %rax
	js	.L133
	pxor	%xmm0, %xmm0
	cvtsi2sdq	%rax, %xmm0
.L134:
	leaq	.LC96(%rip), %rcx
	movl	%r8d, %eax
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L79:
	cvttss2siq	(%rdi,%rcx,4), %rax
	leaq	.LC98(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L318:
	leaq	.LC368(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	minss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L319:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rax
	movq	(%rdi,%rcx,4), %rdx
	leaq	.LC367(%rip), %rcx
	cmpq	%rdx, %rax
	cmova	%rdx, %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L320:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rax
	movq	(%rdi,%rcx,4), %rdx
	leaq	.LC366(%rip), %rcx
	cmpq	%rdx, %rax
	cmovg	%rdx, %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L321:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %eax
	movl	(%rdi,%rcx,4), %edx
	leaq	.LC365(%rip), %rcx
	cmpl	%edx, %eax
	cmova	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L322:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %eax
	movl	(%rdi,%rcx,4), %edx
	leaq	.LC364(%rip), %rcx
	cmpl	%edx, %eax
	cmovg	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L323:
	leaq	.LC363(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	maxsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L324:
	leaq	.LC362(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	maxss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L325:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rax
	movq	(%rdi,%rcx,4), %rdx
	leaq	.LC361(%rip), %rcx
	cmpq	%rdx, %rax
	cmovb	%rdx, %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L326:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rax
	movq	(%rdi,%rcx,4), %rdx
	leaq	.LC360(%rip), %rcx
	cmpq	%rdx, %rax
	cmovl	%rdx, %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L327:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %eax
	movl	(%rdi,%rcx,4), %edx
	leaq	.LC359(%rip), %rcx
	cmpl	%edx, %eax
	cmovb	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L328:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %eax
	movl	(%rdi,%rcx,4), %edx
	leaq	.LC358(%rip), %rcx
	cmpl	%edx, %eax
	cmovl	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L329:
	leaq	.LC357(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comisd	(%rdi,%rdx,4), %xmm0
	movl	%r8d, %edx
	setnb	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L330:
	leaq	.LC356(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comisd	(%rdi,%rdx,4), %xmm0
	movl	%r8d, %edx
	seta	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L331:
	leaq	.LC355(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomisd	(%rdi,%rdx,4), %xmm0
	movl	$1, %edx
	setp	%al
	cmovne	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L332:
	leaq	.LC354(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomisd	(%rdi,%rdx,4), %xmm0
	movl	$0, %edx
	setnp	%al
	cmovne	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L333:
	leaq	.LC353(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rdx,4), %xmm0
	movl	%r8d, %edx
	comisd	(%rdi,%rax,4), %xmm0
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L334:
	leaq	.LC352(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rdx,4), %xmm0
	movl	%r8d, %edx
	comisd	(%rdi,%rax,4), %xmm0
	seta	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L335:
	leaq	.LC351(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comiss	(%rdi,%rdx,4), %xmm0
	movl	%r8d, %edx
	setnb	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L336:
	leaq	.LC350(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comiss	(%rdi,%rdx,4), %xmm0
	movl	%r8d, %edx
	seta	%al
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L337:
	leaq	.LC349(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomiss	(%rdi,%rdx,4), %xmm0
	movl	$1, %edx
	setp	%al
	cmovne	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L338:
	leaq	.LC348(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomiss	(%rdi,%rdx,4), %xmm0
	movl	$0, %edx
	setnp	%al
	cmovne	%edx, %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L339:
	leaq	.LC347(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rdx,4), %xmm0
	movl	%r8d, %edx
	comiss	(%rdi,%rax,4), %xmm0
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L340:
	leaq	.LC346(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rdx,4), %xmm0
	movl	%r8d, %edx
	comiss	(%rdi,%rax,4), %xmm0
	seta	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L341:
	leaq	.LC345(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rbx
	movl	%r8d, %edx
	cmpq	%rbx, (%rdi,%rax,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L342:
	leaq	.LC344(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	cmpq	%rax, (%rdi,%rdx,4)
	movl	%r8d, %edx
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L343:
	leaq	.LC343(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rbx
	movl	%r8d, %edx
	cmpq	%rbx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L344:
	leaq	.LC342(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rbx
	movl	%r8d, %edx
	cmpq	%rbx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L345:
	leaq	.LC341(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	cmpq	%rax, (%rdi,%rdx,4)
	movl	%r8d, %edx
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L346:
	leaq	.LC340(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rbx
	movl	%r8d, %edx
	cmpq	%rbx, (%rdi,%rax,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L347:
	leaq	.LC339(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rbx
	movl	%r8d, %edx
	cmpq	%rbx, (%rdi,%rax,4)
	setge	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L348:
	leaq	.LC338(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rbx
	movl	%r8d, %edx
	cmpq	%rbx, (%rdi,%rax,4)
	setg	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L349:
	leaq	.LC337(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rbx
	movl	%r8d, %edx
	cmpq	%rbx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L350:
	leaq	.LC336(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rbx
	movl	%r8d, %edx
	cmpq	%rbx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L351:
	leaq	.LC335(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rbx
	movl	%r8d, %edx
	cmpq	%rbx, (%rdi,%rax,4)
	setle	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L352:
	leaq	.LC334(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rbx
	movl	%r8d, %edx
	cmpq	%rbx, (%rdi,%rax,4)
	setl	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L353:
	leaq	.LC333(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ebx
	movl	%r8d, %edx
	cmpl	%ebx, (%rdi,%rax,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L354:
	leaq	.LC332(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	cmpl	%eax, (%rdi,%rdx,4)
	movl	%r8d, %edx
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L355:
	leaq	.LC331(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ebx
	movl	%r8d, %edx
	cmpl	%ebx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L356:
	leaq	.LC330(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ebx
	movl	%r8d, %edx
	cmpl	%ebx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L357:
	leaq	.LC329(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	cmpl	%eax, (%rdi,%rdx,4)
	movl	%r8d, %edx
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L358:
	leaq	.LC328(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ebx
	movl	%r8d, %edx
	cmpl	%ebx, (%rdi,%rax,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L359:
	leaq	.LC327(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ebx
	movl	%r8d, %edx
	cmpl	%ebx, (%rdi,%rax,4)
	setge	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L360:
	leaq	.LC326(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ebx
	movl	%r8d, %edx
	cmpl	%ebx, (%rdi,%rax,4)
	setg	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L361:
	leaq	.LC325(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ebx
	movl	%r8d, %edx
	cmpl	%ebx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L362:
	leaq	.LC324(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ebx
	movl	%r8d, %edx
	cmpl	%ebx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L363:
	leaq	.LC323(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ebx
	movl	%r8d, %edx
	cmpl	%ebx, (%rdi,%rax,4)
	setle	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L364:
	leaq	.LC322(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ebx
	movl	%r8d, %edx
	cmpl	%ebx, (%rdi,%rax,4)
	setl	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L365:
	leaq	.LC321(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	xorq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	notq	%rax
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L366:
	leaq	.LC320(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	xorl	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	notl	%eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L367:
	leaq	.LC319(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	orq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	notq	%rax
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L368:
	leaq	.LC318(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	orl	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	notl	%eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L369:
	leaq	.LC317(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	andq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	notq	%rax
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L370:
	leaq	.LC316(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	andl	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	notl	%eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L371:
	leaq	.LC315(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	xorq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L372:
	leaq	.LC314(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	xorl	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L373:
	leaq	.LC313(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	orq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L697:
	movzwl	%r9w, %eax
	movsd	(%rdi,%r15,4), %xmm0
	comisd	(%rdi,%rax,4), %xmm0
	leaq	.LC560(%rip), %rcx
	seta	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L698:
	leaq	.LC559(%rip), %rcx
	movzwl	%r9w, %eax
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comiss	(%rdi,%r15,4), %xmm0
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L699:
	leaq	.LC558(%rip), %rcx
	movzwl	%r9w, %eax
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comiss	(%rdi,%r15,4), %xmm0
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L700:
	leaq	.LC557(%rip), %rcx
	movzwl	%r9w, %eax
	movl	$1, %edx
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomiss	(%rdi,%r15,4), %xmm0
	setp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L701:
	leaq	.LC556(%rip), %rcx
	movzwl	%r9w, %eax
	movl	$0, %edx
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomiss	(%rdi,%r15,4), %xmm0
	setnp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L702:
	movzwl	%r9w, %eax
	movss	(%rdi,%r15,4), %xmm0
	comiss	(%rdi,%rax,4), %xmm0
	leaq	.LC555(%rip), %rcx
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L703:
	movzwl	%r9w, %eax
	movss	(%rdi,%r15,4), %xmm0
	comiss	(%rdi,%rax,4), %xmm0
	leaq	.LC554(%rip), %rcx
	seta	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L704:
	movq	(%rdi,%r15,4), %rbx
	leaq	.LC553(%rip), %rcx
	movzwl	%r9w, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L705:
	leaq	.LC552(%rip), %rcx
	movzwl	%r9w, %eax
	movq	(%rdi,%rax,4), %rax
	cmpq	%rax, (%rdi,%r15,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L706:
	movq	(%rdi,%r15,4), %rbx
	leaq	.LC551(%rip), %rcx
	movzwl	%r9w, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L707:
	movq	(%rdi,%r15,4), %rbx
	leaq	.LC550(%rip), %rcx
	movzwl	%r9w, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L708:
	leaq	.LC549(%rip), %rcx
	movzwl	%r9w, %eax
	movq	(%rdi,%rax,4), %rax
	cmpq	%rax, (%rdi,%r15,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L709:
	movq	(%rdi,%r15,4), %rbx
	leaq	.LC548(%rip), %rcx
	movzwl	%r9w, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L710:
	movq	(%rdi,%r15,4), %rbx
	leaq	.LC547(%rip), %rcx
	movzwl	%r9w, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setge	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L711:
	movq	(%rdi,%r15,4), %rbx
	leaq	.LC546(%rip), %rcx
	movzwl	%r9w, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setg	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L712:
	movq	(%rdi,%r15,4), %rbx
	leaq	.LC545(%rip), %rcx
	movzwl	%r9w, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L713:
	movq	(%rdi,%r15,4), %rbx
	leaq	.LC544(%rip), %rcx
	movzwl	%r9w, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L714:
	movq	(%rdi,%r15,4), %rbx
	leaq	.LC543(%rip), %rcx
	movzwl	%r9w, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setle	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L715:
	movq	(%rdi,%r15,4), %rbx
	leaq	.LC542(%rip), %rcx
	movzwl	%r9w, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setl	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L716:
	movl	(%rdi,%r15,4), %ebx
	leaq	.LC541(%rip), %rcx
	movzwl	%r9w, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L717:
	leaq	.LC540(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	cmpl	%eax, (%rdi,%r15,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L718:
	movl	(%rdi,%r15,4), %ebx
	leaq	.LC539(%rip), %rcx
	movzwl	%r9w, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L719:
	movl	(%rdi,%r15,4), %ebx
	leaq	.LC538(%rip), %rcx
	movzwl	%r9w, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L720:
	leaq	.LC537(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	cmpl	%eax, (%rdi,%r15,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L721:
	movl	(%rdi,%r15,4), %ebx
	leaq	.LC536(%rip), %rcx
	movzwl	%r9w, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L722:
	movl	(%rdi,%r15,4), %ebx
	leaq	.LC535(%rip), %rcx
	movzwl	%r9w, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setge	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L723:
	movl	(%rdi,%r15,4), %ebx
	leaq	.LC534(%rip), %rcx
	movzwl	%r9w, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setg	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L724:
	movl	(%rdi,%r15,4), %ebx
	leaq	.LC533(%rip), %rcx
	movzwl	%r9w, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L725:
	movl	(%rdi,%r15,4), %ebx
	leaq	.LC532(%rip), %rcx
	movzwl	%r9w, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L726:
	movl	(%rdi,%r15,4), %ebx
	leaq	.LC531(%rip), %rcx
	movzwl	%r9w, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setle	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L727:
	movl	(%rdi,%r15,4), %ebx
	leaq	.LC530(%rip), %rcx
	movzwl	%r9w, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setl	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L728:
	leaq	.LC529(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	xorq	(%rdi,%r15,4), %rax
	notq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L729:
	leaq	.LC528(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	xorl	(%rdi,%r15,4), %eax
	notl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L730:
	leaq	.LC527(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	orq	(%rdi,%r15,4), %rax
	notq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L731:
	leaq	.LC526(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	orl	(%rdi,%r15,4), %eax
	notl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L732:
	leaq	.LC525(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	andq	(%rdi,%r15,4), %rax
	notq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L733:
	leaq	.LC524(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	andl	(%rdi,%r15,4), %eax
	notl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L734:
	leaq	.LC523(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	xorq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L735:
	leaq	.LC522(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	xorl	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L736:
	leaq	.LC521(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	orq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L769:
	movzwl	%r9w, %eax
	movzwl	%r15w, %ecx
	movq	(%rdi,%rax,4), %rax
	cqto
	idivq	(%rdi,%rcx,4)
	leaq	.LC488(%rip), %rcx
	movq	%rdx, (%rdi,%r8,4)
	movq	%rdx, 40(%rsp)
	movl	%ebx, %edx
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L770:
	movzwl	%r9w, %eax
	movzwl	%r15w, %ecx
	movq	(%rdi,%rax,4), %rax
	cqto
	idivq	(%rdi,%rcx,4)
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC487(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L771:
	leaq	.LC486(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	imulq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L772:
	leaq	.LC485(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	subq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L773:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC484(%rip), %rcx
	movl	%ebx, %edx
	addq	(%rdi,%r9,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L774:
	movzwl	%r9w, %eax
	movzwl	%r15w, %ebx
	xorl	%edx, %edx
	movl	(%rdi,%rax,4), %eax
	leaq	.LC483(%rip), %rcx
	divl	(%rdi,%rbx,4)
	movl	%edx, (%rdi,%r8,4)
	movl	32(%rsi), %eax
	movl	%edx, 40(%rsp)
	movl	%r15d, 32(%rsp)
	movl	%eax, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L775:
	movzwl	%r9w, %eax
	movzwl	%r15w, %ebx
	xorl	%edx, %edx
	movl	(%rdi,%rax,4), %eax
	leaq	.LC482(%rip), %rcx
	divl	(%rdi,%rbx,4)
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L776:
	leaq	.LC481(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	imull	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L777:
	leaq	.LC480(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	subl	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L778:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC479(%rip), %rcx
	addl	(%rdi,%r9,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L779:
	leaq	.LC478(%rip), %rcx
	movzwl	%r9w, %eax
	movzwl	%r15w, %ebx
	movl	(%rdi,%rax,4), %eax
	cltd
	idivl	(%rdi,%rbx,4)
	movl	%edx, (%rdi,%r8,4)
	movl	32(%rsi), %eax
	movl	%edx, 40(%rsp)
	movl	%r15d, 32(%rsp)
	movl	%eax, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L780:
	leaq	.LC477(%rip), %rcx
	movzwl	%r9w, %eax
	movzwl	%r15w, %ebx
	movl	(%rdi,%rax,4), %eax
	cltd
	idivl	(%rdi,%rbx,4)
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L781:
	leaq	.LC476(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	imull	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L782:
	leaq	.LC475(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	subl	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L783:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC474(%rip), %rcx
	addl	(%rdi,%r9,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L679:
	leaq	.LC577(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	minsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L761:
	leaq	.LC496(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movss	(%rdi,%rax,4), %xmm0
	mulss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L762:
	leaq	.LC495(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movss	(%rdi,%rax,4), %xmm0
	subss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L763:
	leaq	.LC494(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movss	(%rdi,%rax,4), %xmm0
	addss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L764:
	movzwl	%r9w, %eax
	movzwl	%r15w, %ecx
	xorl	%edx, %edx
	movq	(%rdi,%rax,4), %rax
	divq	(%rdi,%rcx,4)
	leaq	.LC493(%rip), %rcx
	movq	%rdx, (%rdi,%r8,4)
	movq	%rdx, 40(%rsp)
	movl	%ebx, %edx
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L765:
	movzwl	%r9w, %eax
	movzwl	%r15w, %ecx
	xorl	%edx, %edx
	movq	(%rdi,%rax,4), %rax
	divq	(%rdi,%rcx,4)
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC492(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L766:
	leaq	.LC491(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	imulq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L767:
	leaq	.LC490(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	subq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L768:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC489(%rip), %rcx
	movl	%ebx, %edx
	addq	(%rdi,%r9,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L656:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC480(%rip), %rcx
	subl	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L657:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC479(%rip), %rcx
	addl	(%rdi,%r9,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L658:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC478(%rip), %rcx
	movzwl	%r15w, %ebx
	cltd
	idivl	(%rdi,%rbx,4)
	movl	%edx, (%rdi,%r8,4)
	movl	32(%rsi), %eax
	movl	%edx, 40(%rsp)
	movl	%r15d, 32(%rsp)
	movl	%eax, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L659:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC477(%rip), %rcx
	movzwl	%r15w, %ebx
	cltd
	idivl	(%rdi,%rbx,4)
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L660:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC476(%rip), %rcx
	imull	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L661:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC475(%rip), %rcx
	subl	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L662:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC474(%rip), %rcx
	addl	(%rdi,%r9,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L558:
	movsd	(%rdi,%r9,4), %xmm0
	leaq	.LC577(%rip), %rcx
	movl	%ebx, %edx
	minsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L640:
	movss	(%rdi,%r9,4), %xmm0
	leaq	.LC496(%rip), %rcx
	movl	%ebx, %edx
	mulss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L641:
	movss	(%rdi,%r9,4), %xmm0
	leaq	.LC495(%rip), %rcx
	movl	%ebx, %edx
	subss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L642:
	movss	(%rdi,%r9,4), %xmm0
	leaq	.LC494(%rip), %rcx
	movl	%ebx, %edx
	addss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L643:
	movq	(%rdi,%r9,4), %rax
	movzwl	%r15w, %r11d
	xorl	%edx, %edx
	leaq	.LC493(%rip), %rcx
	divq	(%rdi,%r11,4)
	movq	%rdx, (%rdi,%r8,4)
	movq	%rdx, 40(%rsp)
	movl	%ebx, %edx
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L644:
	movq	(%rdi,%r9,4), %rax
	movzwl	%r15w, %r11d
	xorl	%edx, %edx
	leaq	.LC492(%rip), %rcx
	divq	(%rdi,%r11,4)
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L645:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC491(%rip), %rcx
	movl	%ebx, %edx
	imulq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L646:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC490(%rip), %rcx
	movl	%ebx, %edx
	subq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L647:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC489(%rip), %rcx
	movl	%ebx, %edx
	addq	(%rdi,%r9,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L681:
	leaq	.LC576(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movss	(%rdi,%rax,4), %xmm0
	minss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L682:
	movq	(%rdi,%r9,4), %rdx
	leaq	.LC575(%rip), %rcx
	movq	(%rdi,%r15,4), %rax
	cmpq	%rdx, %rax
	cmova	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L683:
	movq	(%rdi,%r9,4), %rdx
	leaq	.LC574(%rip), %rcx
	movq	(%rdi,%r15,4), %rax
	cmpq	%rdx, %rax
	cmovg	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L684:
	movl	(%rdi,%r9,4), %edx
	leaq	.LC573(%rip), %rcx
	movl	(%rdi,%r15,4), %eax
	cmpl	%edx, %eax
	cmova	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L685:
	movl	(%rdi,%r9,4), %edx
	leaq	.LC572(%rip), %rcx
	movl	(%rdi,%r15,4), %eax
	cmpl	%edx, %eax
	cmovg	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L686:
	leaq	.LC571(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	maxsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L687:
	leaq	.LC570(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movss	(%rdi,%rax,4), %xmm0
	maxss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L688:
	movq	(%rdi,%r9,4), %rdx
	leaq	.LC569(%rip), %rcx
	movq	(%rdi,%r15,4), %rax
	cmpq	%rdx, %rax
	cmovb	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L689:
	movq	(%rdi,%r9,4), %rdx
	leaq	.LC568(%rip), %rcx
	movq	(%rdi,%r15,4), %rax
	cmpq	%rdx, %rax
	cmovl	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L690:
	movl	(%rdi,%r9,4), %edx
	leaq	.LC567(%rip), %rcx
	movl	(%rdi,%r15,4), %eax
	cmpl	%edx, %eax
	cmovb	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L691:
	movl	(%rdi,%r9,4), %edx
	leaq	.LC566(%rip), %rcx
	movl	(%rdi,%r15,4), %eax
	cmpl	%edx, %eax
	cmovl	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L692:
	leaq	.LC565(%rip), %rcx
	movzwl	%r9w, %eax
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comisd	(%rdi,%r15,4), %xmm0
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L693:
	leaq	.LC564(%rip), %rcx
	movzwl	%r9w, %eax
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comisd	(%rdi,%r15,4), %xmm0
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L694:
	leaq	.LC563(%rip), %rcx
	movzwl	%r9w, %eax
	movl	$1, %edx
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomisd	(%rdi,%r15,4), %xmm0
	setp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L695:
	leaq	.LC562(%rip), %rcx
	movzwl	%r9w, %eax
	movl	$0, %edx
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomisd	(%rdi,%r15,4), %xmm0
	setnp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L696:
	movzwl	%r9w, %eax
	movsd	(%rdi,%r15,4), %xmm0
	comisd	(%rdi,%rax,4), %xmm0
	leaq	.LC561(%rip), %rcx
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L648:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC488(%rip), %rcx
	movzwl	%r15w, %r11d
	cqto
	idivq	(%rdi,%r11,4)
	movq	%rdx, (%rdi,%r8,4)
	movq	%rdx, 40(%rsp)
	movl	%ebx, %edx
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L649:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC487(%rip), %rcx
	movzwl	%r15w, %r11d
	cqto
	idivq	(%rdi,%r11,4)
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L650:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC486(%rip), %rcx
	movl	%ebx, %edx
	imulq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L651:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC485(%rip), %rcx
	movl	%ebx, %edx
	subq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L652:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC484(%rip), %rcx
	movl	%ebx, %edx
	addq	(%rdi,%r9,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L653:
	movl	(%rdi,%r9,4), %eax
	movzwl	%r15w, %ebx
	xorl	%edx, %edx
	leaq	.LC483(%rip), %rcx
	divl	(%rdi,%rbx,4)
	movl	%edx, (%rdi,%r8,4)
	movl	32(%rsi), %eax
	movl	%edx, 40(%rsp)
	movl	%r15d, 32(%rsp)
	movl	%eax, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L654:
	movl	(%rdi,%r9,4), %eax
	movzwl	%r15w, %ebx
	xorl	%edx, %edx
	leaq	.LC482(%rip), %rcx
	divl	(%rdi,%rbx,4)
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L655:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC481(%rip), %rcx
	imull	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L737:
	leaq	.LC520(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	orl	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L738:
	leaq	.LC519(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	andq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L739:
	leaq	.LC518(%rip), %rcx
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	andl	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L740:
	movzwl	%r9w, %eax
	movl	(%rdi,%r15,4), %ecx
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	rorq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC517(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L741:
	movzwl	%r9w, %eax
	movl	(%rdi,%r15,4), %ecx
	movl	(%rdi,%rax,4), %eax
	rorl	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC516(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L742:
	movzwl	%r9w, %eax
	movl	(%rdi,%r15,4), %ecx
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	rolq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC515(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L743:
	movzwl	%r9w, %eax
	movl	(%rdi,%r15,4), %ecx
	movl	(%rdi,%rax,4), %eax
	roll	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC514(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L744:
	movzwl	%r9w, %eax
	movq	(%rdi,%r15,4), %rcx
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	sarq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC513(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L745:
	movzwl	%r9w, %eax
	movl	(%rdi,%r15,4), %ecx
	movl	(%rdi,%rax,4), %eax
	sarl	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC512(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L746:
	movzwl	%r9w, %eax
	movq	(%rdi,%r15,4), %rcx
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	shrq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC511(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L747:
	movzwl	%r9w, %eax
	movl	(%rdi,%r15,4), %ecx
	movl	(%rdi,%rax,4), %eax
	shrl	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC510(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L748:
	movzwl	%r9w, %eax
	movq	(%rdi,%r15,4), %rcx
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	salq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC509(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L749:
	movzwl	%r9w, %eax
	movl	(%rdi,%r15,4), %ecx
	movl	(%rdi,%rax,4), %eax
	sall	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC508(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L750:
	movzwl	%r9w, %eax
	movl	$1, %r11d
	cmpq	$0, (%rdi,%rax,4)
	jne	.L791
	xorl	%r11d, %r11d
	cmpq	$0, (%rdi,%r15,4)
	setne	%r11b
.L791:
	movl	%r11d, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC507(%rip), %rcx
	movl	%r11d, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L751:
	movzwl	%r9w, %eax
	movl	$1, %r11d
	movl	(%rdi,%rax,4), %ecx
	testl	%ecx, %ecx
	jne	.L790
	movl	(%rdi,%r15,4), %eax
	xorl	%r11d, %r11d
	testl	%eax, %eax
	setne	%r11b
.L790:
	movl	%r11d, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC506(%rip), %rcx
	movl	%r11d, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L752:
	movzwl	%r9w, %eax
	xorl	%r11d, %r11d
	cmpq	$0, (%rdi,%rax,4)
	je	.L789
	xorl	%r11d, %r11d
	cmpq	$0, (%rdi,%r15,4)
	setne	%r11b
.L789:
	movl	%r11d, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC505(%rip), %rcx
	movl	%r11d, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L753:
	movzwl	%r9w, %eax
	movl	(%rdi,%rax,4), %eax
	testl	%eax, %eax
	je	.L788
	movl	(%rdi,%r15,4), %r11d
	xorl	%eax, %eax
	testl	%r11d, %r11d
	setne	%al
.L788:
	movl	%eax, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC504(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L754:
	movsd	(%rdi,%r15,4), %xmm1
	leaq	(%rdi,%r8,4), %rdx
	movzwl	%r9w, %eax
	movsd	(%rdi,%rax,4), %xmm0
	movsd	%xmm1, 72(%rsp)
	fldl	72(%rsp)
	movsd	%xmm0, 72(%rsp)
	fldl	72(%rsp)
.L786:
	fprem
	fnstsw	%ax
	testb	$4, %ah
	jne	.L786
	fstp	%st(1)
	fstpl	72(%rsp)
	movsd	72(%rsp), %xmm6
	ucomisd	%xmm6, %xmm6
	jp	.L859
.L787:
	movsd	%xmm6, (%rdx)
	leaq	.LC503(%rip), %rcx
	movl	%ebx, %edx
	movsd	%xmm6, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L755:
	leaq	.LC502(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	divsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L374:
	leaq	.LC312(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	orl	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L375:
	leaq	.LC311(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	andq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L376:
	leaq	.LC310(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	andl	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L377:
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ecx
	movl	%r8d, %edx
	movq	(%rdi,%rax,4), %rax
	rorq	%cl, %rax
	movq	%rax, (%rdi,%rdx,4)
	leaq	.LC309(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L378:
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ecx
	movl	%r8d, %edx
	movl	(%rdi,%rax,4), %eax
	rorl	%cl, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	leaq	.LC308(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L379:
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ecx
	movl	%r8d, %edx
	movq	(%rdi,%rax,4), %rax
	rolq	%cl, %rax
	movq	%rax, (%rdi,%rdx,4)
	leaq	.LC307(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L380:
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ecx
	movl	%r8d, %edx
	movl	(%rdi,%rax,4), %eax
	roll	%cl, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	leaq	.LC306(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L381:
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rcx
	movl	%r8d, %edx
	movq	(%rdi,%rax,4), %rax
	sarq	%cl, %rax
	movq	%rax, (%rdi,%rdx,4)
	leaq	.LC305(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L757:
	leaq	.LC500(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	subsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L758:
	leaq	.LC499(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	addsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L759:
	movss	(%rdi,%r15,4), %xmm1
	leaq	(%rdi,%r8,4), %rdx
	movzwl	%r9w, %eax
	movss	(%rdi,%rax,4), %xmm0
	movss	%xmm1, 72(%rsp)
	flds	72(%rsp)
	movss	%xmm0, 72(%rsp)
	flds	72(%rsp)
.L784:
	fprem
	fnstsw	%ax
	testb	$4, %ah
	jne	.L784
	fstp	%st(1)
	fstps	72(%rsp)
	movss	72(%rsp), %xmm6
	ucomiss	%xmm6, %xmm6
	jp	.L860
.L785:
	movss	%xmm6, (%rdx)
	leaq	.LC498(%rip), %rcx
	movl	%ebx, %edx
	cvtss2sd	%xmm6, %xmm6
	movl	%r15d, 32(%rsp)
	movsd	%xmm6, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L760:
	leaq	.LC497(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movss	(%rdi,%rax,4), %xmm0
	divss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L756:
	leaq	.LC501(%rip), %rcx
	movzwl	%r9w, %eax
	movl	%ebx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	mulsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L382:
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ecx
	movl	%r8d, %edx
	movl	(%rdi,%rax,4), %eax
	sarl	%cl, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	leaq	.LC304(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L383:
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rcx
	movl	%r8d, %edx
	movq	(%rdi,%rax,4), %rax
	shrq	%cl, %rax
	movq	%rax, (%rdi,%rdx,4)
	leaq	.LC303(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L384:
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ecx
	movl	%r8d, %edx
	movl	(%rdi,%rax,4), %eax
	shrl	%cl, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	leaq	.LC302(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L385:
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rcx
	movl	%r8d, %edx
	movq	(%rdi,%rax,4), %rax
	salq	%cl, %rax
	movq	%rax, (%rdi,%rdx,4)
	leaq	.LC301(%rip), %rcx
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L386:
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %ecx
	movl	%r8d, %edx
	movl	(%rdi,%rax,4), %eax
	sall	%cl, %eax
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	leaq	.LC300(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L387:
	movl	%r9d, %ecx
	movl	$1, %eax
	cmpq	$0, (%rdi,%rcx,4)
	jne	.L428
	movzwl	%dx, %edx
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%rdx,4)
	setne	%al
.L428:
	leaq	.LC299(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L388:
	movl	%r9d, %ecx
	movl	$1, %eax
	movl	(%rdi,%rcx,4), %ecx
	testl	%ecx, %ecx
	jne	.L427
	movzwl	%dx, %edx
	xorl	%eax, %eax
	movl	(%rdi,%rdx,4), %ebx
	testl	%ebx, %ebx
	setne	%al
.L427:
	leaq	.LC298(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L389:
	movl	%r9d, %ecx
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%rcx,4)
	je	.L426
	movzwl	%dx, %edx
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%rdx,4)
	setne	%al
.L426:
	leaq	.LC297(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L390:
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	testl	%eax, %eax
	je	.L425
	movzwl	%dx, %edx
	xorl	%eax, %eax
	movl	(%rdi,%rdx,4), %r10d
	testl	%r10d, %r10d
	setne	%al
.L425:
	leaq	.LC296(%rip), %rcx
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L391:
	movzwl	%dx, %edx
	movl	%r9d, %eax
	movsd	(%rdi,%rdx,4), %xmm1
	movsd	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	movsd	%xmm1, 72(%rsp)
	leaq	(%rdi,%rax,4), %rdx
	fldl	72(%rsp)
	movsd	%xmm0, 72(%rsp)
	fldl	72(%rsp)
.L423:
	fprem
	fnstsw	%ax
	testb	$4, %ah
	jne	.L423
	fstp	%st(1)
	fstpl	72(%rsp)
	movsd	72(%rsp), %xmm6
	ucomisd	%xmm6, %xmm6
	jp	.L861
.L424:
	movsd	%xmm6, (%rdx)
	leaq	.LC295(%rip), %rcx
	movl	%ebx, %edx
	movsd	%xmm6, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L392:
	leaq	.LC294(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	divsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L393:
	leaq	.LC293(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	mulsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L394:
	leaq	.LC292(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	subsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L395:
	leaq	.LC291(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	addsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L396:
	movzwl	%dx, %edx
	movl	%r9d, %eax
	movss	(%rdi,%rdx,4), %xmm1
	movss	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	movss	%xmm1, 72(%rsp)
	leaq	(%rdi,%rax,4), %rdx
	flds	72(%rsp)
	movss	%xmm0, 72(%rsp)
	flds	72(%rsp)
.L421:
	fprem
	fnstsw	%ax
	testb	$4, %ah
	jne	.L421
	fstp	%st(1)
	fstps	72(%rsp)
	movss	72(%rsp), %xmm6
	ucomiss	%xmm6, %xmm6
	jp	.L862
.L422:
	movss	%xmm6, (%rdx)
	leaq	.LC290(%rip), %rcx
	movl	%ebx, %edx
	cvtss2sd	%xmm6, %xmm6
	movl	%r15d, 32(%rsp)
	movsd	%xmm6, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L397:
	leaq	.LC289(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	divss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L398:
	leaq	.LC288(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	mulss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L399:
	leaq	.LC287(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	subss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L400:
	leaq	.LC286(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movss	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	addss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%rax,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L401:
	movl	%r9d, %eax
	movzwl	%dx, %ecx
	xorl	%edx, %edx
	movq	(%rdi,%rax,4), %rax
	divq	(%rdi,%rcx,4)
	leaq	.LC285(%rip), %rcx
	movl	%r8d, %eax
	movq	%rdx, (%rdi,%rax,4)
	movq	%rdx, 40(%rsp)
	movl	%ebx, %edx
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L402:
	movl	%r9d, %eax
	movzwl	%dx, %ecx
	xorl	%edx, %edx
	movq	(%rdi,%rax,4), %rax
	divq	(%rdi,%rcx,4)
	leaq	.LC284(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L403:
	leaq	.LC283(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	imulq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L404:
	leaq	.LC282(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	subq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L405:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	addq	(%rdi,%rcx,4), %rax
	leaq	.LC281(%rip), %rcx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L406:
	movl	%r9d, %eax
	movzwl	%dx, %ecx
	movq	(%rdi,%rax,4), %rax
	cqto
	idivq	(%rdi,%rcx,4)
	leaq	.LC280(%rip), %rcx
	movl	%r8d, %eax
	movq	%rdx, (%rdi,%rax,4)
	movq	%rdx, 40(%rsp)
	movl	%ebx, %edx
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L407:
	movl	%r9d, %eax
	movzwl	%dx, %ecx
	movq	(%rdi,%rax,4), %rax
	cqto
	idivq	(%rdi,%rcx,4)
	leaq	.LC279(%rip), %rcx
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L408:
	leaq	.LC278(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	imulq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L409:
	leaq	.LC277(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movq	(%rdi,%rax,4), %rax
	subq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L410:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movq	(%rdi,%rdx,4), %rax
	movl	%r8d, %edx
	addq	(%rdi,%rcx,4), %rax
	leaq	.LC276(%rip), %rcx
	movq	%rax, (%rdi,%rdx,4)
	movl	%ebx, %edx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L411:
	leaq	.LC275(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %ebx
	movl	(%rdi,%rax,4), %eax
	xorl	%edx, %edx
	divl	(%rdi,%rbx,4)
	movl	%r8d, %eax
	movl	%edx, (%rdi,%rax,4)
	movl	32(%rsi), %eax
	movl	%edx, 40(%rsp)
	movl	%r15d, 32(%rsp)
	movl	%eax, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L412:
	leaq	.LC274(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %ebx
	movl	(%rdi,%rax,4), %eax
	xorl	%edx, %edx
	divl	(%rdi,%rbx,4)
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L413:
	leaq	.LC273(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	imull	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L414:
	leaq	.LC272(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	subl	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L415:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	addl	(%rdi,%rcx,4), %eax
	leaq	.LC271(%rip), %rcx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L416:
	leaq	.LC270(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %ebx
	movl	(%rdi,%rax,4), %eax
	cltd
	idivl	(%rdi,%rbx,4)
	movl	%r8d, %eax
	movl	%edx, (%rdi,%rax,4)
	movl	32(%rsi), %eax
	movl	%edx, 40(%rsp)
	movl	%r15d, 32(%rsp)
	movl	%eax, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L417:
	leaq	.LC269(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %ebx
	movl	(%rdi,%rax,4), %eax
	cltd
	idivl	(%rdi,%rbx,4)
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L418:
	leaq	.LC268(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	imull	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L419:
	leaq	.LC267(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movl	(%rdi,%rax,4), %eax
	subl	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L420:
	movl	%r9d, %ecx
	movzwl	%dx, %edx
	movl	(%rdi,%rdx,4), %eax
	movl	%r8d, %edx
	addl	(%rdi,%rcx,4), %eax
	leaq	.LC266(%rip), %rcx
	movl	%eax, (%rdi,%rdx,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L316:
	leaq	.LC369(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %edx
	movsd	(%rdi,%rax,4), %xmm0
	movl	%r8d, %eax
	minsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%rax,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	2(%rax), %ebx
	jmp	.L44
.L439:
	leaq	.LC472(%rip), %rcx
	movl	%r9d, %eax
	movss	(%rdi,%rax,4), %xmm0
	minss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L440:
	movl	%r9d, %ecx
	movq	(%rdi,%rdx,4), %rax
	movq	(%rdi,%rcx,4), %rdx
	leaq	.LC471(%rip), %rcx
	cmpq	%rdx, %rax
	cmova	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L441:
	movl	%r9d, %ecx
	movq	(%rdi,%rdx,4), %rax
	movq	(%rdi,%rcx,4), %rdx
	leaq	.LC470(%rip), %rcx
	cmpq	%rdx, %rax
	cmovg	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L442:
	movl	%r9d, %ecx
	movl	(%rdi,%rdx,4), %eax
	movl	(%rdi,%rcx,4), %edx
	leaq	.LC469(%rip), %rcx
	cmpl	%edx, %eax
	cmova	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L443:
	movl	%r9d, %ecx
	movl	(%rdi,%rdx,4), %eax
	movl	(%rdi,%rcx,4), %edx
	leaq	.LC468(%rip), %rcx
	cmpl	%edx, %eax
	cmovg	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L444:
	leaq	.LC467(%rip), %rcx
	movl	%r9d, %eax
	movsd	(%rdi,%rax,4), %xmm0
	maxsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L445:
	leaq	.LC466(%rip), %rcx
	movl	%r9d, %eax
	movss	(%rdi,%rax,4), %xmm0
	maxss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L446:
	movl	%r9d, %ecx
	movq	(%rdi,%rdx,4), %rax
	movq	(%rdi,%rcx,4), %rdx
	leaq	.LC465(%rip), %rcx
	cmpq	%rdx, %rax
	cmovb	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L447:
	movl	%r9d, %ecx
	movq	(%rdi,%rdx,4), %rax
	movq	(%rdi,%rcx,4), %rdx
	leaq	.LC464(%rip), %rcx
	cmpq	%rdx, %rax
	cmovl	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L448:
	movl	%r9d, %ecx
	movl	(%rdi,%rdx,4), %eax
	movl	(%rdi,%rcx,4), %edx
	leaq	.LC463(%rip), %rcx
	cmpl	%edx, %eax
	cmovb	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L449:
	movl	%r9d, %ecx
	movl	(%rdi,%rdx,4), %eax
	movl	(%rdi,%rcx,4), %edx
	leaq	.LC462(%rip), %rcx
	cmpl	%edx, %eax
	cmovl	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L450:
	leaq	.LC461(%rip), %rcx
	movl	%r9d, %eax
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comisd	(%rdi,%rdx,4), %xmm0
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L451:
	leaq	.LC460(%rip), %rcx
	movl	%r9d, %eax
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comisd	(%rdi,%rdx,4), %xmm0
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L452:
	leaq	.LC459(%rip), %rcx
	movl	%r9d, %eax
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomisd	(%rdi,%rdx,4), %xmm0
	movl	$1, %edx
	setp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L453:
	leaq	.LC458(%rip), %rcx
	movl	%r9d, %eax
	movsd	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomisd	(%rdi,%rdx,4), %xmm0
	movl	$0, %edx
	setnp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L454:
	movsd	(%rdi,%rdx,4), %xmm0
	leaq	.LC457(%rip), %rcx
	movl	%r9d, %eax
	comisd	(%rdi,%rax,4), %xmm0
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L455:
	movsd	(%rdi,%rdx,4), %xmm0
	leaq	.LC456(%rip), %rcx
	movl	%r9d, %eax
	comisd	(%rdi,%rax,4), %xmm0
	seta	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L456:
	leaq	.LC455(%rip), %rcx
	movl	%r9d, %eax
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comiss	(%rdi,%rdx,4), %xmm0
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L457:
	leaq	.LC454(%rip), %rcx
	movl	%r9d, %eax
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	comiss	(%rdi,%rdx,4), %xmm0
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L458:
	leaq	.LC453(%rip), %rcx
	movl	%r9d, %eax
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomiss	(%rdi,%rdx,4), %xmm0
	movl	$1, %edx
	setp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L459:
	leaq	.LC452(%rip), %rcx
	movl	%r9d, %eax
	movss	(%rdi,%rax,4), %xmm0
	xorl	%eax, %eax
	ucomiss	(%rdi,%rdx,4), %xmm0
	movl	$0, %edx
	setnp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L460:
	movss	(%rdi,%rdx,4), %xmm0
	leaq	.LC451(%rip), %rcx
	movl	%r9d, %eax
	comiss	(%rdi,%rax,4), %xmm0
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L461:
	movss	(%rdi,%rdx,4), %xmm0
	leaq	.LC450(%rip), %rcx
	movl	%r9d, %eax
	comiss	(%rdi,%rax,4), %xmm0
	seta	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L462:
	movq	(%rdi,%rdx,4), %rbx
	leaq	.LC449(%rip), %rcx
	movl	%r9d, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L463:
	leaq	.LC448(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	cmpq	%rax, (%rdi,%rdx,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L464:
	movq	(%rdi,%rdx,4), %rbx
	leaq	.LC447(%rip), %rcx
	movl	%r9d, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L465:
	movq	(%rdi,%rdx,4), %rbx
	leaq	.LC446(%rip), %rcx
	movl	%r9d, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L466:
	leaq	.LC445(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	cmpq	%rax, (%rdi,%rdx,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L467:
	movq	(%rdi,%rdx,4), %rbx
	leaq	.LC444(%rip), %rcx
	movl	%r9d, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L468:
	movq	(%rdi,%rdx,4), %rbx
	leaq	.LC443(%rip), %rcx
	movl	%r9d, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setge	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L469:
	movq	(%rdi,%rdx,4), %rbx
	leaq	.LC442(%rip), %rcx
	movl	%r9d, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setg	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L470:
	movq	(%rdi,%rdx,4), %rbx
	leaq	.LC441(%rip), %rcx
	movl	%r9d, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L471:
	movq	(%rdi,%rdx,4), %rbx
	leaq	.LC440(%rip), %rcx
	movl	%r9d, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L472:
	movq	(%rdi,%rdx,4), %rbx
	leaq	.LC439(%rip), %rcx
	movl	%r9d, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setle	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L473:
	movq	(%rdi,%rdx,4), %rbx
	leaq	.LC438(%rip), %rcx
	movl	%r9d, %eax
	cmpq	%rbx, (%rdi,%rax,4)
	setl	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L474:
	movl	(%rdi,%rdx,4), %ebx
	leaq	.LC437(%rip), %rcx
	movl	%r9d, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L475:
	leaq	.LC436(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	cmpl	%eax, (%rdi,%rdx,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L476:
	movl	(%rdi,%rdx,4), %ebx
	leaq	.LC435(%rip), %rcx
	movl	%r9d, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L477:
	movl	(%rdi,%rdx,4), %ebx
	leaq	.LC434(%rip), %rcx
	movl	%r9d, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L478:
	leaq	.LC433(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	cmpl	%eax, (%rdi,%rdx,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L479:
	movl	(%rdi,%rdx,4), %ebx
	leaq	.LC432(%rip), %rcx
	movl	%r9d, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L480:
	movl	(%rdi,%rdx,4), %ebx
	leaq	.LC431(%rip), %rcx
	movl	%r9d, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setge	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L481:
	movl	(%rdi,%rdx,4), %ebx
	leaq	.LC430(%rip), %rcx
	movl	%r9d, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setg	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L482:
	movl	(%rdi,%rdx,4), %ebx
	leaq	.LC429(%rip), %rcx
	movl	%r9d, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L483:
	movl	(%rdi,%rdx,4), %ebx
	leaq	.LC428(%rip), %rcx
	movl	%r9d, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L484:
	movl	(%rdi,%rdx,4), %ebx
	leaq	.LC427(%rip), %rcx
	movl	%r9d, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setle	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L485:
	movl	(%rdi,%rdx,4), %ebx
	leaq	.LC426(%rip), %rcx
	movl	%r9d, %eax
	cmpl	%ebx, (%rdi,%rax,4)
	setl	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L486:
	leaq	.LC425(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	xorq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	notq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L487:
	leaq	.LC424(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	xorl	(%rdi,%rdx,4), %eax
	notl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L488:
	leaq	.LC423(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	orq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	notq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L489:
	leaq	.LC422(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	orl	(%rdi,%rdx,4), %eax
	notl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L490:
	leaq	.LC421(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	andq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	notq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L491:
	leaq	.LC420(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	andl	(%rdi,%rdx,4), %eax
	notl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L492:
	leaq	.LC419(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	xorq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L493:
	leaq	.LC418(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	xorl	(%rdi,%rdx,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L494:
	leaq	.LC417(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	orq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L495:
	leaq	.LC416(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	orl	(%rdi,%rdx,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L496:
	leaq	.LC415(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	andq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L497:
	leaq	.LC414(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	andl	(%rdi,%rdx,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L498:
	movl	%r9d, %eax
	movl	(%rdi,%rdx,4), %ecx
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	rorq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC413(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L499:
	movl	%r9d, %eax
	movl	(%rdi,%rdx,4), %ecx
	movl	(%rdi,%rax,4), %eax
	rorl	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC412(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L500:
	movl	%r9d, %eax
	movl	(%rdi,%rdx,4), %ecx
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	rolq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC411(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L501:
	movl	%r9d, %eax
	movl	(%rdi,%rdx,4), %ecx
	movl	(%rdi,%rax,4), %eax
	roll	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC410(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L502:
	movl	%r9d, %eax
	movq	(%rdi,%rdx,4), %rcx
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	sarq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC409(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L503:
	movl	%r9d, %eax
	movl	(%rdi,%rdx,4), %ecx
	movl	(%rdi,%rax,4), %eax
	sarl	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC408(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L504:
	movl	%r9d, %eax
	movq	(%rdi,%rdx,4), %rcx
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	shrq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC407(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L505:
	movl	%r9d, %eax
	movl	(%rdi,%rdx,4), %ecx
	movl	(%rdi,%rax,4), %eax
	shrl	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC406(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L506:
	movl	%r9d, %eax
	movq	(%rdi,%rdx,4), %rcx
	movl	%ebx, %edx
	movq	(%rdi,%rax,4), %rax
	salq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC405(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L507:
	movl	%r9d, %eax
	movl	(%rdi,%rdx,4), %ecx
	movl	(%rdi,%rax,4), %eax
	sall	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC404(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L508:
	movl	%r9d, %ecx
	movl	$1, %eax
	cmpq	$0, (%rdi,%rcx,4)
	jne	.L549
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%rdx,4)
	setne	%al
.L549:
	movl	%eax, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC403(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L509:
	movl	%r9d, %ecx
	movl	$1, %eax
	movl	(%rdi,%rcx,4), %ecx
	testl	%ecx, %ecx
	jne	.L548
	movl	(%rdi,%rdx,4), %ebx
	xorl	%eax, %eax
	testl	%ebx, %ebx
	setne	%al
.L548:
	movl	%eax, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC402(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L510:
	movl	%r9d, %ecx
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%rcx,4)
	je	.L547
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%rdx,4)
	setne	%al
.L547:
	movl	%eax, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC401(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L511:
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	testl	%eax, %eax
	je	.L546
	movl	(%rdi,%rdx,4), %r11d
	xorl	%eax, %eax
	testl	%r11d, %r11d
	setne	%al
.L546:
	movl	%eax, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC400(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L512:
	movl	%r9d, %eax
	movsd	(%rdi,%rdx,4), %xmm1
	movsd	(%rdi,%rax,4), %xmm0
	leaq	(%rdi,%r8,4), %rdx
	movsd	%xmm1, 72(%rsp)
	fldl	72(%rsp)
	movsd	%xmm0, 72(%rsp)
	fldl	72(%rsp)
.L544:
	fprem
	fnstsw	%ax
	testb	$4, %ah
	jne	.L544
	fstp	%st(1)
	fstpl	72(%rsp)
	movsd	72(%rsp), %xmm6
	ucomisd	%xmm6, %xmm6
	jp	.L863
.L545:
	movsd	%xmm6, (%rdx)
	leaq	.LC399(%rip), %rcx
	movl	%ebx, %edx
	movsd	%xmm6, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L513:
	leaq	.LC398(%rip), %rcx
	movl	%r9d, %eax
	movsd	(%rdi,%rax,4), %xmm0
	divsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L519:
	leaq	.LC392(%rip), %rcx
	movl	%r9d, %eax
	movss	(%rdi,%rax,4), %xmm0
	mulss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L520:
	leaq	.LC391(%rip), %rcx
	movl	%r9d, %eax
	movss	(%rdi,%rax,4), %xmm0
	subss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L521:
	leaq	.LC390(%rip), %rcx
	movl	%r9d, %eax
	movss	(%rdi,%rax,4), %xmm0
	addss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L522:
	movl	%r9d, %eax
	movzwl	%dx, %ecx
	xorl	%edx, %edx
	movq	(%rdi,%rax,4), %rax
	divq	(%rdi,%rcx,4)
	leaq	.LC389(%rip), %rcx
	movq	%rdx, (%rdi,%r8,4)
	movq	%rdx, 40(%rsp)
	movl	%ebx, %edx
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L523:
	movl	%r9d, %eax
	movzwl	%dx, %ecx
	xorl	%edx, %edx
	movq	(%rdi,%rax,4), %rax
	divq	(%rdi,%rcx,4)
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC388(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L524:
	leaq	.LC387(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	imulq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L525:
	leaq	.LC386(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	subq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L526:
	movl	%r9d, %ecx
	movq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	addq	(%rdi,%rcx,4), %rax
	leaq	.LC385(%rip), %rcx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L515:
	leaq	.LC396(%rip), %rcx
	movl	%r9d, %eax
	movsd	(%rdi,%rax,4), %xmm0
	subsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L516:
	leaq	.LC395(%rip), %rcx
	movl	%r9d, %eax
	movsd	(%rdi,%rax,4), %xmm0
	addsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L517:
	movl	%r9d, %eax
	movss	(%rdi,%rdx,4), %xmm1
	movss	(%rdi,%rax,4), %xmm0
	leaq	(%rdi,%r8,4), %rdx
	movss	%xmm1, 72(%rsp)
	flds	72(%rsp)
	movss	%xmm0, 72(%rsp)
	flds	72(%rsp)
.L542:
	fprem
	fnstsw	%ax
	testb	$4, %ah
	jne	.L542
	fstp	%st(1)
	fstps	72(%rsp)
	movss	72(%rsp), %xmm6
	ucomiss	%xmm6, %xmm6
	jp	.L864
.L543:
	movss	%xmm6, (%rdx)
	leaq	.LC394(%rip), %rcx
	movl	%ebx, %edx
	cvtss2sd	%xmm6, %xmm6
	movl	%r15d, 32(%rsp)
	movsd	%xmm6, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L518:
	leaq	.LC393(%rip), %rcx
	movl	%r9d, %eax
	movss	(%rdi,%rax,4), %xmm0
	divss	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L514:
	leaq	.LC397(%rip), %rcx
	movl	%r9d, %eax
	movsd	(%rdi,%rax,4), %xmm0
	mulsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L527:
	movl	%r9d, %eax
	movzwl	%dx, %ecx
	movq	(%rdi,%rax,4), %rax
	cqto
	idivq	(%rdi,%rcx,4)
	leaq	.LC384(%rip), %rcx
	movq	%rdx, (%rdi,%r8,4)
	movq	%rdx, 40(%rsp)
	movl	%ebx, %edx
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L528:
	movl	%r9d, %eax
	movzwl	%dx, %ecx
	movq	(%rdi,%rax,4), %rax
	cqto
	idivq	(%rdi,%rcx,4)
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC383(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L529:
	leaq	.LC382(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	imulq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L530:
	leaq	.LC381(%rip), %rcx
	movl	%r9d, %eax
	movq	(%rdi,%rax,4), %rax
	subq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L531:
	movl	%r9d, %ecx
	movq	(%rdi,%rdx,4), %rax
	movl	%ebx, %edx
	addq	(%rdi,%rcx,4), %rax
	leaq	.LC380(%rip), %rcx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L532:
	leaq	.LC379(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %ebx
	movl	(%rdi,%rax,4), %eax
	xorl	%edx, %edx
	divl	(%rdi,%rbx,4)
	movl	%edx, (%rdi,%r8,4)
	movl	32(%rsi), %eax
	movl	%edx, 40(%rsp)
	movl	%r15d, 32(%rsp)
	movl	%eax, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L533:
	leaq	.LC378(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %ebx
	movl	(%rdi,%rax,4), %eax
	xorl	%edx, %edx
	divl	(%rdi,%rbx,4)
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L534:
	leaq	.LC377(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	imull	(%rdi,%rdx,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L535:
	leaq	.LC376(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	subl	(%rdi,%rdx,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L536:
	movl	%r9d, %ecx
	movl	(%rdi,%rdx,4), %eax
	addl	(%rdi,%rcx,4), %eax
	leaq	.LC375(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L537:
	leaq	.LC374(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %ebx
	movl	(%rdi,%rax,4), %eax
	cltd
	idivl	(%rdi,%rbx,4)
	movl	%edx, (%rdi,%r8,4)
	movl	32(%rsi), %eax
	movl	%edx, 40(%rsp)
	movl	%r15d, 32(%rsp)
	movl	%eax, %edx
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L538:
	leaq	.LC373(%rip), %rcx
	movl	%r9d, %eax
	movzwl	%dx, %ebx
	movl	(%rdi,%rax,4), %eax
	cltd
	idivl	(%rdi,%rbx,4)
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L539:
	leaq	.LC372(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	imull	(%rdi,%rdx,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L540:
	leaq	.LC371(%rip), %rcx
	movl	%r9d, %eax
	movl	(%rdi,%rax,4), %eax
	subl	(%rdi,%rdx,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L541:
	movl	%r9d, %ecx
	movl	(%rdi,%rdx,4), %eax
	addl	(%rdi,%rcx,4), %eax
	leaq	.LC370(%rip), %rcx
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L437:
	leaq	.LC473(%rip), %rcx
	movl	%r9d, %eax
	movsd	(%rdi,%rax,4), %xmm0
	minsd	(%rdi,%rdx,4), %xmm0
	movl	%ebx, %edx
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	3(%rax), %ebx
	jmp	.L44
.L560:
	movss	(%rdi,%r9,4), %xmm0
	leaq	.LC576(%rip), %rcx
	movl	%ebx, %edx
	minss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L561:
	movq	(%rdi,%r9,4), %rdx
	leaq	.LC575(%rip), %rcx
	movq	(%rdi,%r15,4), %rax
	cmpq	%rdx, %rax
	cmova	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L562:
	movq	(%rdi,%r9,4), %rdx
	leaq	.LC574(%rip), %rcx
	movq	(%rdi,%r15,4), %rax
	cmpq	%rdx, %rax
	cmovg	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L563:
	movl	(%rdi,%r9,4), %edx
	leaq	.LC573(%rip), %rcx
	movl	(%rdi,%r15,4), %eax
	cmpl	%edx, %eax
	cmova	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L564:
	movl	(%rdi,%r9,4), %edx
	leaq	.LC572(%rip), %rcx
	movl	(%rdi,%r15,4), %eax
	cmpl	%edx, %eax
	cmovg	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L565:
	movsd	(%rdi,%r9,4), %xmm0
	leaq	.LC571(%rip), %rcx
	movl	%ebx, %edx
	maxsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L566:
	movss	(%rdi,%r9,4), %xmm0
	leaq	.LC570(%rip), %rcx
	movl	%ebx, %edx
	maxss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L567:
	movq	(%rdi,%r9,4), %rdx
	leaq	.LC569(%rip), %rcx
	movq	(%rdi,%r15,4), %rax
	cmpq	%rdx, %rax
	cmovb	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L568:
	movq	(%rdi,%r9,4), %rdx
	leaq	.LC568(%rip), %rcx
	movq	(%rdi,%r15,4), %rax
	cmpq	%rdx, %rax
	cmovl	%rdx, %rax
	movl	%ebx, %edx
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L569:
	movl	(%rdi,%r9,4), %edx
	leaq	.LC567(%rip), %rcx
	movl	(%rdi,%r15,4), %eax
	cmpl	%edx, %eax
	cmovb	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L570:
	movl	(%rdi,%r9,4), %edx
	leaq	.LC566(%rip), %rcx
	movl	(%rdi,%r15,4), %eax
	cmpl	%edx, %eax
	cmovl	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L571:
	movsd	(%rdi,%r9,4), %xmm0
	leaq	.LC565(%rip), %rcx
	xorl	%eax, %eax
	comisd	(%rdi,%r15,4), %xmm0
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L572:
	movsd	(%rdi,%r9,4), %xmm0
	leaq	.LC564(%rip), %rcx
	xorl	%eax, %eax
	comisd	(%rdi,%r15,4), %xmm0
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L573:
	movsd	(%rdi,%r9,4), %xmm0
	xorl	%eax, %eax
	movl	$1, %edx
	ucomisd	(%rdi,%r15,4), %xmm0
	leaq	.LC563(%rip), %rcx
	setp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L574:
	movsd	(%rdi,%r9,4), %xmm0
	xorl	%eax, %eax
	movl	$0, %edx
	ucomisd	(%rdi,%r15,4), %xmm0
	leaq	.LC562(%rip), %rcx
	setnp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L575:
	movsd	(%rdi,%r15,4), %xmm0
	leaq	.LC561(%rip), %rcx
	xorl	%eax, %eax
	comisd	(%rdi,%r9,4), %xmm0
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L576:
	movsd	(%rdi,%r15,4), %xmm0
	leaq	.LC560(%rip), %rcx
	xorl	%eax, %eax
	comisd	(%rdi,%r9,4), %xmm0
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L577:
	movss	(%rdi,%r9,4), %xmm0
	leaq	.LC559(%rip), %rcx
	xorl	%eax, %eax
	comiss	(%rdi,%r15,4), %xmm0
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L578:
	movss	(%rdi,%r9,4), %xmm0
	leaq	.LC558(%rip), %rcx
	xorl	%eax, %eax
	comiss	(%rdi,%r15,4), %xmm0
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L579:
	movss	(%rdi,%r9,4), %xmm0
	xorl	%eax, %eax
	movl	$1, %edx
	ucomiss	(%rdi,%r15,4), %xmm0
	leaq	.LC557(%rip), %rcx
	setp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L580:
	movss	(%rdi,%r9,4), %xmm0
	xorl	%eax, %eax
	movl	$0, %edx
	ucomiss	(%rdi,%r15,4), %xmm0
	leaq	.LC556(%rip), %rcx
	setnp	%al
	cmovne	%edx, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L581:
	movss	(%rdi,%r15,4), %xmm0
	leaq	.LC555(%rip), %rcx
	xorl	%eax, %eax
	comiss	(%rdi,%r9,4), %xmm0
	setnb	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L582:
	movss	(%rdi,%r15,4), %xmm0
	leaq	.LC554(%rip), %rcx
	xorl	%eax, %eax
	comiss	(%rdi,%r9,4), %xmm0
	seta	%al
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L583:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC553(%rip), %rcx
	cmpq	%rax, (%rdi,%r9,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L584:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC552(%rip), %rcx
	cmpq	%rax, (%rdi,%r15,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L585:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC551(%rip), %rcx
	cmpq	%rax, (%rdi,%r9,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L586:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC550(%rip), %rcx
	cmpq	%rax, (%rdi,%r9,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L587:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC549(%rip), %rcx
	cmpq	%rax, (%rdi,%r15,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L588:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC548(%rip), %rcx
	cmpq	%rax, (%rdi,%r9,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L589:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC547(%rip), %rcx
	cmpq	%rax, (%rdi,%r9,4)
	setge	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L590:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC546(%rip), %rcx
	cmpq	%rax, (%rdi,%r9,4)
	setg	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L591:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC545(%rip), %rcx
	cmpq	%rax, (%rdi,%r9,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L592:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC544(%rip), %rcx
	cmpq	%rax, (%rdi,%r9,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L593:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC543(%rip), %rcx
	cmpq	%rax, (%rdi,%r9,4)
	setle	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L594:
	movq	(%rdi,%r15,4), %rax
	leaq	.LC542(%rip), %rcx
	cmpq	%rax, (%rdi,%r9,4)
	setl	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L595:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC541(%rip), %rcx
	cmpl	%eax, (%rdi,%r9,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L596:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC540(%rip), %rcx
	cmpl	%eax, (%rdi,%r15,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L597:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC539(%rip), %rcx
	cmpl	%eax, (%rdi,%r9,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L598:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC538(%rip), %rcx
	cmpl	%eax, (%rdi,%r9,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L599:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC537(%rip), %rcx
	cmpl	%eax, (%rdi,%r15,4)
	setnb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L600:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC536(%rip), %rcx
	cmpl	%eax, (%rdi,%r9,4)
	setb	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L601:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC535(%rip), %rcx
	cmpl	%eax, (%rdi,%r9,4)
	setge	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L602:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC534(%rip), %rcx
	cmpl	%eax, (%rdi,%r9,4)
	setg	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L603:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC533(%rip), %rcx
	cmpl	%eax, (%rdi,%r9,4)
	setne	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L604:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC532(%rip), %rcx
	cmpl	%eax, (%rdi,%r9,4)
	sete	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L605:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC531(%rip), %rcx
	cmpl	%eax, (%rdi,%r9,4)
	setle	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L606:
	movl	(%rdi,%r15,4), %eax
	leaq	.LC530(%rip), %rcx
	cmpl	%eax, (%rdi,%r9,4)
	setl	%al
	movzbl	%al, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L607:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC529(%rip), %rcx
	movl	%ebx, %edx
	xorq	(%rdi,%r15,4), %rax
	notq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L608:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC528(%rip), %rcx
	xorl	(%rdi,%r15,4), %eax
	notl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L609:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC527(%rip), %rcx
	movl	%ebx, %edx
	orq	(%rdi,%r15,4), %rax
	notq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L610:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC526(%rip), %rcx
	orl	(%rdi,%r15,4), %eax
	notl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L611:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC525(%rip), %rcx
	movl	%ebx, %edx
	andq	(%rdi,%r15,4), %rax
	notq	%rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L612:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC524(%rip), %rcx
	andl	(%rdi,%r15,4), %eax
	notl	%eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L613:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC523(%rip), %rcx
	movl	%ebx, %edx
	xorq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L614:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC522(%rip), %rcx
	xorl	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L615:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC521(%rip), %rcx
	movl	%ebx, %edx
	orq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L616:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC520(%rip), %rcx
	orl	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L617:
	movq	(%rdi,%r9,4), %rax
	leaq	.LC519(%rip), %rcx
	movl	%ebx, %edx
	andq	(%rdi,%r15,4), %rax
	movq	%rax, (%rdi,%r8,4)
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L618:
	movl	(%rdi,%r9,4), %eax
	leaq	.LC518(%rip), %rcx
	andl	(%rdi,%r15,4), %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L619:
	movl	(%rdi,%r15,4), %edx
	movq	(%rdi,%r9,4), %rax
	movl	%edx, %ecx
	movl	%ebx, %edx
	rorq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC517(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L620:
	movl	(%rdi,%r15,4), %edx
	movl	(%rdi,%r9,4), %eax
	movl	%edx, %ecx
	rorl	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC516(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L621:
	movl	(%rdi,%r15,4), %edx
	movq	(%rdi,%r9,4), %rax
	movl	%edx, %ecx
	movl	%ebx, %edx
	rolq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC515(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L622:
	movl	(%rdi,%r15,4), %edx
	movl	(%rdi,%r9,4), %eax
	movl	%edx, %ecx
	roll	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC514(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L623:
	movq	(%rdi,%r15,4), %rdx
	movq	(%rdi,%r9,4), %rax
	movl	%edx, %ecx
	movl	%ebx, %edx
	sarq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC513(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L624:
	movl	(%rdi,%r15,4), %edx
	movl	(%rdi,%r9,4), %eax
	movl	%edx, %ecx
	sarl	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC512(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L625:
	movq	(%rdi,%r15,4), %rdx
	movq	(%rdi,%r9,4), %rax
	movl	%edx, %ecx
	movl	%ebx, %edx
	shrq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC511(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L626:
	movl	(%rdi,%r15,4), %edx
	movl	(%rdi,%r9,4), %eax
	movl	%edx, %ecx
	shrl	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC510(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L627:
	movq	(%rdi,%r15,4), %rdx
	movq	(%rdi,%r9,4), %rax
	movl	%edx, %ecx
	movl	%ebx, %edx
	salq	%cl, %rax
	movq	%rax, (%rdi,%r8,4)
	leaq	.LC509(%rip), %rcx
	movq	%rax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L628:
	movl	(%rdi,%r15,4), %edx
	movl	(%rdi,%r9,4), %eax
	movl	%edx, %ecx
	sall	%cl, %eax
	movl	%eax, (%rdi,%r8,4)
	movl	32(%rsi), %edx
	leaq	.LC508(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L629:
	cmpq	$0, (%rdi,%r9,4)
	movl	$1, %eax
	jne	.L670
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%r15,4)
	setne	%al
.L670:
	movl	%eax, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC507(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L630:
	movl	(%rdi,%r9,4), %ecx
	movl	$1, %eax
	testl	%ecx, %ecx
	jne	.L669
	movl	(%rdi,%r15,4), %ebx
	xorl	%eax, %eax
	testl	%ebx, %ebx
	setne	%al
.L669:
	movl	%eax, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC506(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L631:
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%r9,4)
	je	.L668
	xorl	%eax, %eax
	cmpq	$0, (%rdi,%r15,4)
	setne	%al
.L668:
	movl	%eax, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC505(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L632:
	movl	(%rdi,%r9,4), %eax
	testl	%eax, %eax
	je	.L667
	movl	(%rdi,%r15,4), %r11d
	xorl	%eax, %eax
	testl	%r11d, %r11d
	setne	%al
.L667:
	movl	%eax, (%rdi,%r10,4)
	movl	32(%rsi), %edx
	leaq	.LC504(%rip), %rcx
	movl	%eax, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L633:
	movsd	(%rdi,%r15,4), %xmm1
	leaq	(%rdi,%r8,4), %rdx
	movsd	(%rdi,%r9,4), %xmm0
	movsd	%xmm1, 72(%rsp)
	fldl	72(%rsp)
	movsd	%xmm0, 72(%rsp)
	fldl	72(%rsp)
.L665:
	fprem
	fnstsw	%ax
	testb	$4, %ah
	jne	.L665
	fstp	%st(1)
	fstpl	72(%rsp)
	movsd	72(%rsp), %xmm6
	ucomisd	%xmm6, %xmm6
	jp	.L865
.L666:
	movsd	%xmm6, (%rdx)
	leaq	.LC503(%rip), %rcx
	movl	%ebx, %edx
	movsd	%xmm6, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L634:
	movsd	(%rdi,%r9,4), %xmm0
	movl	%ebx, %edx
	divsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	leaq	.LC502(%rip), %rcx
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L635:
	movsd	(%rdi,%r9,4), %xmm0
	leaq	.LC501(%rip), %rcx
	movl	%ebx, %edx
	mulsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L636:
	movsd	(%rdi,%r9,4), %xmm0
	leaq	.LC500(%rip), %rcx
	movl	%ebx, %edx
	subsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L637:
	movsd	(%rdi,%r9,4), %xmm0
	leaq	.LC499(%rip), %rcx
	movl	%ebx, %edx
	addsd	(%rdi,%r15,4), %xmm0
	movsd	%xmm0, (%rdi,%r8,4)
	movsd	%xmm0, 40(%rsp)
	movl	%r15d, 32(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L638:
	movss	(%rdi,%r15,4), %xmm1
	leaq	(%rdi,%r8,4), %rdx
	movss	(%rdi,%r9,4), %xmm0
	movss	%xmm1, 72(%rsp)
	flds	72(%rsp)
	movss	%xmm0, 72(%rsp)
	flds	72(%rsp)
.L663:
	fprem
	fnstsw	%ax
	testb	$4, %ah
	jne	.L663
	fstp	%st(1)
	fstps	72(%rsp)
	movss	72(%rsp), %xmm6
	ucomiss	%xmm6, %xmm6
	jp	.L866
.L664:
	movss	%xmm6, (%rdx)
	leaq	.LC498(%rip), %rcx
	movl	%ebx, %edx
	cvtss2sd	%xmm6, %xmm6
	movl	%r15d, 32(%rsp)
	movsd	%xmm6, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L639:
	movss	(%rdi,%r9,4), %xmm0
	movl	%ebx, %edx
	divss	(%rdi,%r15,4), %xmm0
	movss	%xmm0, (%rdi,%r8,4)
	leaq	.LC497(%rip), %rcx
	cvtss2sd	%xmm0, %xmm0
	movl	%r15d, 32(%rsp)
	movsd	%xmm0, 40(%rsp)
	call	printf
	movl	32(%rsi), %eax
	leal	4(%rax), %ebx
	jmp	.L44
.L9:
	leaq	.LC578(%rip), %rcx
	movl	%ebx, %edx
	call	printf
	movl	$-1, %ecx
	call	exit
.L204:
	subsd	%xmm1, %xmm0
	cvttsd2siq	%xmm0, %rax
	btcq	$63, %rax
	jmp	.L205
.L137:
	subsd	%xmm1, %xmm0
	cvttsd2siq	%xmm0, %rax
	btcq	$63, %rax
	jmp	.L138
.L202:
	subss	.LC100(%rip), %xmm0
	cvttss2siq	%xmm0, %rax
	btcq	$63, %rax
	jmp	.L203
.L135:
	subss	.LC100(%rip), %xmm0
	cvttss2siq	%xmm0, %rax
	btcq	$63, %rax
	jmp	.L136
.L200:
	movq	%rax, %rcx
	andl	$1, %eax
	pxor	%xmm0, %xmm0
	shrq	%rcx
	orq	%rax, %rcx
	cvtsi2sdq	%rcx, %xmm0
	addsd	%xmm0, %xmm0
	jmp	.L201
.L198:
	movq	%rax, %rcx
	andl	$1, %eax
	pxor	%xmm0, %xmm0
	shrq	%rcx
	orq	%rax, %rcx
	cvtsi2ssq	%rcx, %xmm0
	addss	%xmm0, %xmm0
	jmp	.L199
.L133:
	movq	%rax, %rdx
	andl	$1, %eax
	pxor	%xmm0, %xmm0
	shrq	%rdx
	orq	%rax, %rdx
	cvtsi2sdq	%rdx, %xmm0
	addsd	%xmm0, %xmm0
	jmp	.L134
.L131:
	movq	%rax, %rdx
	andl	$1, %eax
	pxor	%xmm0, %xmm0
	shrq	%rdx
	orq	%rax, %rdx
	cvtsi2ssq	%rdx, %xmm0
	addss	%xmm0, %xmm0
	jmp	.L132
.L814:
	leaq	.LC0(%rip), %rdx
	movl	$70, %r8d
	leaq	.LC2(%rip), %rcx
	call	*__imp__assert(%rip)
.L860:
	movl	%r9d, 92(%rsp)
	movl	%r8d, 80(%rsp)
	movq	%rdx, 72(%rsp)
	call	fmodf
	movl	92(%rsp), %r9d
	movl	80(%rsp), %r8d
	movq	72(%rsp), %rdx
	jmp	.L785
.L863:
	movl	%r8d, 92(%rsp)
	movq	%rdx, 80(%rsp)
	movl	%r9d, 72(%rsp)
	call	fmod
	movl	92(%rsp), %r8d
	movq	80(%rsp), %rdx
	movl	72(%rsp), %r9d
	jmp	.L545
.L865:
	movl	%r9d, 92(%rsp)
	movl	%r8d, 80(%rsp)
	movq	%rdx, 72(%rsp)
	call	fmod
	movl	92(%rsp), %r9d
	movl	80(%rsp), %r8d
	movq	72(%rsp), %rdx
	jmp	.L666
.L866:
	movl	%r9d, 92(%rsp)
	movl	%r8d, 80(%rsp)
	movq	%rdx, 72(%rsp)
	call	fmodf
	movl	92(%rsp), %r9d
	movl	80(%rsp), %r8d
	movq	72(%rsp), %rdx
	jmp	.L664
.L858:
	leaq	.LC0(%rip), %rdx
	movl	$48, %r8d
	leaq	.LC1(%rip), %rcx
	call	*__imp__assert(%rip)
.L862:
	movl	%r9d, 92(%rsp)
	movq	%rdx, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	fmodf
	movl	92(%rsp), %r9d
	movq	80(%rsp), %rdx
	movl	72(%rsp), %r8d
	jmp	.L422
.L864:
	movl	%r8d, 92(%rsp)
	movq	%rdx, 80(%rsp)
	movl	%r9d, 72(%rsp)
	call	fmodf
	movl	92(%rsp), %r8d
	movq	80(%rsp), %rdx
	movl	72(%rsp), %r9d
	jmp	.L543
.L859:
	movl	%r9d, 92(%rsp)
	movl	%r8d, 80(%rsp)
	movq	%rdx, 72(%rsp)
	call	fmod
	movl	92(%rsp), %r9d
	movl	80(%rsp), %r8d
	movq	72(%rsp), %rdx
	jmp	.L787
.L861:
	movl	%r9d, 92(%rsp)
	movq	%rdx, 80(%rsp)
	movl	%r8d, 72(%rsp)
	call	fmod
	movl	92(%rsp), %r9d
	movq	80(%rsp), %rdx
	movl	72(%rsp), %r8d
	jmp	.L424
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC100:
	.long	1593835520
	.align 8
.LC105:
	.long	0
	.long	1138753536
	.align 16
.LC165:
	.long	-2147483648
	.long	0
	.long	0
	.long	0
	.align 16
.LC167:
	.long	0
	.long	-2147483648
	.long	0
	.long	0
	.align 4
.LC201:
	.long	1065353216
	.align 8
.LC203:
	.long	0
	.long	1072693248
	.ident	"GCC: (x86_64-posix-seh-rev1, Built by MinGW-Builds project) 13.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	calloc;	.scl	2;	.type	32;	.endef
	.def	free;	.scl	2;	.type	32;	.endef
	.def	exit;	.scl	2;	.type	32;	.endef
	.def	atanf;	.scl	2;	.type	32;	.endef
	.def	cos;	.scl	2;	.type	32;	.endef
	.def	atan;	.scl	2;	.type	32;	.endef
	.def	acosf;	.scl	2;	.type	32;	.endef
	.def	asin;	.scl	2;	.type	32;	.endef
	.def	asinf;	.scl	2;	.type	32;	.endef
	.def	sin;	.scl	2;	.type	32;	.endef
	.def	sinf;	.scl	2;	.type	32;	.endef
	.def	cosf;	.scl	2;	.type	32;	.endef
	.def	tan;	.scl	2;	.type	32;	.endef
	.def	tanf;	.scl	2;	.type	32;	.endef
	.def	fmodf;	.scl	2;	.type	32;	.endef
	.def	fmod;	.scl	2;	.type	32;	.endef
