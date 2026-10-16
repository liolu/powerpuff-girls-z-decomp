/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PackDisplayReg0x400000c from https://github.com/Yokimitsuro/khdays-decomp src/engine/PackDisplayReg0x400000c.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
#pragma ipa file
void func_02008fbc(int size, int colorMode, int screenBase, int charBase) {
    volatile unsigned short *reg_bg2cnt = (volatile unsigned short *) 0x400100e;
    unsigned short h                    = *reg_bg2cnt;
    *reg_bg2cnt                         = (h & 0x43) | (size << 14) | (colorMode << 7) | (screenBase << 8) | (charBase << 2);
}
