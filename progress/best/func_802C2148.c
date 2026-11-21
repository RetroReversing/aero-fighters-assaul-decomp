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

M2C_UNK func_8022970C(M2C_UNK *);                   /* extern */
M2C_UNK func_8022A0D0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_802AAE40(s32, M2C_UNK *, M2C_UNK, s32, f32, f32, s32, s32, s32); /* extern */
s32 func_802AD4E8(s32, void *, M2C_UNK *, f32 *, f32 *, s32, f32, f32, f32, f32); /* extern */
M2C_UNK func_802C47B8(void *);                      /* extern */
M2C_UNK func_802C5150(M2C_UNK *);                   /* extern */
M2C_UNK func_802D0154(M2C_UNK *, f32, M2C_UNK);     /* extern */
M2C_UNK func_802E93A0(s32, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32, f32); /* extern */
M2C_UNK func_802E97AC(s32, s32);                    /* extern */

void func_802C2148(void *arg0, f32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 arg5) {
int *__repair_home2 = &arg2;

    f32 spA0;
    f32 sp9C;
    f32 sp98;
    M2C_UNK sp68;
    s32 sp64;
    M2C_UNK sp5C;
    f32 sp54;
    f32 sp4C;
    f32 sp44;
    f32 sp40;
    f32 sp3C;
    s32 temp_v0;

    func_802C5150(&sp68);
    if (M2C_FIELD(arg0, u8 *, 0xFC) != 0) {
        if (func_802AD4E8(M2C_FIELD(arg0, s32 *, 0), arg0, &sp5C, &sp54, &sp4C, 2, M2C_FIELD(arg0, f32 *, 0x154), M2C_FIELD(arg0, f32 *, 0x15C), M2C_FIELD(arg0, f32 *, 0x160), M2C_FIELD(arg0, f32 *, 0x164)) > 0) {
            sp44 = sp98;
            sp40 = sp9C;
            sp3C = spA0;
            func_8022970C(&sp68);
            sp98 = sp44;
            sp9C = sp40;
            spA0 = sp3C;
            func_802C47B8(arg0);
            func_802D0154(&sp68, sp54 + M2C_FIELD(arg0, f32 *, 0x104), 0x7A);
            func_802D0154(&sp68, sp4C + M2C_FIELD(arg0, f32 *, 0x108), 0x78);
        }
    } else {
        func_8022A0D0(&sp68, 0, 0xC1D00000, 0xBF400000);
    }
    temp_v0 = func_802AAE40(M2C_FIELD(arg0, s32 *, 0), &sp68, 0x44480000, arg4, arg5, 1.0f, M2C_FIELD(arg0, s32 *, 0x8C), (*__repair_home2), 1);
    if (temp_v0 != 0) {
        sp64 = temp_v0;
        func_802E93A0(temp_v0, 0x3F800000, 0x3F800000, 0x3E800000, 1.0f, 0.0f, 0.0f);
        func_802E97AC(sp64, arg3);
    }
    M2C_FIELD(arg0, f32 *, 0xF4) = arg1;
}
