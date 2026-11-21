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

void func_80297910(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a2;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_a2 != 0xFFFF) {
        func_8021BAE0(temp_a2, arg0, temp_a2);
        M2C_FIELD(arg0, s32 *, 0) = 0xFFFF;
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_a0 != 0xFFFF) {
        func_8021BAE0(temp_a0, arg0);
        M2C_FIELD(arg0, s32 *, 4) = 0xFFFF;
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_a0_2 != 0xFFFF) {
        func_8021BAE0(temp_a0_2, arg0);
        M2C_FIELD(arg0, s32 *, 8) = 0xFFFF;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0_3 != 0xFFFF) {
        func_8021BAE0(temp_a0_3, arg0);
        M2C_FIELD(arg0, s32 *, 0xC) = 0xFFFF;
    }
}
