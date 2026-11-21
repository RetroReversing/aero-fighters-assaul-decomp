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

s32 func_80223FC4();
s32 func_802B183C();
s32 func_802CA0CC();
s32 func_802CB998();
u8 func_802CD1F4();
extern s8 D_8032AA80;
extern u8 D_8032AA84;

u8 func_802CC538(void *arg0) {
    u8 sp27;
    u8 temp_v0;

    sp27 = 1;
    func_802CB998(arg0, 2);
    if ((func_80223FC4(0, 0x1000) != 0) || (func_80223FC4(0, 0x8000) != 0) || (func_80223FC4(1, 0x1000) != 0) || (func_80223FC4(1, 0x8000) != 0)) {
        temp_v0 = *M2C_FIELD(arg0, u8 **, 0x28);
        switch (temp_v0) {                          /* irregular */
        case 0:
            M2C_FIELD(arg0, u8 *, 0x85) = 2U;
            break;
        case 1:
            M2C_FIELD(arg0, u8 *, 0x85) = 3U;
            break;
        case 2:
            M2C_FIELD(arg0, u8 *, 0x85) = 1U;
            break;
        }
        D_8032AA80 = 0xC;
        sp27 = 0;
        D_8032AA84 = M2C_FIELD(arg0, u8 *, 0x85);
    } else if (func_80223FC4(0, 0x4000) != 0) {
        func_802B183C(M2C_FIELD(arg0, s32 *, 8));
        func_802CA0CC(arg0);
    }
    if (sp27 == 0) {
        func_802B183C(M2C_FIELD(arg0, s32 *, 8));
        sp27 = func_802CD1F4(arg0, 9);
    }
    return sp27;
}
