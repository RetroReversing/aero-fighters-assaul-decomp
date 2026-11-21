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

s32 func_80238E34();
s32 func_802450E8();
s32 func_80245AD0();
s32 func_80245B14();
s32 func_80245B40();

s32 func_80238D94(s32 arg0, void *arg1, s32 arg2) {
    s32 sp24;
    s32 temp_v0;
    s32 temp_v0_2;

    func_80245AD0();
    sp24 = func_80238E34(arg0, arg2);
    func_80245B14();
    if (sp24 != 0) {
        return sp24;
    }
    M2C_FIELD(arg1, s32 *, 4) = arg0;
    M2C_FIELD(arg1, s32 *, 0) = 0;
    M2C_FIELD(arg1, u8 *, 0x65) = 0xFF;
    M2C_FIELD(arg1, s32 *, 8) = arg2;
    temp_v0_2 = func_802450E8(arg1);
    if (temp_v0_2 != 0) {
        return temp_v0_2;
    }
    temp_v0 = func_80245B40(arg1);
    M2C_FIELD(arg1, s32 *, 0) |= 1;
    return temp_v0;
}
