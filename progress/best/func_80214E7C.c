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

extern unsigned short D_80280BE6;
extern unsigned short D_80280BD8;
s32 func_802164C8();
s32 func_802165D0();
f32 func_8022AA40();
s32 func_80231C58();
s32 func_80234D30();
extern void *D_8024E710;
extern s32 D_8025C394;
extern s32 D_8025C398;
extern s32 D_8025C39C;
extern s32 D_8025C3A0;
extern s32 D_8025C3A4;
extern s32 D_8025C3E0;
extern s32 D_8025C3E4;
extern char D_80280BC0[];

s32 func_80214E7C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s32 *arg4, s32 *arg5, s32 *arg6) {
    f32 temp_fa1;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 var_fs0;
    s32 temp_a0;
    s32 temp_t3;
    s32 var_s4;
    u16 temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s2;

    var_fs0 = arg3;
    D_8025C398 = 0;
    var_s4 = 0;
    if ((s32) D_80280BE6 > 0) {
loop_2:
        temp_s0 = (var_s4 * 0x24) + D_8025C3E0;
        temp_v0 = M2C_FIELD(temp_s0, u16 *, 0);
        if ((temp_v0 != 0xFFFF) && (M2C_FIELD(temp_s0, u8 *, 8) & 1) && (temp_s2 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x1C) + (temp_v0 * 4)), (temp_s2 != NULL))) {
            temp_fv0 = M2C_FIELD(temp_s0, f32 *, 0xC);
            temp_s1 = (*M2C_FIELD(temp_s0, u16 **, 4) << 6) + D_8025C3E4;
            var_fs0 *= M2C_FIELD(temp_s2, f32 *, 0x1C) / temp_fv0;
            if (func_802164C8(arg0, arg1, arg2, var_fs0, M2C_FIELD(temp_s1, f32 *, 0x30), M2C_FIELD(temp_s1, f32 *, 0x34), M2C_FIELD(temp_s1, f32 *, 0x38), temp_fv0) != 0) {
                D_8025C394 = var_s4;
                if (M2C_FIELD(temp_s2, u8 *, 0x11) & 6) {
                    func_802165D0(arg0, arg1, arg2, var_fs0, temp_s0);
                    if (D_8025C398 >= (s32) D_80280BD8) {

                    } else {
                        goto block_14;
                    }
                } else {
                    *(s32 *)(D_8025C39C + (D_8025C398 * 4)) = D_8025C394;
                    temp_s0_2 = (D_8025C398 * 0xC) + D_8025C3A4;
                    M2C_FIELD(temp_s0_2, f32 *, 0) = (f32) (arg0 - M2C_FIELD(temp_s1, f32 *, 0x30));
                    M2C_FIELD(temp_s0_2, f32 *, 4) = (f32) (arg1 - M2C_FIELD(temp_s1, f32 *, 0x34));
                    M2C_FIELD(temp_s0_2, f32 *, 8) = (f32) (arg2 - M2C_FIELD(temp_s1, f32 *, 0x38));
                    func_80234D30(temp_s0_2, temp_s0_2);
                    temp_fv0_2 = M2C_FIELD(temp_s0_2, f32 *, 0);
                    temp_fv1 = M2C_FIELD(temp_s0_2, f32 *, 4);
                    temp_fa1 = M2C_FIELD(temp_s0_2, f32 *, 8);
                    temp_fv1_2 = (M2C_FIELD(temp_s2, f32 *, 0x1C) - func_8022AA40((temp_fv0_2 * temp_fv0_2) + (temp_fv1 * temp_fv1) + (temp_fa1 * temp_fa1), temp_fa1)) / var_fs0;
                    if (temp_fv1_2 < 0.0f) {
                        *(f32 *)(D_8025C3A0 + (D_8025C398 * 4)) = temp_fv1_2;
                    } else {
                        *(f32 *)(D_8025C3A0 + (D_8025C398 * 4)) = 0.0f;
                    }
                    temp_a0 = D_8025C398 + 1;
                    D_8025C398 = temp_a0;
                    if (temp_a0 >= (s32) D_80280BD8) {
                        func_80231C58(temp_a0, "DB_NQUERIES", &D_80280BD8);
                        D_8025C398 -= 1;
                    }
                    goto block_14;
                }
            } else {
block_14:
                goto block_15;
            }
        } else {
block_15:
            temp_t3 = (var_s4 + 1) & 0xFFFF;
            var_s4 = temp_t3;
            if (temp_t3 < (s32) D_80280BE6) {
                goto loop_2;
            }
        }
    }
    if (D_8025C398 != 0) {
        *arg4 = D_8025C39C;
        *arg5 = D_8025C3A0;
        *arg6 = D_8025C3A4;
    }
    return D_8025C398;
}
