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

s32 func_80225424();
u16 *func_8022B948();
s32 func_80231A24();
extern char D_80253BE4[];
extern char D_80253C20[];
extern void *D_802751E0;
extern s32 D_8027524C;

u16 *func_80226790(s32 arg0) {
    s32 sp6C;
    u16 *sp68;
    s32 sp60;
    u16 sp54;
    u16 sp52;
    u16 *sp4C;
    u16 *sp48;
    u16 sp44;
    u16 sp40;
    s32 temp_t0;
    s32 var_a0;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_v1;
    u16 *temp_v0;
    u16 *temp_v0_2;
    u16 *temp_v0_3;
    u16 *temp_v0_4;
    char *var_v0;
    u16 temp_a0;
    u16 temp_t2;
    u16 var_a1;
    void *temp_v1;
    void *temp_v1_2;

    func_80225424(&sp52, &arg0, 2);
    if ((s32) sp52 >= 0x1001) {
        func_80231A24(D_80253BE4, sp52);
        sp52 = 0x1000;
    }
    func_80225424(&sp54, &arg0, 2);
    func_80225424(&sp44, &arg0, 4);
    func_80225424(&sp40, &arg0, 4);
    if ((M2C_BITWISE(f32, sp44) != 0.0f) || (M2C_BITWISE(f32, sp40) != 0.0f)) {
        temp_v0_2 = func_8022B948(0x1C, 4);
        sp4C = temp_v0_2;
        M2C_FIELD(temp_v0_2, f32 *, 0) = 1.0f;
        M2C_FIELD(temp_v0_2, f32 *, 4) = 1.0f;
        M2C_FIELD(temp_v0_2, f32 *, 8) = (f32) sp44;
        M2C_FIELD(temp_v0_2, s8 *, 0x1A) = 1;
        M2C_FIELD(temp_v0_2, f32 *, 0x10) = 0.0f;
        M2C_FIELD(temp_v0_2, f32 *, 0x14) = 0.0f;
        M2C_FIELD(temp_v0_2, f32 *, 0xC) = (f32) sp40;
    } else {
        sp4C = NULL;
    }
    func_80225424(&sp44, &arg0, 4);
    func_80225424(&sp40, &arg0, 4);
    if ((M2C_BITWISE(f32, sp44) != 0.0f) || (M2C_BITWISE(f32, sp40) != 0.0f)) {
        temp_v0_3 = func_8022B948(0x1C, 4);
        sp48 = temp_v0_3;
        M2C_FIELD(temp_v0_3, f32 *, 0) = 1.0f;
        M2C_FIELD(temp_v0_3, f32 *, 4) = 1.0f;
        M2C_FIELD(temp_v0_3, f32 *, 8) = (f32) sp44;
        M2C_FIELD(temp_v0_3, s8 *, 0x1A) = 1;
        M2C_FIELD(temp_v0_3, f32 *, 0x10) = 0.0f;
        M2C_FIELD(temp_v0_3, f32 *, 0x14) = 0.0f;
        M2C_FIELD(temp_v0_3, f32 *, 0xC) = (f32) sp40;
    } else {
        sp48 = NULL;
    }
    arg0 += sp52;
    temp_v0_4 = func_8022B948(sp54 * 8, 8);
    sp68 = temp_v0_4;
    func_80225424(temp_v0_4, &arg0, sp54 * 8);
    temp_v0 = func_8022B948(0x2C, 4);
    func_80225424(temp_v0 + 0xA, &arg0, 2);
    func_80225424(temp_v0 + 0xC, &arg0, 2);
    func_80225424(temp_v0 + 0xE, &arg0, 1);
    func_80225424(temp_v0 + 0xF, &arg0, 1);
    func_80225424(temp_v0 + 0x10, &arg0, 1);
    func_80225424(temp_v0 + 0x12, &arg0, 2);
    func_80225424(temp_v0 + 0x14, &arg0, 2);
    func_80225424(temp_v0 + 0x20, &arg0, 2);
    func_80225424(temp_v0 + 0x22, &arg0, 1);
    func_80225424(temp_v0 + 0x23, &arg0, 1);
    func_80225424(temp_v0 + 0x24, &arg0, 1);
    func_80225424(temp_v0 + 0x25, &arg0, 1);
    func_80225424(temp_v0 + 0x26, &arg0, 1);
    func_80225424(temp_v0 + 0x28, &arg0, 4);
    func_80225424(temp_v0 + 0x27, &arg0, 1);
    M2C_FIELD(temp_v0, u16 *, 8) = sp52;
    temp_t2 = M2C_FIELD(temp_v0, u16 *, 0x12);
    var_a1 = temp_t2 & 0xFFF;
    if (D_802751E0 != NULL) {
        temp_a0 = M2C_FIELD(D_802751E0, u16 *, 0);
        var_a3 = 0;
        var_v1 = 0;
        if ((s32) temp_a0 > 0) {
            var_v0 = M2C_FIELD(D_802751E0, u16 **, 8);
loop_13:
            var_a3 += 1;
            var_v0 += 2;
            if (var_a1 == *(u16 *)var_v0) {
                var_a1 = *(u16 *)(M2C_FIELD(D_802751E0, s32 *, 4) + var_v1);
            } else {
                var_v1 += 2;
                if (var_a3 < (s32) temp_a0) {
                    goto loop_13;
                }
            }
        }
    }
    temp_t0 = *(s32 *)(D_8027524C + (var_a1 * 4));
    var_a3_2 = 0;
    if (temp_t0 == 0) {
        sp60 = 0;
        sp6C = temp_t0;
        func_80231A24(D_80253C20, var_a1, temp_t2, 0);
        var_a3_2 = sp60;
    }
    M2C_FIELD(temp_v0, u16 **, 4) = sp68;
    M2C_FIELD(temp_v0, s32 *, 0) = temp_t0;
    var_a0 = 0;
    M2C_FIELD(temp_v0, u16 **, 0x18) = sp4C;
    M2C_FIELD(temp_v0, u16 **, 0x1C) = sp48;
    if ((s32) sp54 > 0) {
        if (sp54 & 1) {
            var_a3_2 = 1;
            if (M2C_FIELD(sp68, u8 *, 0) == 0xFD) {
                M2C_FIELD(sp68, s32 *, 4) |= (temp_t0 + 0x80000000);
                var_a0 = 1;
            }
            if (sp54 != 1) {
                goto block_23;
            }
        } else {
block_23:
            do {
                temp_v1 = (var_a3_2 * 8) + sp68;
                if (M2C_FIELD(temp_v1, u8 *, 0) == 0xFD) {
                    if (var_a0 == 0) {
                        M2C_FIELD(temp_v1, s32 *, 4) |= (temp_t0 + 0x80000000);
                    } else {
                        M2C_FIELD(temp_v1, s32 *, 4) |= (*(s32 *)(D_8027524C + (M2C_FIELD(temp_v0, u16 *, 0x14) * 4)) + 0x80000000);
                    }
                    var_a0 += 1;
                }
                temp_v1_2 = ((var_a3_2 + 1) * 8) + sp68;
                if (M2C_FIELD(temp_v1_2, u8 *, 0) == 0xFD) {
                    if (var_a0 == 0) {
                        M2C_FIELD(temp_v1_2, s32 *, 4) |= (temp_t0 + 0x80000000);
                    } else {
                        M2C_FIELD(temp_v1_2, s32 *, 4) |= (*(s32 *)(D_8027524C + (M2C_FIELD(temp_v0, u16 *, 0x14) * 4)) + 0x80000000);
                    }
                    var_a0 += 1;
                }
                var_a3_2 += 2;
            } while (var_a3_2 != sp54);
        }
    }
    return temp_v0;
}
