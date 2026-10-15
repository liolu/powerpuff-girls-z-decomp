/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GXS_SetGraphicsMode from https://github.com/RonyxDumb/mkds src/arm9/02027fb8_GXS_SetGraphicsMode.c (license: none), reused
 * by tools/donor_match.py */
#pragma ipa file
unsigned int func_02008e6c(unsigned int p0) {
    unsigned int load_0 = ((unsigned int) *(const unsigned int *) ((unsigned char *) (unsigned int) (0x4001000u) + 0));
    *(unsigned int *) ((unsigned char *) (unsigned int) (0x4001000u) + 0) =
        (unsigned int) (((((load_0) & ~(0xe000u))) | (((p0) << 13))));
    return ((((load_0) & ~(0xe000u))) | (((p0) << 13)));
}
