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

s32 alSndpGetState();
s32 alSndpSetVol();
s32 alSndpStop();
s32 func_802011D0();
s32 func_80231C9C();
s32 func_80234E90();
extern void *D_8024E5B4;
extern char D_80252558[];
extern char D_8025258C[];
extern s32 D_8025B988;

void func_80203654(s8 arg0) {
    s8 temp_a2;
    void *temp_a0;

    temp_a2 = arg0 & 0xFF;
    if (temp_a2 < 0x10) {
        arg0 = temp_a2;
        func_802011D0(D_80252558, temp_a2, temp_a2);
        func_80234E90(D_8024E5B4, *(s32 *)(D_8025B988 + ((u8) arg0 * 2)), (u8) arg0);
        temp_a0 = D_8024E5B4;
        if (M2C_FIELD(temp_a0, s32 *, 0x3C) == -1) {
            func_80231C9C("sndp -> target != -1", "_aobj.c", 0x469);
        }
        if (alSndpGetState(temp_a0) == 1) {
            alSndpSetVol(D_8024E5B4, 0);
        }
        alSndpStop(D_8024E5B4);
        return;
    }
    func_802011D0(D_8025258C, temp_a2, temp_a2);
}
