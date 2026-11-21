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

s32 func_802164C8();
s32 func_802168C4();
s32 func_80218C74();
s32 func_80218D34();
f32 func_8022AA40();
s32 func_80231A24();
s32 func_80231C58();
s32 func_80234D30();
extern void *D_8024E710;
extern char D_80252F8C[];
extern s32 D_8025C394;
extern s32 D_8025C398;
extern s32 D_8025C39C;
extern s32 D_8025C3A0;
extern s32 D_8025C3A4;
extern u16 D_80280BD8;

s32 func_80213BA8(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    s32 spFC;
    s32 spF8;
    s32 spE8;
    s32 spE4;
    f32 spD8;
    f32 spD4;
    f32 spC8;
    void *spB4;
    s32 sp98;
    s32 sp94;
    s32 sp90;
    f32 *temp_a1;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fa1_2;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    s32 temp_a0;
    s32 temp_t2;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s7;
    s32 var_v0;
    u8 temp_v0;
    void *temp_fp;
    void *temp_s0;
    void *temp_s2;
    void *temp_s4;
    void *temp_s5;
    void *temp_t0;

    temp_t0 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 4) + (arg0 * 4));
    spB4 = temp_t0;
    if (temp_t0 == NULL) {
        func_80231A24(D_80252F8C, arg0);
        return 0;
    }
    temp_ft4 = arg1 + arg4;
    temp_fa0 = M2C_FIELD(spB4, f32 *, 0);
    if (temp_ft4 < temp_fa0) {
        return 0;
    }
    temp_ft5 = arg1 - arg4;
    if (M2C_FIELD(spB4, f32 *, 0xC) < temp_ft5) {
        return 0;
    }
    temp_fs0 = arg2 + arg4;
    temp_fa1 = M2C_FIELD(spB4, f32 *, 4);
    if (temp_fs0 < temp_fa1) {
        return 0;
    }
    temp_fs2 = arg2 - arg4;
    if (M2C_FIELD(spB4, f32 *, 0x10) < temp_fs2) {
        return 0;
    }
    temp_fv0 = M2C_FIELD(spB4, f32 *, 0x1C);
    temp_fv1 = M2C_FIELD(spB4, f32 *, 0x20);
    var_v0 = (s32) ((temp_ft5 - temp_fa0) / temp_fv0);
    var_a0 = (s32) ((temp_ft4 - temp_fa0) / temp_fv0);
    spE8 = (s32) ((temp_fs2 - temp_fa1) / temp_fv1);
    spE4 = (s32) ((temp_fs0 - temp_fa1) / temp_fv1);
    if (var_v0 < 0) {
        var_v0 = 0;
    }
    temp_v1 = M2C_FIELD(spB4, u8 *, 0x18) - 1;
    if (temp_v1 < var_a0) {
        var_a0 = temp_v1;
    }
    if (spE8 < 0) {
        spE8 = 0;
    }
    temp_v1_2 = M2C_FIELD(spB4, u8 *, 0x19) - 1;
    if (temp_v1_2 < spE4) {
        spE4 = temp_v1_2;
    }
    D_8025C398 = 0;
    temp_fs5 = M2C_FIELD(spB4, f32 *, 0);
    spFC = var_v0;
    spC8 = M2C_FIELD(spB4, f32 *, 0x1C) + temp_fs5;
    if (var_a0 >= var_v0) {
        sp90 = var_a0 + 1;
        do {
            temp_fs3 = M2C_FIELD(spB4, f32 *, 4);
            spF8 = spE8;
            temp_fs4 = M2C_FIELD(spB4, f32 *, 0x20) + temp_fs3;
            if (spE4 >= spE8) {
                sp94 = spE4 + 1;
                do {
                    temp_s4 = M2C_FIELD(spB4, s32 *, 0x28) + (((M2C_FIELD(spB4, u8 *, 0x18) * spF8) + spFC) * 0x4C);
                    if (temp_s4 != NULL) {
                        temp_fp = M2C_FIELD(temp_s4, void **, 0x40);
                        if (temp_fp != NULL) {
                            var_s7 = 0;
                            spD8 = arg1 - M2C_FIELD(temp_s4, f32 *, 0x30);
                            spD4 = arg2 - M2C_FIELD(temp_s4, f32 *, 0x34);
                            temp_v0 = M2C_FIELD(temp_s4, u8 *, 0x48);
                            temp_fs0_2 = arg3 - M2C_FIELD(temp_s4, f32 *, 0x38);
                            if (temp_v0 != 0) {
                                func_80218C74((s16) temp_v0, &spD8, &spD4);
                            }
                            temp_a0 = func_80218D34(spD8, spD4, arg4, temp_fs5, spC8, temp_fs3, temp_fs4) & 0xFFFF;
                            if ((s32) M2C_FIELD(temp_fp, u16 *, 0x14) > 0) {
                                sp98 = temp_a0;
                                do {
                                    temp_s2 = M2C_FIELD(temp_fp, s32 *, 0x10) + (var_s7 << 5);
                                    if (M2C_FIELD(temp_s2, u16 *, 0x18) & sp98) {
                                        temp_s5 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x1C) + (M2C_FIELD(temp_s2, u16 *, 0) * 4));
                                        if (func_802164C8(spD8, spD4, temp_fs0_2, arg4, M2C_FIELD(temp_s2, f32 *, 0xC), M2C_FIELD(temp_s2, f32 *, 0x10), M2C_FIELD(temp_s2, f32 *, 0x14), M2C_FIELD(temp_s5, f32 *, 0x1C)) == 0) {

                                        } else {
                                            D_8025C394 = (M2C_FIELD(temp_s4, u16 *, 0x4A) << 0xC) | var_s7;
                                            var_s1 = D_8025C398;
                                            if (M2C_FIELD(temp_s5, u8 *, 0x11) & 6) {
                                                func_802168C4(spD8, spD4, temp_fs0_2, arg4, temp_s2, M2C_FIELD(temp_fp, f32 *, 0x2C));
                                            } else {
                                                *(s32 *)(D_8025C39C + (D_8025C398 * 4)) = D_8025C394;
                                                temp_s0 = (D_8025C398 * 0xC) + D_8025C3A4;
                                                M2C_FIELD(temp_s0, f32 *, 0) = (f32) (spD8 - M2C_FIELD(temp_s2, f32 *, 0xC));
                                                M2C_FIELD(temp_s0, f32 *, 4) = (f32) (spD4 - M2C_FIELD(temp_s2, f32 *, 0x10));
                                                M2C_FIELD(temp_s0, f32 *, 8) = (f32) (temp_fs0_2 - M2C_FIELD(temp_s2, f32 *, 0x14));
                                                func_80234D30(temp_s0, temp_s0);
                                                temp_fv0_2 = M2C_FIELD(temp_s0, f32 *, 0);
                                                temp_fv1_2 = M2C_FIELD(temp_s0, f32 *, 4);
                                                temp_fa1_2 = M2C_FIELD(temp_s0, f32 *, 8);
                                                temp_fv1_3 = (M2C_FIELD(temp_s5, f32 *, 0x1C) - func_8022AA40((temp_fv0_2 * temp_fv0_2) + (temp_fv1_2 * temp_fv1_2) + (temp_fa1_2 * temp_fa1_2), temp_fa1_2)) / arg4;
                                                if (temp_fv1_3 < 0.0f) {
                                                    *(f32 *)(D_8025C3A0 + (D_8025C398 * 4)) = temp_fv1_3;
                                                } else {
                                                    *(f32 *)(D_8025C3A0 + (D_8025C398 * 4)) = 0.0f;
                                                }
                                                temp_t2 = D_8025C398 + 1;
                                                D_8025C398 = temp_t2;
                                                if (temp_t2 >= (s32) D_80280BD8) {
                                                    func_80231C58(temp_t2, "DB_NQUERIES", &D_80280BD8);
                                                    D_8025C398 -= 1;
                                                }
                                            }
                                            if (M2C_FIELD(temp_s4, u8 *, 0x48) != 0) {
                                                var_s0 = var_s1 * 0xC;
                                                if (var_s1 < D_8025C398) {
                                                    do {
                                                        temp_a1 = var_s0 + D_8025C3A4;
                                                        func_80218C74((s16) ((s32) M2C_FIELD(temp_s4, u8 *, 0x48) * -1), temp_a1, temp_a1 + 4);
                                                        var_s1 += 1;
                                                        var_s0 += 0xC;
                                                    } while (var_s1 < D_8025C398);
                                                }
                                            }
                                        }
                                    }
                                    var_s7 += 1;
                                } while (var_s7 < (s32) M2C_FIELD(temp_fp, u16 *, 0x14));
                            }
                        }
                    }
                    temp_t5 = spF8 + 1;
                    spF8 = temp_t5;
                } while (sp94 != temp_t5);
            }
            temp_t6 = spFC + 1;
            spFC = temp_t6;
        } while (sp90 != temp_t6);
    }
    *arg5 = D_8025C39C;
    *arg6 = D_8025C3A0;
    *arg7 = D_8025C3A4;
    return D_8025C398;
}
