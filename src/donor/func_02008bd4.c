/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Bg_WriteMainBg0Cnt from https://github.com/Yokimitsuro/khdays-decomp src/engine/Bg_WriteMainBg0Cnt.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
#pragma ipa file
void func_02008bd4(int size, int colorMode, int screenBase, int charBase, int extPal) {
    volatile unsigned short *reg_bg0cnt = (volatile unsigned short *) 0x04000008;
    *reg_bg0cnt =
        *reg_bg0cnt & 0x43 | (size << 0xe) | (colorMode << 7) | (screenBase << 8) | (charBase << 2) | (extPal << 0xd);
}
