/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206a174 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_splitchar.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
u16 func_020633a4(const void **str) {
    const u16 *p = (const u16 *) *str;
    u16 c        = *p++;

    *str = p;
    return c;
}
