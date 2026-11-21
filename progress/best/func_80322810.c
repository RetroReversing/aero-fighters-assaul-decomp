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

s32 func_80205AA0();
s32 func_80205E0C();
s32 func_80205EBC();
s32 func_80224CA8();
s32 func_802AFFF8();
s32 func_8030888C();
s32 func_80309B08();
s32 func_8030A92C();
extern s8 D_8032AA04;
extern f32 D_80348BA8;

s32 func_80322810(void *arg0, void *arg1, f32 arg2) {
    M2C_FIELD(arg0, void **, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = 0xA;
    M2C_FIELD(arg0, s8 *, 0x5458) = 0;
    M2C_FIELD(arg0, f32 *, 0x18) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
    func_80224CA8(arg2, 0x45);
    func_80224CA8(1.02e-43f);
    func_80224CA8(3.8e-44f);
    func_8030A92C();
    func_80224CA8(3e-44f);
    func_80224CA8(4.5e-44f);
    func_80224CA8(2.7e-44f);
    func_80224CA8(2.4e-44f);
    func_80224CA8(8.8e-44f);
    func_80224CA8(4.9e-44f);
    func_80205AA0(0, 3);
    func_80205EBC(0, M2C_FIELD(arg0, s32 *, 0x24));
    if (D_80348BA8 < 1400.0f) {
        func_80224CA8(6.7e-44f);
        func_80205E0C(0, 6);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x7168) = 6;
        func_80205E0C(0, 6);
        D_8032AA04 = 0;
    } else {
        func_80224CA8(6.9e-44f);
        func_80205E0C(0, 7);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0x7168) = 7;
        func_80205E0C(0, 7);
        D_8032AA04 = 1;
    }
    func_802AFFF8(M2C_FIELD(arg0, void **, 0x14), 0x44160000);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s8 *, 0x716C) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s8 *, 0x716D) = 0x64;
    func_8030888C(arg0, 0, 0, 0, 0xFF, 0, -7.0f, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), f32 *, 0x7160) = 8.0f;
    func_80309B08(0, 0, 0);
    return 1;
}
