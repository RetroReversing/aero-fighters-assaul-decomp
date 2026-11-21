/* identical to k___ull_divremi in 1080-decomp (matched), with its names changed by decompdecomp */
void __ull_divremi(u64 *quot, u64 *rem, u64 val, u16 d) {
    *quot = val / d;
    *rem = val % d;
}
