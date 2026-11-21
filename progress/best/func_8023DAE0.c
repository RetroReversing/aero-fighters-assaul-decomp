/* Draft from identical target func_8023DB20, retargeted and judged independently. */
/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_80241760();                                /* extern */
s32 func_80241780(s32);                         /* extern */
extern void *D_80251770;

s32 func_8023DAE0(void) {
void *__repair_cached_pointer = D_80251770;

    s32 temp_a0;
    s32 sp20;

    temp_a0 = func_80241760();
    func_80241780(temp_a0);
    sp20 = (*(s32 *)((char *)(__repair_cached_pointer) + 4));
    return sp20;
}
