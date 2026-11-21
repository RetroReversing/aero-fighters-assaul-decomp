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

s32 func_8022D3F0();
s32 func_8022D560();
s32 func_80231A24();
s32 osSendMesg();
s32 osViSwapBuffer();
extern s32 D_8024E8A0;
extern char D_802543C0[];
extern char D_802543E0[];
extern char D_80278720[];
extern s8 D_80278728;
extern u8 D_80278729;
extern u8 D_8027872A;
extern u8 D_8027872C;
extern u8 D_8027872E;
extern s32 D_80278740;

void func_8022C480(void) {
    void *sp1C;
    void *temp_v0;

    temp_v0 = *(D_80278720 + (D_8027872E * 4));
    if (D_80278740 == 0) {
        if (temp_v0 == NULL) {
            func_80231A24(D_802543C0);
            func_8022D3F0();
            return;
        }
        if (D_8027872C == 0) {
            if ((D_80278729 == 0x67) || (D_8027872A != 0)) {
                func_80231A24(D_802543E0, D_80278729, D_8027872A);
                return;
            }
            sp1C = temp_v0;
            func_8022D560(0, 0x32, &D_8027872A);
            osSendMesg(M2C_FIELD(temp_v0, s32 *, 0x50), M2C_FIELD(temp_v0, s32 *, 0x54), 1);
            D_80278728 = 1;
            if (D_8024E8A0 == 0) {
                osViSwapBuffer(M2C_FIELD(temp_v0, s32 *, 0xC));
            }
            *(D_80278720 + (D_8027872E * 4)) = 0;
        }
    }
}
