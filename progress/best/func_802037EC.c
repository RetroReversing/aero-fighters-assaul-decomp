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

s32 func_802011D0();
extern char D_802525A8[];
extern char D_802525C0[];
extern char D_802525D4[];
extern char D_802525E8[];
extern char D_802525FC[];
extern char D_80252610[];
extern char D_80252624[];
extern char D_80252638[];
extern char D_8025264C[];
extern char D_80252660[];
extern char D_80252674[];
extern char D_80252688[];
extern s32 D_80256DE4;

void func_802037EC(s32 arg0) {
int *__repair_home0 = &arg0;

    u8 temp_a1;
    void *temp_s0;

    temp_a1 = (*__repair_home0) & 0xFF;
    temp_s0 = (temp_a1 * 0xB4) + D_80256DE4;
    func_802011D0(D_802525A8);
    func_802011D0(D_802525C0, M2C_FIELD(temp_s0, u8 *, 0xAD));
    func_802011D0(D_802525D4, (u8) M2C_FIELD(temp_s0, s32 *, 0xA0));
    func_802011D0(D_802525E8, M2C_FIELD(temp_s0, u8 *, 0xB0));
    func_802011D0(D_802525FC, (u8) M2C_FIELD(temp_s0, s32 *, 0xA4));
    func_802011D0(D_80252610);
    func_802011D0(D_80252624, M2C_FIELD(temp_s0, u8 *, 0xAE));
    func_802011D0(D_80252638);
    func_802011D0(D_8025264C);
    func_802011D0(D_80252660, M2C_FIELD(temp_s0, u8 *, 0x8C));
    func_802011D0(D_80252674, (u8) M2C_FIELD(temp_s0, s32 *, 0x88));
    func_802011D0(D_80252688, (u8) M2C_FIELD(temp_s0, s32 *, 0xA8));
}
