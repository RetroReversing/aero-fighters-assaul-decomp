/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_803084B0();
extern s32 D_80346AD0;
extern f32 D_80346AD4;
extern f32 D_80346AD8;
extern f32 D_80346ADC;
extern f32 D_80346AE0;
extern f32 D_80346AE4;
extern f32 D_80346AE8;

s32 func_8030F480(s32 arg0) {
    func_803084B0(arg0, 2, 2, 4, 0, 0, 2, D_80346AE0, 640.0f, 250.0f, 264.0f);
    func_803084B0(arg0, 4, 2, 4, 0, 0, 2, D_80346AD8, D_80346ADC, 255.0f, 264.0f);
    func_803084B0(arg0, 1, 2, 4, 0, 0, 2, D_80346AE4, D_80346AE8, 255.0f, 264.0f);
    func_803084B0(3, 2, 4, 0, 0, 2, (*(f32 *)&D_80346AD0), D_80346AD4, 260.0f, 264.0f);
    return 1;
}
