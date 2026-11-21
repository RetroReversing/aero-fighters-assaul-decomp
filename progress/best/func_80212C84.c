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
s32 func_80234C78();
s32 func_80234D30();
extern char D_80252EA8[];
extern char D_80252ED0[];
extern char D_80252EE4[];
extern char D_80252EF8[];
extern char D_80252F0C[];

s32 func_80212C84(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    void *sp28;
    f32 temp_fa0;
    f32 temp_fv0;
    f32 temp_fv1;
    void *temp_s0;
    void *temp_s1;
    void *temp_v1;

    temp_v1 = arg0 + (arg1 * 0x10);
    temp_s0 = arg0 + (arg2 * 0x10);
    temp_fv0 = (f32) M2C_FIELD(temp_v1, s16 *, 0);
    temp_s1 = arg0 + (arg3 * 0x10);
    temp_fv1 = (f32) M2C_FIELD(temp_v1, s16 *, 2);
    temp_fa0 = (f32) M2C_FIELD(temp_v1, s16 *, 4);
    sp44 = (f32) M2C_FIELD(temp_s0, s16 *, 0) - temp_fv0;
    sp48 = (f32) M2C_FIELD(temp_s0, s16 *, 2) - temp_fv1;
    sp4C = (f32) M2C_FIELD(temp_s0, s16 *, 4) - temp_fa0;
    sp38 = (f32) M2C_FIELD(temp_s1, s16 *, 0) - temp_fv0;
    sp3C = (f32) M2C_FIELD(temp_s1, s16 *, 2) - temp_fv1;
    sp28 = temp_v1;
    sp40 = (f32) M2C_FIELD(temp_s1, s16 *, 4) - temp_fa0;
    func_80234C78(temp_fa0, arg4, &sp44, &sp38);
    if (func_80234D30(arg4, arg4) == 0) {
        func_80231A24(D_80252EA8);
        func_80231A24(D_80252ED0, arg1, arg2, arg3);
        func_80231A24(D_80252EE4, (s32) M2C_FIELD(sp28, s16 *, 0), (s32) M2C_FIELD(sp28, s16 *, 2), (s32) M2C_FIELD(sp28, s16 *, 4));
        func_80231A24(D_80252EF8, (s32) M2C_FIELD(temp_s0, s16 *, 0), (s32) M2C_FIELD(temp_s0, s16 *, 2), (s32) M2C_FIELD(temp_s0, s16 *, 4));
        func_80231A24(D_80252F0C, (s32) M2C_FIELD(temp_s1, s16 *, 0), (s32) M2C_FIELD(temp_s1, s16 *, 2), (s32) M2C_FIELD(temp_s1, s16 *, 4));
        return 0;
    }
    return 1;
}
