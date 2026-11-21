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

s32 func_802011D0();
s32 func_80231C9C();
extern char D_80251F44[];
extern s32 D_80256DE4;
extern u16 D_80280BFA;

void func_80201CE0(u8 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_a0_3;
    s32 *var_a0_4;
    s32 *var_v0;
    s32 *var_v1;
    s32 *var_v1_2;
    s32 *var_v1_3;
    s32 *var_v1_4;
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u16 temp_v1;
    u32 temp_a1;
    void *temp_a2;

    temp_v1 = D_80280BFA;
    if ((s32) arg0 >= (s32) temp_v1) {
        func_80231C9C("emitId < AUD_NEMITTERS", "_aobj.c", 0x1D5);
    }
    if (((s32) arg0 < (s32) temp_v1) && (arg0 != 0xFF)) {
        var_v0 = &arg1;
        temp_a2 = (arg0 * 0xB4) + D_80256DE4;
loop_5:
        temp_v0 = (s32) (var_v0 + 3) & ~3;
        temp_a1 = *(u32 *)temp_v0;
        temp_v0_2 = temp_v0 + 4;
        switch (temp_a1) {
        case 1:
            if (temp_v0_2 & 1) {
                var_v0 = temp_v0_2 + 7;
                var_v1 = var_v0 - 0x16;
            } else {
                if (temp_v0_2 & 2) {
                    var_v0 = temp_v0_2 + 0xA;
                    var_a0 = var_v0 - 0x28;
                } else {
                    var_v0 = ((temp_v0_2 + 7) & ~7) + 8;
                    var_a0 = var_v0;
                }
                var_v1 = var_a0;
            }
            temp_fv0 = (f32) M2C_FIELD(var_v1, f64 *, -8);
            M2C_FIELD(temp_a2, f32 *, 0x90) = (f32) (temp_fv0 * temp_fv0);
            goto loop_5;
        case 2:
            if (temp_v0_2 & 1) {
                var_v0 = temp_v0_2 + 7;
                var_v1_2 = var_v0 - 0x16;
            } else {
                if (temp_v0_2 & 2) {
                    var_v0 = temp_v0_2 + 0xA;
                    var_a0_2 = var_v0 - 0x28;
                } else {
                    var_v0 = ((temp_v0_2 + 7) & ~7) + 8;
                    var_a0_2 = var_v0;
                }
                var_v1_2 = var_a0_2;
            }
            temp_fv0_2 = (f32) M2C_FIELD(var_v1_2, f64 *, -8);
            M2C_FIELD(temp_a2, f32 *, 0x94) = (f32) (temp_fv0_2 * temp_fv0_2);
            goto loop_5;
        case 4:
            if (temp_v0_2 & 1) {
                var_v0 = temp_v0_2 + 7;
                var_v1_3 = var_v0 - 0x16;
            } else {
                if (temp_v0_2 & 2) {
                    var_v0 = temp_v0_2 + 0xA;
                    var_a0_3 = var_v0 - 0x28;
                } else {
                    var_v0 = ((temp_v0_2 + 7) & ~7) + 8;
                    var_a0_3 = var_v0;
                }
                var_v1_3 = var_a0_3;
            }
            M2C_FIELD(temp_a2, f32 *, 0x84) = (f32) M2C_FIELD(var_v1_3, f64 *, -8);
            goto loop_5;
        case 3:
            if (temp_v0_2 & 1) {
                var_v0 = temp_v0_2 + 7;
                var_v1_4 = var_v0 - 0x16;
            } else {
                if (temp_v0_2 & 2) {
                    var_v0 = temp_v0_2 + 0xA;
                    var_a0_4 = var_v0 - 0x28;
                } else {
                    var_v0 = ((temp_v0_2 + 7) & ~7) + 8;
                    var_a0_4 = var_v0;
                }
                var_v1_4 = var_a0_4;
            }
            M2C_FIELD(temp_a2, f32 *, 0x80) = (f32) M2C_FIELD(var_v1_4, f64 *, -8);
            goto loop_5;
        case 5:
            temp_v0_3 = (temp_v0_2 + 3) & ~3;
            var_v0 = temp_v0_3 + 4;
            M2C_FIELD(temp_a2, s32 *, 0x98) = (s32) *(s32 *)temp_v0_3;
            goto loop_5;
        default:
            func_802011D0(D_80251F44, temp_a1, temp_a2, -8);
            break;
        }
    }
}
