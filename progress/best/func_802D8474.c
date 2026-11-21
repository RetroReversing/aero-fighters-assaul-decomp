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

s32 func_802E7734(s32, s32, f32, f32, f32, f32, f32);
s32 func_803084B0();
extern s32 D_80343588;
extern f32 D_8034358C;
extern f32 D_80343590;
extern f32 D_80343594;
extern f32 D_80343598;
extern f32 D_8034359C;
extern f32 D_803435A0;
extern f32 D_803435A4;
extern f32 D_803435A8;
extern f32 D_803435AC;
extern f32 D_803435B0;
extern f32 D_803435B4;

s32 func_802D8474(void *arg0) {
    f32 temp_fs0;
    f32 temp_fs1;
    f32 temp_fs4;
    s32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0x7FA8) = func_803084B0((void *)6, 1, 3, 2, 0, 1, (*(f32 *)&D_80343588), D_8034358C, D_80343590, 140.0f);
    M2C_FIELD(arg0, s32 *, 0x7FAC) = func_803084B0(arg0, 9, 1, 4, 1, 0, 1, D_80343594, -278.0f, 600.0f, 90.0f);
    M2C_FIELD(arg0, s32 *, 0x7FB0) = func_803084B0(arg0, 7, 1, 4, 1, 0, 1, D_80343598, D_8034359C, D_803435A0, 90.0f);
    M2C_FIELD(arg0, s32 *, 0x7FB4) = func_803084B0(arg0, 7, 1, 4, 1, 0, 1, D_803435A4, D_803435A8, 680.0f, 90.0f);
    M2C_FIELD(arg0, u8 *, 0x7FCC) = 0;
    temp_fs0 = D_803435AC;
    temp_fs1 = D_803435B0;
    temp_v0 = func_803084B0(arg0, 0xD, 1, 0, 0, 0, 2, temp_fs0, 2000.0f, temp_fs1, 0.0f);
    M2C_FIELD(arg0, s32 *, 0x7FB8) = temp_v0;
    func_802E7734(temp_v0, 0, temp_fs0, temp_fs0, temp_fs1, 50.0f, 0.5f);
    temp_fs4 = D_803435B4;
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 1, temp_fs4, temp_fs4, temp_fs1, 50.0f, 0.5f);
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 2, temp_fs4, temp_fs0, temp_fs1, 50.0f, 0.5f);
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 3, temp_fs0, temp_fs4, temp_fs1, 50.0f, 0.5f);
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 4, temp_fs0, temp_fs0, temp_fs1, 50.0f, 0.5f);
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 5, temp_fs4, temp_fs4, temp_fs1, 50.0f, 0.5f);
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 6, temp_fs0, temp_fs4, temp_fs1, 50.0f, 0.5f);
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 7, temp_fs4, temp_fs0, temp_fs1, 50.0f, 0.5f);
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 8, temp_fs4, temp_fs4, temp_fs1, 50.0f, 0.5f);
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 9, temp_fs0, temp_fs0, temp_fs1, 50.0f, 0.5f);
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 0xA, temp_fs4, temp_fs0, temp_fs1, 50.0f, 0.5f);
    func_802E7734(M2C_FIELD(arg0, s32 *, 0x7FB8), 0xB, temp_fs0, temp_fs4, temp_fs1, 50.0f, 0.5f);
    return 1;
}
