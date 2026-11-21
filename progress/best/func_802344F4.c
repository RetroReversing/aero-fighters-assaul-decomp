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
s32 func_80233AB8();
s32 func_80233BA0();
s32 func_802341E0();
extern void *D_8024E710;
extern char D_802552A8[];
extern char D_802552CC[];
extern char D_802552FC[];
extern char D_80255328[];
extern u16 D_80280BEC;
extern s32 D_80283950;

void func_802344F4(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 *var_s0;
    s32 temp_s0;
    s32 temp_s0_10;
    s32 temp_s0_11;
    s32 temp_s0_12;
    s32 temp_s0_13;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s0_8;
    s32 temp_s0_9;
    s32 temp_s2;
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_t3;
    s32 temp_t6;
    s32 temp_v0;
    u32 temp_a1;
    void *temp_s1;

    if (arg0 >= (s32) D_80280BEC) {
        func_80231A24(D_802552A8, arg0);
        return;
    }
    var_s0 = &arg1;
    temp_s1 = (arg0 * 0x64) + D_80283950;
loop_3:
    temp_s0 = (s32) (var_s0 + 3) & ~3;
    temp_a1 = *(u32 *)temp_s0;
    var_s0 = temp_s0 + 4;
    switch (temp_a1) {
    case 1:
        temp_s0_2 = (s32) (var_s0 + 3) & ~3;
        M2C_FIELD(temp_s1, s16 *, 4) = (s16) *(s16 *)temp_s0_2;
        temp_s0_3 = (temp_s0_2 + 4 + 3) & ~3;
        if (M2C_FIELD(temp_s1, s16 *, 4) <= 0) {
            M2C_FIELD(temp_s1, s16 *, 4) = 1;
        }
        var_s0 = temp_s0_3 + 4;
        M2C_FIELD(temp_s1, s16 *, 6) = (s16) *(s16 *)temp_s0_3;
        if (M2C_FIELD(temp_s1, s16 *, 6) <= 0) {
            M2C_FIELD(temp_s1, s16 *, 6) = 1;
        }
        goto loop_3;
    case 2:
        temp_s0_4 = (s32) (var_s0 + 3) & ~3;
        temp_s0_5 = (temp_s0_4 + 7) & ~3;
        M2C_FIELD(temp_s1, s16 *, 8) = (s16) *(s16 *)temp_s0_4;
        var_s0 = temp_s0_5 + 4;
        M2C_FIELD(temp_s1, s16 *, 0xA) = (s16) *(s16 *)temp_s0_5;
        goto loop_3;
    case 7:
        temp_s0_6 = (s32) (var_s0 + 3) & ~3;
        temp_s0_7 = (temp_s0_6 + 7) & ~3;
        M2C_FIELD(temp_s1, s8 *, 0xE) = (s8) *(s8 *)temp_s0_6;
        temp_s0_8 = (temp_s0_7 + 7) & ~3;
        M2C_FIELD(temp_s1, s8 *, 0xF) = (s8) *(s8 *)temp_s0_7;
        temp_s0_9 = (temp_s0_8 + 7) & ~3;
        M2C_FIELD(temp_s1, s8 *, 0x10) = (s8) *(s8 *)temp_s0_8;
        var_s0 = temp_s0_9 + 4;
        M2C_FIELD(temp_s1, s8 *, 0x11) = (s8) *(s8 *)temp_s0_9;
        goto loop_3;
    case 3:
        temp_s0_10 = (s32) (var_s0 + 3) & ~3;
        temp_t0 = *(s32 *)temp_s0_10;
        var_s0 = temp_s0_10 + 4;
        M2C_FIELD(temp_s1, s8 *, 0) = (s8) temp_t0;
        goto loop_3;
    case 9:
        var_s0 = ((s32) (var_s0 + 3) & ~3) + 4;
        func_802341E0(temp_s1, M2C_FIELD(var_s0, s32 *, -4));
        goto loop_3;
    case 8:
        func_80231A24(D_802552CC, (s32) temp_a1);
        goto loop_3;
    case 5:
        temp_s0_11 = (s32) (var_s0 + 3) & ~3;
        temp_t3 = *(s32 *)temp_s0_11;
        var_s0 = temp_s0_11 + 4;
        temp_v0 = temp_t3 & 0xFFFF;
        M2C_FIELD(temp_s1, s16 *, 0xC) = (s16) temp_t3;
        if (temp_v0 != 0xFFF) {
            temp_s2 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x2C) + (temp_v0 * 4));
            if (temp_s2 == 0) {
                func_80231A24(D_802552FC, temp_v0);
                M2C_FIELD(temp_s1, s16 *, 0xC) = 0xFFF;
            } else {
                func_80233AB8(temp_s1, temp_s2);
                func_80233BA0(temp_s1, temp_s2);
            }
        }
        goto loop_3;
    case 10:
        temp_s0_12 = (s32) (var_s0 + 3) & ~3;
        temp_t0_2 = *(s32 *)temp_s0_12;
        var_s0 = temp_s0_12 + 4;
        if (temp_t0_2 == 0) {
            M2C_FIELD(temp_s1, u16 *, 0x2C) &= ~0x20;
        } else {
            M2C_FIELD(temp_s1, u16 *, 0x2C) |= 0x20;
        }
        goto loop_3;
    case 11:
        temp_s0_13 = (s32) (var_s0 + 3) & ~3;
        temp_t6 = *(s32 *)temp_s0_13;
        var_s0 = temp_s0_13 + 4;
        if (temp_t6 == 0) {
            M2C_FIELD(temp_s1, u16 *, 0x2C) &= ~1;
        } else {
            M2C_FIELD(temp_s1, u16 *, 0x2C) |= 1;
        }
        goto loop_3;
    default:
        func_80231A24(D_80255328, (s32) temp_a1);
        goto loop_3;
    }
}
