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
extern unsigned short D_80280BD0;
s32 func_80228DE0();
s32 func_8022A210();
s32 func_80231A24();
extern void *D_8024E710;
extern char D_80253290[];
extern char D_802532BC[];
extern char D_802532DC[];
extern char D_80253304[];
extern s32 D_8025C3E0;
extern s32 D_8025C3E4;
extern char D_80280BC0[];

void func_8021B4B0(s32 arg0, s32 arg1, s32 arg2) {
    void *sp2C;
    s32 sp28;
    s32 sp20;
    s32 sp1C;
    f32 temp_fv0;
    f32 temp_fv1;
    s32 temp_a2;
    s32 temp_t9;
    u16 temp_v0;
    void *temp_t0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    if ((s32) D_80280BE6 < arg0) {
        func_80231A24(D_80253290, arg0, arg0);
        return;
    }
    temp_t0 = (arg0 * 0x24) + D_8025C3E0;
    temp_v0 = M2C_FIELD(temp_t0, u16 *, 0);
    sp1C = (s32) temp_v0;
    if ((s32) temp_v0 >= (s32) D_80280BD0) {
        func_80231A24(D_802532BC, (s32) temp_v0, arg0);
        return;
    }
    temp_a2 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x1C) + (temp_v0 * 4));
    if (temp_a2 == 0) {
        func_80231A24(D_802532DC, sp1C, temp_a2, arg0);
        return;
    }
    temp_t9 = arg1 * 2;
    if (arg1 >= (s32) M2C_FIELD(M2C_FIELD(temp_a2, void **, 8), u8 *, 4)) {
        func_80231A24(D_80253304, arg1, sp1C, arg0);
        return;
    }
    sp2C = temp_t0;
    sp28 = temp_a2;
    sp20 = temp_t9;
    func_80228DE0(D_8025C3E4 + (*(s32 *)(M2C_FIELD(temp_t0, s32 *, 4) + temp_t9) << 6), arg2, temp_a2, arg0);
    if (sp20 == 0) {
        temp_fv1 = M2C_FIELD(temp_a2, f32 *, 0x20);
        if (temp_fv1 != 1.0f) {
            temp_fv0 = 1.0f / temp_fv1;
            func_8022A210(0x3F800000, D_8025C3E4 + (*(s32 *)(M2C_FIELD(temp_t0, s32 *, 4) + sp20) << 6), temp_fv0, temp_fv0, temp_fv0);
        }
    } else {
        temp_v0_2 = D_8025C3E4 + (*(s32 *)(M2C_FIELD(temp_t0, s32 *, 4) + sp20) << 6);
        M2C_FIELD(temp_v0_2, f32 *, 0x30) = (f32) (M2C_FIELD(temp_v0_2, f32 *, 0x30) * M2C_FIELD(temp_a2, f32 *, 0x20));
        temp_v0_3 = D_8025C3E4 + (*(s32 *)(M2C_FIELD(temp_t0, s32 *, 4) + sp20) << 6);
        M2C_FIELD(temp_v0_3, f32 *, 0x34) = (f32) (M2C_FIELD(temp_v0_3, f32 *, 0x34) * M2C_FIELD(temp_a2, f32 *, 0x20));
        temp_v0_4 = D_8025C3E4 + (*(s32 *)(M2C_FIELD(temp_t0, s32 *, 4) + sp20) << 6);
        M2C_FIELD(temp_v0_4, f32 *, 0x38) = (f32) (M2C_FIELD(temp_v0_4, f32 *, 0x38) * M2C_FIELD(temp_a2, f32 *, 0x20));
    }
}
