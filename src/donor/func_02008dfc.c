/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201d8c0 from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/func_0201d8c0.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_02008dfc(int a0) {
    int t0               = *((int *) 0x4000000);
    int t1               = t0 & -0x38000001;
    int t2               = a0 << 27;
    int t3               = t1 | t2;
    *((int *) 0x4000000) = t3;
    return t3;
}
