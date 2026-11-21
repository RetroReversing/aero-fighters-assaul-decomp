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

s32 func_80213020();
s32 func_802164C8();
s32 func_80218C74();
s32 func_80218D34();
s32 func_80231A24();
s32 func_80231C58();
extern void *D_8024E710;
extern char D_80252F50[];
extern s32 D_8025C398;
extern s32 D_8025C39C;
extern s32 D_8025C3A0;
extern s32 D_8025C3A4;
extern u16 D_80280BD8;

s32 func_80213490(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    s32 sp12C;
    s32 sp128;
    s32 sp124;
    s32 sp114;
    s32 sp110;
    s32 sp10C;
    f32 sp104;
    f32 sp100;
    f32 spFC;
    void *spE8;
    void *spE4;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    s32 spB4;
    s32 spB0;
    s32 spA4;
    s32 spA0;
    f32 *temp_a1_2;
    f32 *temp_v0_4;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs2;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_ft0;
    f32 temp_ft3;
    f32 temp_ft4;
    f32 temp_ft5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    s32 temp_a0;
    s32 temp_t4;
    s32 temp_t4_2;
    s32 temp_t5;
    s32 temp_t6;
    s32 temp_t8;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_v0;
    u8 temp_v0_3;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_s4;
    void *temp_s5;
    void *temp_t0;
    void *temp_t1;
    void *temp_v0_2;
    void *temp_v1_3;

    temp_t1 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 4) + (arg0 * 4));
    spE8 = temp_t1;
    if (temp_t1 == NULL) {
        func_80231A24(D_80252F50, arg0);
        return 0;
    }
    temp_fs0 = arg1 + arg4;
    temp_ft5 = M2C_FIELD(spE8, f32 *, 0);
    if (temp_fs0 < temp_ft5) {
        return 0;
    }
    temp_fs1 = arg1 - arg4;
    if (M2C_FIELD(spE8, f32 *, 0xC) < temp_fs1) {
        return 0;
    }
    temp_fa1 = arg2 + arg4;
    temp_fa0 = M2C_FIELD(spE8, f32 *, 4);
    if (temp_fa1 < temp_fa0) {
        return 0;
    }
    temp_ft4 = arg2 - arg4;
    if (M2C_FIELD(spE8, f32 *, 0x10) < temp_ft4) {
        return 0;
    }
    if ((arg3 + arg4) < M2C_FIELD(spE8, f32 *, 8)) {
        return 0;
    }
    if (M2C_FIELD(spE8, f32 *, 0x14) < (arg3 - arg4)) {
        return 0;
    }
    temp_fv0 = M2C_FIELD(spE8, f32 *, 0x1C);
    temp_fv1 = M2C_FIELD(spE8, f32 *, 0x20);
    var_v0 = (s32) ((temp_fs1 - temp_ft5) / temp_fv0);
    var_a0 = (s32) ((temp_fs0 - temp_ft5) / temp_fv0);
    sp114 = (s32) ((temp_ft4 - temp_fa0) / temp_fv1);
    sp110 = (s32) ((temp_fa1 - temp_fa0) / temp_fv1);
    if (var_v0 < 0) {
        var_v0 = 0;
    }
    temp_v1 = M2C_FIELD(spE8, u8 *, 0x18) - 1;
    if (temp_v1 < var_a0) {
        var_a0 = temp_v1;
    }
    if (sp114 < 0) {
        sp114 = 0;
    }
    temp_v1_2 = M2C_FIELD(spE8, u8 *, 0x19) - 1;
    if (temp_v1_2 < sp110) {
        sp110 = temp_v1_2;
    }
    D_8025C398 = 0;
    temp_ft0 = M2C_FIELD(spE8, f32 *, 0);
    spC8 = temp_ft0;
    sp12C = var_v0;
    spC4 = M2C_FIELD(spE8, f32 *, 0x1C) + temp_ft0;
    if (var_a0 >= var_v0) {
        spA0 = var_a0 + 1;
        do {
            temp_ft3 = M2C_FIELD(spE8, f32 *, 4);
            spBC = temp_ft3;
            sp128 = sp114;
            spC0 = M2C_FIELD(spE8, f32 *, 0x20) + temp_ft3;
            if (sp110 >= sp114) {
                spA4 = sp110 + 1;
                do {
                    temp_t4 = (M2C_FIELD(spE8, u8 *, 0x18) * sp128) + sp12C;
                    sp10C = temp_t4;
                    temp_v1_3 = M2C_FIELD(spE8, s32 *, 0x28) + (temp_t4 * 0x4C);
                    if (temp_v1_3 != NULL) {
                        temp_s5 = M2C_FIELD(temp_v1_3, void **, 0x40);
                        if (temp_s5 != NULL) {
                            sp104 = arg1 - M2C_FIELD(temp_v1_3, f32 *, 0x30);
                            sp100 = arg2 - M2C_FIELD(temp_v1_3, f32 *, 0x34);
                            spFC = arg3 - M2C_FIELD(temp_v1_3, f32 *, 0x38);
                            temp_v0 = M2C_FIELD(temp_v1_3, u8 *, 0x48);
                            spE4 = temp_v1_3;
                            temp_fs4 = M2C_FIELD(temp_s5, f32 *, 0x2C) * arg4;
                            sp124 = 0;
                            if (temp_v0 != 0) {
                                spE4 = temp_v1_3;
                                func_80218C74((s16) temp_v0, &sp104, &sp100);
                            }
                            temp_fv0_2 = M2C_FIELD(temp_s5, f32 *, 0x2C);
                            temp_fs1_2 = temp_fv0_2 * sp104;
                            temp_a0 = func_80218D34(sp104, sp100, arg4, spC8, spC4, spBC, spC0) & 0xFFFF;
                            temp_fs2 = temp_fv0_2 * sp100;
                            var_v0_2 = 0;
                            temp_fs3 = temp_fv0_2 * spFC;
                            if ((s32) M2C_FIELD(temp_s5, u16 *, 0xC) > 0) {
                                spB0 = temp_a0;
                                do {
                                    temp_s4 = M2C_FIELD(temp_s5, s32 *, 8) + var_v0_2;
                                    if (M2C_FIELD(temp_s4, u16 *, 0x16) & spB0) {
                                        spB4 = var_v0_2;
                                        if (func_802164C8(sp104, sp100, spFC, arg4, M2C_FIELD(temp_s4, f32 *, 0x1C), M2C_FIELD(temp_s4, f32 *, 0x20), M2C_FIELD(temp_s4, f32 *, 0x24), M2C_FIELD(temp_s4, f32 *, 0x28)) == 0) {

                                        } else {
                                            var_s1 = 0;
                                            if ((s32) M2C_FIELD(temp_s4, u16 *, 0x14) > 0) {
                                                do {
                                                    temp_t0 = M2C_FIELD(temp_s4, s32 *, 0x10) + (var_s1 * 8);
                                                    if (M2C_FIELD(temp_t0, u16 *, 6) & spB0) {
                                                        temp_v1_4 = M2C_FIELD(temp_s5, s32 *, 0);
                                                        temp_v0_2 = temp_v1_4 + (M2C_FIELD(temp_t0, u16 *, 0) * 0x10);
                                                        temp_a0_2 = temp_v1_4 + (M2C_FIELD(temp_t0, u16 *, 2) * 0x10);
                                                        temp_a1 = temp_v1_4 + (M2C_FIELD(temp_t0, u16 *, 4) * 0x10);
                                                        if (func_80213020(temp_fs1_2, temp_fs2, temp_a0_2, temp_a1, temp_fs3, temp_fs4, (f32) M2C_FIELD(temp_v0_2, s16 *, 0), (f32) M2C_FIELD(temp_v0_2, s16 *, 2), (f32) M2C_FIELD(temp_v0_2, s16 *, 4), (f32) M2C_FIELD(temp_a0_2, s16 *, 0), (f32) M2C_FIELD(temp_a0_2, s16 *, 2), (f32) M2C_FIELD(temp_a0_2, s16 *, 4), (f32) M2C_FIELD(temp_a1, s16 *, 0), (f32) M2C_FIELD(temp_a1, s16 *, 2), (f32) M2C_FIELD(temp_a1, s16 *, 4), (D_8025C398 * 0xC) + D_8025C3A4, (D_8025C398 * 4) + D_8025C3A0) == 0) {

                                                        } else {
                                                            temp_v0_3 = M2C_FIELD(spE4, u8 *, 0x48);
                                                            if (temp_v0_3 != 0) {
                                                                temp_a1_2 = (D_8025C398 * 0xC) + D_8025C3A4;
                                                                func_80218C74((s16) ((s32) temp_v0_3 * -1), temp_a1_2, temp_a1_2 + 4);
                                                            }
                                                            temp_v0_4 = D_8025C3A0 + (D_8025C398 * 4);
                                                            *temp_v0_4 /= -arg4 * M2C_FIELD(temp_s5, f32 *, 0x2C);
                                                            *(s32 *)(D_8025C39C + (D_8025C398 * 4)) = (sp10C << 0x16) + ((sp124 & 0x3FF) << 0xC) + (var_s1 & 0xFFF);
                                                            temp_t5 = D_8025C398 + 1;
                                                            D_8025C398 = temp_t5;
                                                            if (temp_t5 >= (s32) D_80280BD8) {
                                                                func_80231C58(temp_t5, "DB_NQUERIES", &D_80280BD8);
                                                                D_8025C398 -= 1;
                                                            }
                                                        }
                                                    }
                                                    var_s1 += 1;
                                                } while (var_s1 < (s32) M2C_FIELD(temp_s4, u16 *, 0x14));
                                            }
                                        }
                                        var_v0_2 = spB4;
                                    }
                                    var_v0_2 += 0x2C;
                                    temp_t4_2 = sp124 + 1;
                                    sp124 = temp_t4_2;
                                } while (temp_t4_2 < (s32) M2C_FIELD(temp_s5, u16 *, 0xC));
                            }
                        }
                    }
                    temp_t8 = sp128 + 1;
                    sp128 = temp_t8;
                } while (spA4 != temp_t8);
            }
            temp_t6 = sp12C + 1;
            sp12C = temp_t6;
        } while (spA0 != temp_t6);
    }
    *arg5 = D_8025C39C;
    *arg6 = D_8025C3A0;
    *arg7 = D_8025C3A4;
    return D_8025C398;
}
