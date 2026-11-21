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
extern char D_8025333C[];
extern char D_80253368[];
extern s32 D_8025C3E0;
extern s32 D_8025C3E4;
extern char D_80280BC0[];

void func_8021B6D4(s32 arg0, s32 arg1, void *arg2) {
    void *sp2C;
    s32 sp24;
    f32 temp_fv0;
    s32 temp_t1;
    void *temp_v0;
    void *temp_v1;

    if ((s32) D_80280BE6 < arg0) {
        func_80231A24(D_8025333C, arg0, arg0);
        return;
    }
    temp_v1 = (arg0 * 0x24) + D_8025C3E0;
    temp_t1 = arg1 * 2;
    if ((s32) M2C_FIELD(temp_v1, u16 *, 0) >= (s32) D_80280BD0) {
        func_80231A24(D_80253368, arg0, arg1, arg0);
        return;
    }
    sp24 = temp_t1;
    sp2C = temp_v1;
    func_80228DE0(arg2, D_8025C3E4 + (*(s32 *)(M2C_FIELD(temp_v1, s32 *, 4) + temp_t1) << 6), temp_t1, arg0);
    temp_v0 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x1C) + (M2C_FIELD(temp_v1, u16 *, 0) * 4));
    if (sp24 == 0) {
        temp_fv0 = M2C_FIELD(temp_v0, f32 *, 0x20);
        if (temp_fv0 != 1.0f) {
            func_8022A210(arg2, temp_fv0, temp_fv0, temp_fv0);
        }
    } else {
        M2C_FIELD(arg2, f32 *, 0x30) = (f32) (M2C_FIELD(arg2, f32 *, 0x30) / M2C_FIELD(temp_v0, f32 *, 0x20));
        M2C_FIELD(arg2, f32 *, 0x34) = (f32) (M2C_FIELD(arg2, f32 *, 0x34) / M2C_FIELD(temp_v0, f32 *, 0x20));
        M2C_FIELD(arg2, f32 *, 0x38) = (f32) (M2C_FIELD(arg2, f32 *, 0x38) / M2C_FIELD(temp_v0, f32 *, 0x20));
    }
}
