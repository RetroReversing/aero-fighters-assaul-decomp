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

extern short D_80348B50;
extern signed char D_80348BB7;
extern signed char D_80348BB8;
extern signed char D_80348BB9;
extern signed char D_80348BBA;
extern signed char D_80348BBB;
extern signed char D_80348BAC;
extern short D_80348B70;
extern short D_80348B72;
extern short D_80348B74;
extern int D_80348B58;
extern int D_80348B5C;
extern int D_80348B60;
extern int D_80348B80;
extern int D_80348B78;
extern int D_80348B88;
extern int D_80348B90;
extern signed char D_80348BB6;
s32 func_80223FC4();
s32 func_802B183C();
s32 func_802CA0CC();
s32 func_802CB998();
s32 func_8030AA50();
s32 func_8030BF18();
s32 func_8030BFA0();
extern char D_8032AA94[];
extern char D_8032AAC8[];

s32 func_802CC2F4(void *arg0) {
    u8 var_v0;
    int *__base_D_80348B58;
    short *__base_D_80348B70;

    __base_D_80348B70 = &D_80348B70;

    __base_D_80348B58 = &D_80348B58;

    func_802CB998(arg0, 1);
    if ((func_80223FC4(0, 0x1000) != 0) || (func_80223FC4(0, 0x8000) != 0)) {
        var_v0 = *M2C_FIELD(arg0, u8 **, 0x28);
        if (var_v0 == 0) {
            func_8030BF18(0);
            D_80348B50 = 0;
            D_80348BB7 = 0;
            D_80348BB8 = 0;
            D_80348BB9 = 0;
            D_80348BBA = 0;
            D_80348BBB = 0;
            D_80348BAC = 0;
            (*__base_D_80348B70) = 0;
            D_80348B72 = 0;
            D_80348B74 = 0;
            (*__base_D_80348B58) = 0;
            D_80348B5C = 0;
            D_80348B60 = 0;
            D_80348B80 = 0;
            D_80348B78 = 0;
            D_80348B88 = 0;
            D_80348B90 = 0;
            D_80348BB6 = 0;
            func_8030AA50(D_8032AA94);
            func_8030AA50(D_8032AAC8);
            func_8030BFA0(0);
            func_802CA0CC(arg0);
            var_v0 = *M2C_FIELD(arg0, u8 **, 0x28);
        }
        if (var_v0 == 1) {
            func_802CA0CC(arg0);
        }
        func_802B183C(M2C_FIELD(arg0, s32 *, 8));
    } else if (func_80223FC4(0, 0x4000) != 0) {
        func_802B183C(M2C_FIELD(arg0, s32 *, 8));
        func_802CA0CC(arg0);
    }
    return 1;
}
