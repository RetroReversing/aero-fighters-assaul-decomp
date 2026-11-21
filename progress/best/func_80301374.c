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
s32 func_802AEDD4();
s32 func_802AFFF8();
s32 func_8030888C();
s32 func_80309B08();
s32 func_8030A92C();

s32 func_80301374(void *arg0, void *arg1, f32 arg2) {
    M2C_FIELD(arg0, void **, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = 7;
    M2C_FIELD(arg0, s8 *, 0x70) = 0;
    M2C_FIELD(arg0, s8 *, 0x71) = 0;
    M2C_FIELD(arg0, s8 *, 0x72) = 0;
    M2C_FIELD(arg0, s16 *, 0x78) = 0;
    M2C_FIELD(arg0, f32 *, 0x18) = arg2;
    M2C_FIELD(arg0, f32 *, 0x74) = 0.0f;
    func_80224CA8(arg2, 0x41);
    func_80224CA8(5.2e-44f);
    func_80224CA8(6.4e-44f);
    func_8030A92C();
    func_80224CA8(3.5e-44f);
    func_80224CA8(2.4e-44f);
    func_80224CA8(2.7e-44f);
    func_80224CA8(3e-44f);
    func_80224CA8(8.8e-44f);
    func_80224CA8(4.9e-44f);
    func_80205AA0(0, 3);
    func_80205EBC(0, M2C_FIELD(arg0, s32 *, 0x24));
    M2C_FIELD(arg1, s32 *, 0x7168) = 4;
    func_80205E0C(0, 4);
    M2C_FIELD(arg0, s32 *, 0x4170) = func_802AEDD4(arg1, 1);
    func_802AFFF8(M2C_FIELD(arg0, void **, 0x14), 0x44160000);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s8 *, 0x716C) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s8 *, 0x716D) = 0x32;
    func_8030888C(arg0, 0, 0, 0, 0xFF, 0, -7.0f, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), f32 *, 0x7160) = 8.0f;
    func_80309B08(0, 0, 0);
    return 1;
}
