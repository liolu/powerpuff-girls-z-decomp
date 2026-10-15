/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02028010 from https://github.com/RonyxDumb/mkds src/arm9/02028010_func_02028010.c (license: none), reused by
 * tools/donor_match.py */
#pragma ipa file
unsigned int func_02009094(unsigned int p0) {
    unsigned int load_0 = ((unsigned int) *(const unsigned short *) ((unsigned char *) (unsigned int) (0x400100eu) + 0));
    *(unsigned short *) ((unsigned char *) (unsigned int) (0x400100eu) + 0) =
        (unsigned short) (((((load_0) & ~(0x3u))) | (p0)));
    return ((((load_0) & ~(0x3u))) | (p0));
}
