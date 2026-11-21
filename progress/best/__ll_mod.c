/* identical to k___ll_mod in 1080-decomp (matched), with its names changed by decompdecomp */
s64 __ll_mod(s64 a, s64 b) {                   /* Euclidean mod */
    s64 r = a % b;
    if ((r < 0 && b > 0) || (r > 0 && b < 0)) r += b;
    return r;
}
