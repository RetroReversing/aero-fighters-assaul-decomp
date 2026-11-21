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

s32 func_802E7734();
void *func_803084B0();
s32 func_80318C1C();
extern f32 D_80346994;
extern f32 D_80346998;
extern f32 D_8034699C;
extern f32 D_803469A0;
extern f32 D_803469A4;
extern f32 D_803469A8;
extern f32 D_803469AC;
extern f32 D_803469B0;
extern f32 D_803469B4;
extern f32 D_803469B8;

s32 func_8030DE60(void *arg0) {
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = func_803084B0((void *)4, 2, 0, 2, 1, 2, 0, -2000.0f, 1200.0f, 0.0f);
    M2C_FIELD(arg0, void **, 0x70) = temp_v0;
    M2C_FIELD(temp_v0, f32 *, 0x7DC) = (f32) D_80346994;
    func_802E7734(M2C_FIELD(arg0, void **, 0x70), 0, 0, 0xC57A0000, D_80346998, 150.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x70), 1, 0, 0x457A0000, D_8034699C, 150.0f, 1.0f);
    func_80318C1C(M2C_FIELD(arg0, void **, 0x70), 0);
    temp_v0_2 = func_803084B0(arg0, 1, 2, 0, 2, 1, 2, 0.0f, -2000.0f, 1200.0f, 0.0f);
    M2C_FIELD(arg0, void **, 0x74) = temp_v0_2;
    M2C_FIELD(temp_v0_2, f32 *, 0x7DC) = 2.0f;
    func_802E7734(M2C_FIELD(arg0, void **, 0x74), 0, 0xC1700000, 0xC5674000, D_803469A0, 200.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x74), 1, 0xC1700000, 0xC4FA0000, D_803469A4, 150.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x74), 2, 0xC1700000, 0xC47A0000, 800.0f, 150.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x74), 3, 0xC1700000, 0, 800.0f, 150.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x74), 4, 0xC1700000, 0x457A0000, 800.0f, 150.0f, 1.0f);
    func_80318C1C(M2C_FIELD(arg0, void **, 0x74), 0);
    temp_v0_3 = func_803084B0(arg0, 2, 2, 0, 2, 1, 2, 0.0f, -2000.0f, 1200.0f, 0.0f);
    M2C_FIELD(arg0, void **, 0x78) = temp_v0_3;
    M2C_FIELD(temp_v0_3, f32 *, 0x7DC) = 3.0f;
    func_802E7734(M2C_FIELD(arg0, void **, 0x78), 0, 0x41C80000, 0xC566A000, D_803469A8, 200.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x78), 1, 0x41C80000, 0xC4FA0000, 800.0f, 150.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x78), 2, 0x41C80000, 0xC47A0000, 800.0f, 150.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x78), 3, 0x41C80000, 0, D_803469AC, 150.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x78), 4, 0x41C80000, 0x457A0000, D_803469B0, 150.0f, 1.0f);
    func_80318C1C(M2C_FIELD(arg0, void **, 0x78), 0);
    temp_v0_4 = func_803084B0(arg0, 3, 2, 0, 2, 1, 2, 0.0f, -2000.0f, 1200.0f, 0.0f);
    M2C_FIELD(arg0, void **, 0x7C) = temp_v0_4;
    M2C_FIELD(temp_v0_4, f32 *, 0x7DC) = (f32) D_803469B4;
    func_802E7734(M2C_FIELD(arg0, void **, 0x7C), 0, 0x40A00000, 0xC57A0000, D_803469B8, 200.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x7C), 1, 0x40A00000, 0xC53B8000, 820.0f, 150.0f, 1.0f);
    func_802E7734(M2C_FIELD(arg0, void **, 0x7C), 2, 0x40A00000, 0, 820.0f, 150.0f, 1.0f);
    func_80318C1C(M2C_FIELD(arg0, void **, 0x7C), 0);
    return 1;
}
