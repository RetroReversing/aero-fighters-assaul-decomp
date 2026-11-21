/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

f32 func_8022ADA8(f32, f32);
s32 func_80231A24();
s32 func_80318418();
extern char D_8032BB10[];
extern f32 D_8032BB24;
extern char D_8032BB3C[];

f32 func_803185F8(s32 arg0, s32 arg1) {
    s32 sp28;
    f32 sp30;
    f32 sp38;
    s32 sp34;
    f32 sp3C;
    register f32 *__base_D_8032BB24;
    f32 sp2C;

    __base_D_8032BB24 = &D_8032BB24;

    if (arg1 == 0) {
        func_80231A24(D_8032BB10, __base_D_8032BB24);
        *(s32 *)NULL = 0x29A;
    }
    if (!arg1) {
        func_80231A24(D_8032BB3C, &sp30, &sp2C);
        return 1.0f;
    }
    func_80318418(arg0, &sp3C, &sp38, &sp34);
    func_80318418(arg1, &sp30, &sp2C, &sp28);
    return func_8022ADA8(sp3C - sp30, sp38 - sp2C);
}
