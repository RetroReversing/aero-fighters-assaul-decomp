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

s32 alClose();
s32 func_80204E0C();
s32 func_80205010();
s32 func_8022CA14();
s32 func_8022D560();
s32 osRecvMesg();
extern char D_80257628[];
extern char D_802577F0[];
extern char D_80257828[];
extern char D_80257860[];
extern u32 D_8025B8C0;
extern char D_8025B8F8[];
extern char D_80281218[];

void func_80204C90(s32 arg0) {
    void *sp54;
    s32 sp48;
    s16 temp_v0;
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    sp54 = NULL;
    var_s0 = 0;
    osRecvMesg(D_8025B8F8, &sp54, 1);
    func_8022CA14(D_80281218, &sp48, D_802577F0);
    do {
        osRecvMesg(D_802577F0, &sp54, 1);
        func_8022D560(0, 0x29);
        temp_v0 = M2C_FIELD(sp54, s16 *, 0);
        switch (temp_v0) {                          /* irregular */
        case 4:
            break;
        case 1:
            if (func_80204E0C(M2C_FIELD((D_80257628 + (((u32) D_8025B8C0 % 3U) * 4)), s32 *, 8), var_s0) != 0) {
                osRecvMesg(D_80257828, &sp54, 1);
                func_80205010(M2C_FIELD(sp54, s32 *, 4));
                var_s0 = M2C_FIELD(sp54, s32 *, 4);
            }
            break;
        case 10:
            var_s1 = 1;
            break;
        }
    } while (var_s1 == 0);
    alClose(D_80257860);
}
