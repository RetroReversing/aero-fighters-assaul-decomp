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

f32 func_80222E50();
extern f32 D_80255350;
extern f32 D_80255354;
extern u16 D_80280BF4;
extern s32 D_80283940;
extern s32 D_80283948;
extern s32 D_8028394C;
extern u8 D_80283954;

void func_802333B0(void) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 temp_fv1_6;
    s32 var_a0;
    s32 var_a1;
    void *var_v0;

    if (D_80283954 != 0) {
        temp_fv0 = func_80222E50();
        var_a1 = 0;
        var_a0 = D_80280BF4 + D_80283948;
        if (var_a0 > 0) {
            do {
                if (var_a1 < (s32) D_80280BF4) {
                    var_v0 = (var_a1 * 0x1C) + D_80283940;
                } else {
                    var_v0 = *(s32 *)(D_8028394C + (var_a1 * 4) + -(D_80280BF4 * 4));
                }
                var_a1 += 1;
                if (M2C_FIELD(var_v0, u8 *, 0x1A) != 0) {
                    if (M2C_FIELD(var_v0, u8 *, 0x18) != 3) {
                        M2C_FIELD(var_v0, f32 *, 0x10) += (M2C_FIELD(var_v0, f32 *, 8) * temp_fv0);
                    }
                    if (M2C_FIELD(var_v0, u8 *, 0x18) == 0) {
                        if (M2C_FIELD(var_v0, f32 *, 8) > 0.0f) {
                            temp_fv1 = M2C_FIELD(var_v0, f32 *, 0x10);
                            if (temp_fv1 >= 1.0f) {
                                M2C_FIELD(var_v0, f32 *, 0x10) = (f32) (temp_fv1 - 1.0f);
                            }
                        }
                        if (M2C_FIELD(var_v0, f32 *, 8) < 0.0f) {
                            temp_fv1_2 = M2C_FIELD(var_v0, f32 *, 0x10);
                            if (temp_fv1_2 <= 0.0f) {
                                M2C_FIELD(var_v0, f32 *, 0x10) = (f32) (temp_fv1_2 + 1.0f);
                            }
                        }
                    } else if (M2C_FIELD(var_v0, u8 *, 0x18) == 2) {
                        temp_fv1_3 = M2C_FIELD(var_v0, f32 *, 0x10);
                        if (temp_fv1_3 >= 1.0f) {
                            M2C_FIELD(var_v0, f32 *, 0x10) = (f32) D_80255354;
                            M2C_FIELD(var_v0, f32 *, 8) = (f32) -M2C_FIELD(var_v0, f32 *, 8);
                        } else if (temp_fv1_3 <= 0.0f) {
                            M2C_FIELD(var_v0, f32 *, 0x10) = (f32) D_80255350;
                            M2C_FIELD(var_v0, f32 *, 8) = (f32) -M2C_FIELD(var_v0, f32 *, 8);
                        }
                    } else if (M2C_FIELD(var_v0, u8 *, 0x18) == 1) {
                        if ((M2C_FIELD(var_v0, f32 *, 8) > 0.0f) && (M2C_FIELD(var_v0, f32 *, 0x10) >= 1.0f)) {
                            M2C_FIELD(var_v0, f32 *, 0x10) = 1.0f;
                            M2C_FIELD(var_v0, u8 *, 0x1A) = 0U;
                        }
                        if ((M2C_FIELD(var_v0, f32 *, 8) < 0.0f) && (M2C_FIELD(var_v0, f32 *, 0x10) <= 0.0f)) {
                            M2C_FIELD(var_v0, f32 *, 0x10) = 0.0f;
                            M2C_FIELD(var_v0, u8 *, 0x1A) = 0U;
                        }
                    }
                    if (M2C_FIELD(var_v0, u8 *, 0x19) != 3) {
                        M2C_FIELD(var_v0, f32 *, 0x14) += (M2C_FIELD(var_v0, f32 *, 0xC) * temp_fv0);
                    }
                    if (M2C_FIELD(var_v0, u8 *, 0x19) == 0) {
                        if (M2C_FIELD(var_v0, f32 *, 0xC) > 0.0f) {
                            temp_fv1_4 = M2C_FIELD(var_v0, f32 *, 0x14);
                            if (temp_fv1_4 >= 1.0f) {
                                M2C_FIELD(var_v0, f32 *, 0x14) = (f32) (temp_fv1_4 - 1.0f);
                            }
                        }
                        if (M2C_FIELD(var_v0, f32 *, 0xC) < 0.0f) {
                            temp_fv1_5 = M2C_FIELD(var_v0, f32 *, 0x14);
                            if (temp_fv1_5 <= 0.0f) {
                                M2C_FIELD(var_v0, f32 *, 0x14) = (f32) (temp_fv1_5 + 1.0f);
                            }
                        }
                    } else if (M2C_FIELD(var_v0, u8 *, 0x19) == 2) {
                        temp_fv1_6 = M2C_FIELD(var_v0, f32 *, 0x14);
                        if (temp_fv1_6 >= 1.0f) {
                            M2C_FIELD(var_v0, f32 *, 0x14) = (f32) D_80255354;
                            M2C_FIELD(var_v0, f32 *, 0xC) = (f32) -M2C_FIELD(var_v0, f32 *, 0xC);
                        } else if (temp_fv1_6 <= 0.0f) {
                            M2C_FIELD(var_v0, f32 *, 0x14) = (f32) D_80255350;
                            M2C_FIELD(var_v0, f32 *, 0xC) = (f32) -M2C_FIELD(var_v0, f32 *, 0xC);
                        }
                    } else if (M2C_FIELD(var_v0, u8 *, 0x19) == 1) {
                        if ((M2C_FIELD(var_v0, f32 *, 0xC) > 0.0f) && (M2C_FIELD(var_v0, f32 *, 0x14) >= 1.0f)) {
                            M2C_FIELD(var_v0, f32 *, 0x14) = 1.0f;
                            M2C_FIELD(var_v0, u8 *, 0x1A) = 0U;
                        }
                        if ((M2C_FIELD(var_v0, f32 *, 0xC) < 0.0f) && (M2C_FIELD(var_v0, f32 *, 0x14) <= 0.0f)) {
                            M2C_FIELD(var_v0, f32 *, 0x14) = 0.0f;
                            M2C_FIELD(var_v0, u8 *, 0x1A) = 0U;
                        }
                    }
                    var_a0 = D_80280BF4 + D_80283948;
                }
            } while (var_a1 < var_a0);
        }
    }
}
