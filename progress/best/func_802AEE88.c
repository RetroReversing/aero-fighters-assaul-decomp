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

s32 func_80211B08();
s32 func_802129F4();
s32 func_80231A24();
s32 func_80308728();
extern char D_803265D0[];

f32 func_802AEE88(void *arg0, s32 arg1, s32 arg2) {
    f32 sp74;
    s32 sp6C;
    s32 sp5C;
    f32 var_fs0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x65FC);
    var_fs0 = 0.0f;
    if (temp_a1 == 0) {
        func_80231A24(D_803265D0, temp_a1);
        return 0.0f;
    }
    temp_v0 = func_80308728(temp_a1, temp_a1);
    if (temp_v0 != -1) {
        temp_v0_2 = func_80211B08(temp_v0, arg1, arg2, &sp6C);
        temp_v1 = temp_v0_2 & 0xFF;
        if (temp_v1 != 0) {
            var_s1 = 0;
            if (temp_v1 > 0) {
                var_s0 = 0;
                do {
                    func_802129F4(temp_v0, *(s32 *)(sp6C + var_s0), arg1, arg2, &sp74, &sp5C);
                    var_s1 += 1;
                    if (var_fs0 < sp74) {
                        var_fs0 = sp74;
                    }
                    var_s0 += 4;
                } while (var_s1 != (temp_v0_2 & 0xFF));
            }
        }
    }
    return var_fs0;
}
