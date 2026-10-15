/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206a204 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_splitchar.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned char u8;
u16 func_02063434(const void **str) {
    const u8 **pp = (const u8 **) str;
    u16 c         = **pp;

    if ((c >= 0x81 && c < 0xa0) || c >= 0xe0) {
        c = (u16) ((c << 8) | (*pp)[1]);
        *pp += 2;
    } else {
        *pp += 1;
    }
    return c;
}
