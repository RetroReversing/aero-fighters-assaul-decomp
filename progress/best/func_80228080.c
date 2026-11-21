/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

extern unsigned short D_80280BFE;
extern unsigned short D_80280C02;
extern unsigned short D_80280C00;
s32 func_8022BA58();
extern s32 D_80275A30;
extern s32 D_80275A44;
extern s32 D_80275A48;
extern s32 D_80275A4C;
extern s32 D_80275A50;
extern s32 D_80275A54;
extern s32 D_80275A58;
extern s32 D_80275A5C;
extern char D_80280BC0[];

void func_80228080(void) {
    long var_v1;
    s32 var_v0;

    D_80275A44 = func_8022BA58(D_80280BFE << 5);
    D_80275A50 = func_8022BA58(D_80280C00 * 8);
    D_80275A48 = func_8022BA58(D_80280C02 * 0x10);
    D_80275A4C = func_8022BA58(D_80280C02 * 0x10);
    D_80275A54 = func_8022BA58(D_80280C00 * 8);
    var_v1 = 0;
    if (0 < D_80280BFE) {
        var_v0 = 0;
        do {
            var_v1++;
            *(s8 *)(D_80275A44 + var_v0) = 0;
            (*(s8 *)((char *)((D_80275A44 + (u32)var_v0)) + 1)) = 0;
            var_v0 += 0x20;
        } while (var_v1 < D_80280BFE);
    }
    D_80275A30 = 0;
    D_80275A5C = 0;
    D_80275A58 = 0;
}
