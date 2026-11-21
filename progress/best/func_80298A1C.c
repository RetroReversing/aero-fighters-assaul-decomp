/* machine draft (m2c) for ido-7.1 -O2 -mips2 -G 0 -non_shared -Xcpluscomm -Wab,-r4300_mul -woff 649,838,712, tried by autopilot */

s32 func_8021BAE0();

void func_80298A1C(void *arg0) {
char *__repair_addr;

    s32 temp_a0;
    register unsigned int temp_a0_2;
    s32 temp_a2;

    temp_a2 = (*(s32 *)((char *)(arg0) + 0xB88));
    if (((*(s32 *)((char *)(arg0) + 0xB88))) != 0xFFFF) {
        func_8021BAE0(((*(s32 *)((char *)(arg0) + 0xB88))), arg0);
        (*(s32 *)((char *)(arg0) + 0xB88)) = 0xFFFF;
    }
    temp_a0 = (*(s32 *)((char *)(arg0) + 0xB7C));
    if (temp_a0 != 0xFFFF) {
        func_8021BAE0(temp_a0, arg0);
        (*(s32 *)((char *)(arg0) + 0xB7C)) = 0xFFFF;
    }
    temp_a0_2 = (*(s32 *)((char *)(arg0) + 0xBD0));
    if (temp_a0_2 != 0xFFFF) {
        (*(s32 *)((char *)(arg0) + 0xBD0)) = 0xFFFF;
        func_8021BAE0(temp_a0_2);
    }
__repair_addr = (char *)((*(void **)((char *)(arg0) + 0x14)));

    (*(s32 *)((char *)(__repair_addr) + 0x7168)) = -1;
}
