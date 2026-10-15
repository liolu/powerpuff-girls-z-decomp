/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206a188 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_splitchar.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned char u8;
u16 func_020633b8(const void **str) {
    const u8 *p = (const u8 *) *str;
    u16 c;

    if ((p[0] & 0x80) == 0) {
        c    = p[0];
        *str = p + 1;
    } else if ((p[0] & 0xe0) == 0xc0) {
        c    = (u16) (((p[0] & 0x1f) << 6) | (p[1] & 0x3f));
        *str = p + 2;
    } else {
        c    = (u16) (((p[0] & 0x1f) << 12) | ((p[1] & 0x3f) << 6) | (p[2] & 0x3f));
        *str = p + 3;
    }
    return c;
}
