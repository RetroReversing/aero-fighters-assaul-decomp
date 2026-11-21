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
s32 func_80238B90();
u32 func_80238F10();
u32 func_8023D470();
s32 func_8024AA84();
s32 osContGetQuery();
u32 osContStartQuery();
extern char D_80254230[];
extern char D_80254258[];
extern char D_80254280[];
extern char D_8025429C[];
extern char D_80275F90[];
extern s16 D_80276130;
extern s8 D_80276138;
extern s8 D_8027613C;
extern char D_80280C58[];
extern char D_80280CC8[];

void func_8022BE80(void) {
    s32 sp5B;
    char *var_s2;
    char *var_s3;
    u32 temp_v0;
    u32 temp_v0_2;
    u32 var_s1;
    u32 var_s4;
    void *temp_s0;
    void *temp_s0_2;

    var_s4 = osContStartQuery(D_80280C58);
    var_s3 = &D_8027613C;
    var_s2 = &D_80276130;
    var_s1 = 0;
loop_1:
    *(s16 *)var_s2 = 0;
    *(s8 *)var_s3 = 0;
    if (var_s4 == 8) {
        func_80231A24(D_80254230);
        return;
    }
    temp_s0 = (var_s1 * 4) + D_80280CC8;
    osContGetQuery(temp_s0);
    if ((M2C_FIELD(temp_s0, u16 *, 0) & 4) && (M2C_FIELD(temp_s0, u8 *, 2) & 1)) {
        temp_s0_2 = (var_s1 * 0x68) + D_80275F90;
        temp_v0 = func_80238F10(D_80280C58, temp_s0_2, var_s1);
        var_s4 = temp_v0;
        switch (temp_v0) {
        case 1:
        case 4:
            break;
        case 0:
            *(s16 *)var_s2 = 1;
            break;
        case 10:
            func_80231A24(D_80254258, var_s1, func_80238B90(temp_s0_2));
            if (func_80238B90(temp_s0_2) == 0xA) {
                *(s8 *)var_s3 = 1;
                if (func_8024AA84(D_80280C58, temp_s0_2, var_s1) == 0) {
                    *(s16 *)var_s2 = 2;
                    *(s8 *)var_s3 = 0;
                } else {
                    *(s16 *)var_s2 = 3;
                }
            } else {
                *(s16 *)var_s2 = 1;
            }
            break;
        case 11:
            *(s16 *)var_s2 = 2;
            if (func_8024AA84(D_80280C58, temp_s0_2, var_s1) != 0) {
                *(s8 *)var_s3 = 1;
            }
            break;
        default:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            func_80231A24(D_80254280, var_s4);
            break;
        }
        var_s1 += 1;
        var_s2 += 2;
        var_s3 += 1;
        if (var_s1 == 4) {
            temp_v0_2 = func_8023D470(D_80280C58, &sp5B);
            if (temp_v0_2 != -1U) {
                if (temp_v0_2 != 0) {
                    func_80231A24(D_8025429C, temp_v0_2);
                }
                D_80276138 = 0xFF;
            }
        } else {
            goto loop_1;
        }
    }
}
