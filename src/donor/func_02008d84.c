/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov002_SetBgOfs_main0014 from https://github.com/Yokimitsuro/khdays-decomp
 * src/overlays/scenes/ov002_field/Ov002_SetBgOfs_main0014.c (license: CC0-1.0), reused by tools/donor_match.py */
#pragma ipa file
void func_02008d84(unsigned int param_1, unsigned int param_2) {
    *(volatile unsigned int *) 0x04000014 = (param_1 & 0x1ff) | ((param_2 << 16) & (0x1ff << 16));
}
