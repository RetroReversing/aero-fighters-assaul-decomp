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

f32 func_8022ADA8();
s32 func_80231A24();
s32 func_80318418();
extern char D_8032BB10[];
extern f32 D_8032BB24;
extern char D_8032BB3C[];

f32 func_803185F8(s32 arg0, s32 arg1) {
    f32 sp3C;
    f32 sp38;
    s32 sp34;
    f32 sp30;
    f32 sp2C;
    s32 sp28;

    if (arg1 == 0) {
        func_80231A24(D_8032BB10, &D_8032BB24);
        *(s32 *)NULL = 0x29A;
    }
    if (arg1 == 0) {
        func_80231A24(D_8032BB3C, &sp30, &sp2C);
        return 1.0f;
    }
    func_80318418(arg1, &sp30, &sp2C, &sp28);
    func_80318418(arg0, &sp3C, &sp38, &sp34);
    return func_8022ADA8(sp3C - sp30, sp38 - sp2C);
}
