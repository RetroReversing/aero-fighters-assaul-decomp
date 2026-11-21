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

s32 func_80244AC0();
s32 func_802456A0();
s32 func_80245710();

s32 func_80239E44(void *arg0, s32 arg1, u16 *arg2, s8 arg3) {
    s32 sp58;
    s32 sp38;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    M2C_FIELD(arg0, s8 *, 0x65) = arg3;
    temp_v0_2 = func_802456A0();
    var_s0 = 0;
    if (temp_v0_2 != 0) {
        return temp_v0_2;
    }
loop_3:
    temp_v0 = func_80245710(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), (((arg1 & 0xFF) * 8) + var_s0) & 0xFFFF, &sp38);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s8 *, 0x65) = 0;
        sp58 = temp_v0;
        func_802456A0(arg0);
        return temp_v0;
    }
    var_s0 += 1;
    *arg2 += func_80244AC0(&sp38, 0x20);
    if (var_s0 == 8) {
        M2C_FIELD(arg0, s8 *, 0x65) = 0;
        return func_802456A0(arg0);
    }
    goto loop_3;
}
