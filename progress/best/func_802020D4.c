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

s32 func_80201FB8();
s32 func_80231A24();
extern char D_80251FD4[];
extern char D_80252008[];
extern s32 D_80256DE0;
extern s32 D_80256DE4;
extern u16 D_80280BFA;

void func_802020D4(s32 arg0) {
    s32 *var_a2;
    s32 temp_s5;
    s32 temp_t2;
    s32 var_s0;
    s32 var_s1;
    void *temp_v0;

    temp_s5 = arg0 & 0xFF;
    var_s0 = 0;
    var_s1 = 0;
    if ((s32) D_80280BFA > 0) {
        do {
            temp_v0 = D_80256DE4 + (var_s0 * 0xB4);
            if (M2C_FIELD(temp_v0, u8 *, 0x8C) != 0xFF) {
                if (temp_s5 != 0) {
                    M2C_FIELD(temp_v0, s32 *, 0x98) |= 0x20;
                    func_80201FB8(var_s0 & 0xFF);
                }
                var_s1 = (var_s1 + 1) & 0xFF;
            }
            temp_t2 = (var_s0 + 1) & 0xFF;
            var_s0 = temp_t2;
        } while (temp_t2 < (s32) D_80280BFA);
    }
    if (var_s1 > 0) {
        if (temp_s5 != 0) {
            var_a2 = "released";
        } else {
            var_a2 = "still in use";
        }
        func_80231A24(D_80251FD4, var_s1, var_a2);
    }
    if (D_80256DE0 > 0) {
        func_80231A24(D_80252008, D_80256DE0);
    }
}
