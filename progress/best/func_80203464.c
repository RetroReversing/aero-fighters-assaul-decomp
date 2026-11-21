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

s32 alSndpSetFXMix();
s32 alSndpSetPan();
s32 alSndpSetPitch();
s32 alSndpSetVol();
s32 func_802011D0();
s32 func_80231C9C();
s32 func_80234E90();
extern void *D_8024E5B4;
extern char D_80252474[];
extern s32 D_80256DE4;
extern s32 D_8025B988;

void func_80203464(s32 arg0) {
    s16 var_a1;
    s32 temp_a2;
    s32 temp_s0;
    u8 var_v1;
    void *temp_a0;
    void *var_v0;

    temp_a2 = arg0 & 0xFF;
    arg0 = temp_a2 * 0xB4;
    func_802011D0(D_80252474, M2C_FIELD((D_80256DE4 + arg0), u8 *, 0xAD), temp_a2);
    var_v0 = D_80256DE4 + arg0;
    var_v1 = M2C_FIELD(var_v0, u8 *, 0xAD);
    if ((s32) var_v1 >= 0x10) {
        func_80231C9C("_aemits[ object ]. playVoice < AUD_NSFX_VOICES", "_aobj.c", 0x453);
        var_v0 = D_80256DE4 + arg0;
        var_v1 = M2C_FIELD(var_v0, u8 *, 0xAD);
    }
    if (*(s32 *)(D_8025B988 + (var_v1 * 2)) < 0) {
        func_80231C9C("sfxId[ _aemits[ object ]. playVoice] >= 0", "_aobj.c", 0x454);
        var_v0 = D_80256DE4 + arg0;
    }
    if ((s32) M2C_FIELD(var_v0, u8 *, 0xAE) < 0x80) {
        var_a1 = *(s16 *)(D_8025B988 + (M2C_FIELD(var_v0, u8 *, 0xAD) * 2));
    } else {
        func_80231C9C("( ALPan ) _aemits[ object ]. playPan <= 127", "_aobj.c", 0x456);
        var_a1 = *(s16 *)(D_8025B988 + (M2C_FIELD((D_80256DE4 + arg0), u8 *, 0xAD) * 2));
    }
    func_80234E90(D_8024E5B4, var_a1);
    temp_a0 = D_8024E5B4;
    if (M2C_FIELD(temp_a0, s32 *, 0x3C) == -1) {
        func_80231C9C("sndp -> target != -1", "_aobj.c", 0x45A);
    }
    alSndpSetVol(temp_a0, M2C_FIELD((D_80256DE4 + arg0), s16 *, 0xA6));
    alSndpSetPitch(D_8024E5B4, M2C_FIELD((D_80256DE4 + arg0), s32 *, 0x9C));
    alSndpSetFXMix(D_8024E5B4, M2C_FIELD((D_80256DE4 + arg0), u8 *, 0xAF));
    alSndpSetPan(D_8024E5B4, M2C_FIELD((D_80256DE4 + arg0), u8 *, 0xAE));
}
