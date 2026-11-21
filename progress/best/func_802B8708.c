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

s32 func_8021F6F8();
s32 func_80221F44();
s32 func_8022331C();
s32 func_8022337C();
s32 func_802233EC();
s32 func_80223468();
extern u8 D_8032AA80;

void func_802B8708(void *arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9, f32 arg10, f32 arg11, s32 arg12, s32 arg13, u8 arg14) {
    s32 sp54;
    s32 sp50;
    s32 sp4C;
    s32 sp48;
    s32 sp44;
    s32 sp40;
    f32 sp3C;
    f32 sp34;                                       /* compiler-managed */
    s32 sp30;
    f32 sp2C;
    f32 temp_fv0;
    f32 var_fv0;
    s32 temp_a3;
    s32 temp_t2;
    s32 temp_t9;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a1;
    s32 var_v0;
    s32 var_v0_2;

    temp_fv0 = 1.0f - arg1;
    sp3C = temp_fv0;
    sp34 = temp_fv0;
    func_8022331C();
    func_802233EC(0x04C00000);
    func_80223468(0x94);
    if (arg14 == 3) {
        var_v0 = 0;
        if (D_8032AA80 == 0xC) {
            var_v0 = 1;
        }
        if (var_v0 != 0) {
            temp_v0 = arg2 / 2;
            var_a0 = temp_v0;
            sp4C = temp_v0 + (arg4 / 2);
            if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
                temp_t2 = arg3 / 2;
                sp50 = temp_t2 + 0x70;
                sp48 = temp_t2 + ((s32) ((f32) arg5 * arg1) / 2) + 0x70;
            } else {
                temp_t9 = arg3 / 2;
                sp50 = temp_t9 + 8;
                sp48 = temp_t9 + ((s32) ((f32) arg5 * arg1) / 2) + 8;
            }
        } else {
            var_a0 = arg2;
            sp50 = arg3;
            sp4C = arg2 + arg4;
            sp48 = arg3 + (s32) ((f32) arg5 * arg1);
        }
        sp54 = var_a0;
        func_80221F44(arg6, arg7, var_a0, arg4, arg8, arg9);
        func_8021F6F8(var_a0, sp4C, sp50, sp48, 0, 1.0f, 0.0f, 1.0f);
        if (sp34 > 0.0f) {
            var_v0_2 = 0;
            if (D_8032AA80 == 0xC) {
                var_v0_2 = 1;
            }
            if (var_v0_2 != 0) {
                if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
                    sp44 = sp48;
                    sp48 = sp50 + (arg5 / 2);
                } else {
                    sp44 = sp48;
                    sp48 = sp50 + (arg5 / 2);
                }
            } else {
                sp44 = sp48;
                sp48 = sp50 + arg5;
            }
            sp54 = var_a0;
            func_80221F44(arg10, arg11, var_a0, arg12, arg13);
            func_8021F6F8(var_a0, sp4C, sp44, sp48, 0, 1.0f, 0.0f, 1.0f);
        }
    } else {
        if (arg14 == 1) {
            var_a0_2 = arg2;
            var_fv0 = (f32) arg4;
            sp4C = arg2 + (s32) (var_fv0 * arg1);
        } else {
            var_fv0 = (f32) arg4;
            sp4C = arg2 + arg4;
            var_a0_2 = arg2 + (s32) (var_fv0 * sp3C);
        }
        sp30 = (s32) arg14;
        sp54 = var_a0_2;
        sp2C = var_fv0;
        func_80221F44(arg6, arg7, var_a0_2, arg4, arg8, arg9);
        temp_a3 = arg3 + arg5;
        sp34 = temp_a3;
        func_8021F6F8(0x3F800000, var_a0_2, sp4C, arg3, temp_a3, 0.0f, 1.0f, 0.0f, 1.0f);
        if (arg1 < 1.0f) {
            if (arg14 == 1) {
                sp4C = arg2 + (s32) (var_fv0 * arg1);
                var_a1 = arg2 + (s32) (var_fv0 * 1.0f);
            } else {
                sp4C = arg2;
                var_a1 = arg2 + (s32) (var_fv0 * sp3C);
            }
            sp40 = var_a1;
            func_80221F44(arg10, arg11, var_a1, arg12, arg13);
            func_8021F6F8(sp4C, var_a1, arg3, sp34, 0, 1.0f, 0.0f, 1.0f);
        }
    }
    func_8022337C();
}
