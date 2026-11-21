/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

s32 func_8021BAE0();

void func_80298A1C(void *arg0) {
char *__repair_addr;

    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0xB88);
    if (temp_a2 != 0xFFFF) {
        func_8021BAE0(temp_a2);
        M2C_FIELD(arg0, s32 *, 0xB88) = 0xFFFF;
    }
    temp_a2 = M2C_FIELD(arg0, s32 *, 0xB7C);
    if (temp_a2 != 0xFFFF) {
        func_8021BAE0(temp_a2);
        M2C_FIELD(arg0, s32 *, 0xB7C) = 0xFFFF;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xBD0);
    if (temp_a0_2 != 0xFFFF) {
        func_8021BAE0(temp_a0_2, arg0);
        M2C_FIELD(arg0, s32 *, 0xBD0) = 0xFFFF;
    }
__repair_addr = (char *)(M2C_FIELD(arg0, void **, 0x14));

    M2C_FIELD(__repair_addr, s32 *, 0x7168) = -1;
}
