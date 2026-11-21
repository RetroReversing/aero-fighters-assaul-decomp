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

s32 func_802009A8();
s32 func_80200C28();
s32 func_80231A24();
extern void *D_8024E710;
extern char D_80251C10[];

void func_80200B20(s32 arg0, s32 arg1, s32 arg2) {
    s16 sp46;
    s8 sp45;
    s8 sp44;
    s32 *sp40;
    s32 *sp3C;
    s32 *sp38;
    s32 *sp34;
    s32 sp10;
    void *temp_v0;

    temp_v0 = *(s32 *)(M2C_FIELD(D_8024E710, s32 *, 0x3C) + (arg1 * 4));
    if (temp_v0 == NULL) {
        func_80231A24(arg2, D_80251C10);
        return;
    }
    sp34 = &sp10;
    sp38 = &sp10;
    sp3C = &sp10;
    sp40 = &sp10;
    sp44 = 0;
    sp45 = 7;
    sp46 = (s16) M2C_FIELD(temp_v0, u8 *, 9);
    func_80200C28(arg2, &sp34, arg2, 0xC);
    func_802009A8(arg0, &sp34);
}
