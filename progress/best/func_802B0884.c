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

s32 func_802E83EC();
s32 func_80317D90();
f32 func_80318340();
s32 func_80318764();
s32 func_8031A2EC();
s32 func_8031A2F4();

void func_802B0884(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp24;
    s32 sp1C;
    s32 temp_a0;
    s32 temp_v0;

    if (func_80318340(arg1) <= 0.0f) {
        if (arg2 == 4) {
            temp_a0 = arg0 + 0x365C;
            sp1C = temp_a0;
            if ((func_80317D90(temp_a0) != 0) && (func_8031A2EC(arg1) == 0)) {
                func_802E83EC(sp1C);
                func_8031A2F4(arg1, 1);
            }
        } else if (arg2 == 2) {
            temp_v0 = func_80318764(arg1);
            if (temp_v0 != 0) {
                sp24 = temp_v0;
                if (func_8031A2EC(arg1) == 0) {
                    func_802E83EC(sp24, sp24);
                    func_8031A2F4(arg1, 1);
                }
            }
        }
    }
}
