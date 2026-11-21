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
s32 func_802011D0();
s32 func_8020321C();
s32 func_80203464();
s32 func_802037EC();
s32 func_80231C9C();
s32 func_80234E90();
extern void *D_8024E5B4;
extern char D_80252348[];
extern char D_80252364[];
extern char D_80252378[];
extern char D_802523A4[];
extern char D_802523E8[];
extern u8 D_80256DC0;
extern u8 D_80256DD0;
extern s32 D_80256DE0;
extern s32 D_80256DE4;
extern s32 D_8025B988;

void func_80202F38(void) {
    s32 var_fp;
    s32 var_v0;
    s8 var_s1;
    u8 *temp_s0;
    char *var_s0;
    char *var_s3;
    u8 temp_s2;
    u8 temp_s2_2;
    u8 temp_s2_3;
    u8 temp_t2;
    void *temp_a0;

    func_802011D0(D_80252348, D_80256DE0);
    var_s3 = &D_80256DC0;
    var_fp = 0;
    if (D_80256DE0 > 0) {
        do {
            func_802011D0(D_80252364, (s32) *(u8 *)var_s3);
            func_802037EC(*(u8 *)var_s3);
            temp_s2 = *(u8 *)var_s3;
            var_v0 = M2C_FIELD((D_80256DE4 + (temp_s2 * 0xB4)), s32 *, 0xA0);
            if (var_v0 == 0) {
                var_s1 = 0;
                if (D_80256DD0 != 0xFF) {
                    var_s0 = &D_80256DD0;
loop_5:
                    temp_t2 = M2C_FIELD(var_s0, u8 *, 1);
                    var_s1 += 1;
                    var_s0 += 1;
                    if (temp_t2 != 0xFF) {
                        if (var_s1 != 0xF) {
                            goto loop_5;
                        }
                    }
                }
                temp_s0 = &(&D_80256DD0)[var_s1];
                func_802011D0(D_80252378, (s32) temp_s2, *temp_s0, var_s1);
                temp_s2_2 = *(u8 *)var_s3;
                *temp_s0 = temp_s2_2;
                M2C_FIELD((D_80256DE4 + (temp_s2_2 * 0xB4)), s8 *, 0xAD) = var_s1;
                func_8020321C(*(u8 *)var_s3);
                var_v0 = M2C_FIELD((D_80256DE4 + (*(u8 *)var_s3 * 0xB4)), s32 *, 0xA0);
            }
            if (var_v0 == 1) {
                func_8020321C(*(u8 *)var_s3 & 0xFF);
                var_v0 = M2C_FIELD((D_80256DE4 + (*(u8 *)var_s3 * 0xB4)), s32 *, 0xA0);
            }
            if (var_v0 == 2) {
                func_802011D0(D_802523A4, (s32) *(u8 *)var_s3);
                func_80234E90(D_8024E5B4, *(s32 *)(D_8025B988 + (M2C_FIELD((D_80256DE4 + (*(u8 *)var_s3 * 0xB4)), u8 *, 0xAD) * 2)));
                temp_a0 = D_8024E5B4;
                if (M2C_FIELD(temp_a0, s32 *, 0x3C) == -1) {
                    func_80231C9C("sndp -> target != -1", "_aobj.c", 0x411);
                }
                if (alSndpGetState(temp_a0) == 1) {
                    func_802011D0(D_802523E8, (s32) *(u8 *)var_s3);
                    M2C_FIELD((D_80256DE4 + (*(u8 *)var_s3 * 0xB4)), s32 *, 0xA0) = 8;
                    M2C_FIELD((D_80256DE4 + (*(u8 *)var_s3 * 0xB4)), s8 *, 0xB0) = 0;
                }
            }
            temp_s2_3 = *(u8 *)var_s3;
            if (M2C_FIELD((D_80256DE4 + (temp_s2_3 * 0xB4)), s32 *, 0xA0) == 8) {
                func_80203464(temp_s2_3 & 0xFF);
            }
            var_fp += 1;
            var_s3 += 1;
        } while (var_fp < D_80256DE0);
    }
}
