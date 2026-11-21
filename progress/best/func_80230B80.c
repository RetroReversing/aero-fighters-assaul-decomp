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

s32 func_80231A24();
s32 func_8023E0B0();
extern char D_80254BB0[];
extern char D_80254BD4[];
extern char D_80254C04[];
extern char D_80254C38[];
extern char D_80254C6C[];
extern char D_80280C58[];
extern s32 D_80283520;

s32 func_80230B80(s32 arg0, s32 arg1, s32 arg2) {
    if (D_80283520 == 0) {
        func_80231A24(D_80254BB0);
        return 0;
    }
    if (arg1 & 7) {
        func_80231A24(D_80254BD4);
        return 0;
    }
    if (arg2 & 7) {
        func_80231A24(D_80254C04);
        return 0;
    }
    if ((arg1 + arg2) >= 0x209) {
        func_80231A24(D_80254C38, arg1, arg2, 0x208);
        return 0;
    }
    if (func_8023E0B0(D_80280C58, (arg1 / 8) & 0xFF, arg0, arg2) != 0) {
        func_80231A24(D_80254C6C);
        return 0;
    }
    return arg2;
}
