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

s32 func_80231A24();
extern void *D_8024E710;
extern char D_802531A8[];
extern char D_802531D8[];
extern char D_80253204[];
extern char D_80253238[];
extern char D_8025326C[];
extern s32 D_8025C3E0;
extern u16 D_80280BE6;

void func_8021B240(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
int *__repair_home0 = &arg0;

    s32 *var_s0;
    s32 *var_v0;
    s32 *var_v1;
    s16 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_s1;

    if ((*__repair_home0) >= (s32) D_80280BE6) {
        func_80231A24(D_802531A8);
        return;
    }
    temp_s1 = ((*__repair_home0) * 0x24) + D_8025C3E0;
    var_s0 = &arg1;
    if (M2C_FIELD(temp_s1, u16 *, 0) == 0xFFFF) {
        func_80231A24(D_802531D8);
        return;
    }
loop_5:
    temp_s0 = (s32) ((s8 *) var_s0 + 3) & ~3;
    temp_a1 = M2C_FIELD(temp_s0, s16 *, 2);
    temp_s0_2 = temp_s0 + 4;
    switch (temp_a1) {
    default:
        func_80231A24(D_8025326C, (s32) temp_a1);
        break;
    case 1:
        if (temp_s0_2 & 1) {
            var_s0 = temp_s0_2 + 7;
            var_v0 = var_s0 - 0x16;
        } else {
            if (temp_s0_2 & 2) {
                var_s0 = temp_s0_2 + 0xA;
                var_v1 = var_s0 - 0x28;
            } else {
                var_s0 = ((temp_s0_2 + 7) & ~7) + 8;
                var_v1 = var_s0;
            }
            var_v0 = var_v1;
        }
        M2C_FIELD(temp_s1, f32 *, 0xC) = (f32) (M2C_FIELD(*(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x1C) + (M2C_FIELD(temp_s1, u16 *, 0) * 4)), f32 *, 0x1C) * (f32) M2C_FIELD(var_v0, f64 *, -8));
        goto loop_5;
    case 2:
        temp_s0_3 = (temp_s0_2 + 3) & ~3;
        temp_v0 = *(s32 *)temp_s0_3;
        var_s0 = temp_s0_3 + 4;
        if (temp_v0 >= 0x20) {
            func_80231A24(D_80253204, (s32) temp_a1);
        } else {
            M2C_FIELD(temp_s1, s32 *, 0x10) &= ~(1 << temp_v0);
        }
        goto loop_5;
    case 3:
        temp_s0_4 = (temp_s0_2 + 3) & ~3;
        temp_v0_2 = *(s32 *)temp_s0_4;
        var_s0 = temp_s0_4 + 4;
        if (temp_v0_2 >= 0x20) {
            func_80231A24(D_80253238, (s32) temp_a1);
        } else {
            M2C_FIELD(temp_s1, s32 *, 0x10) |= (1 << temp_v0_2);
        }
        goto loop_5;
    case 4:
        temp_s0_5 = (temp_s0_2 + 3) & ~3;
        temp_s0_6 = (temp_s0_5 + 7) & ~3;
        M2C_FIELD(temp_s1, s32 *, 0x14) = (s32) *(s32 *)temp_s0_5;
        var_s0 = temp_s0_6 + 4;
        M2C_FIELD(temp_s1, s32 *, 0x1C) = (s32) *(s32 *)temp_s0_6;
        goto loop_5;
    case 5:
        temp_s0_7 = (temp_s0_2 + 3) & ~3;
        temp_s0_8 = (temp_s0_7 + 7) & ~3;
        M2C_FIELD(temp_s1, s32 *, 0x18) = (s32) *(s32 *)temp_s0_7;
        var_s0 = temp_s0_8 + 4;
        M2C_FIELD(temp_s1, s32 *, 0x20) = (s32) *(s32 *)temp_s0_8;
        goto loop_5;
    }
}
