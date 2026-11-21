/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 alBnkfNew();
void *alHeapDBAlloc();
s32 func_80223840();
s32 func_802238F0();
s32 func_80223B30();
s32 func_8022B460();
s32 func_80231A24();
s32 func_80237F20();
extern s32 D_8024E5B0;
extern char D_80252934[];
extern char D_8025B918[];
extern s32 D_8025B980;
extern s32 D_80275240;
extern u16 D_80280BC8;

void func_80205528(s32 arg0) {
    s32 sp34;
    int temp_v0;
    int sp3C;
    unsigned int sp38;
    unsigned int temp_a0;
    void *sp30;
    u32 temp_a1;
    register int sp2C;
    register void *temp_v0_2;

    if ((arg0 >= (s32) D_80280BC8) || (temp_a0 = *(s32 *)(D_80275240 + ((unsigned)arg0 * 4)), (!temp_a0))) {
        func_80231A24(D_80252934, arg0, D_80280BC8);
        return;
    }
    temp_v0 = func_80223840(temp_a0, arg0, D_80280BC8);
    temp_a1 = temp_v0;
    func_80223B30(temp_v0, &sp34, &sp3C, 0x2E43544C, 0, 2);
    func_80223B30(temp_a1, NULL, &sp38, 0x2E54424C, 0, 2);
    func_802238F0(temp_a1);
    temp_v0_2 = alHeapDBAlloc(0, 0, D_8025B918, 1, sp34);
    sp30 = temp_v0_2;
    func_8022B460(temp_v0_2, sp3C, sp34);
    alBnkfNew(sp30, sp38);
    sp2C = (*(s32 *)((char *)(sp30) + 4));
    D_8025B980 = (u32)sp2C;
    func_80237F20(D_8024E5B0, sp2C);
}
