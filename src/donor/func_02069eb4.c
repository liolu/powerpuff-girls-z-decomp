/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* memcpy from projets/blue-dragon-awakened-shadow/src/auto/memcpy.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
#pragma cplusplus off
#pragma ipa file
void *func_02069eb4(void *dst, const void *src, int n) {
    const char *p = (char *) src;
    char *q       = (char *) dst;

    for (n++; --n;) {
        *q++ = *p++;
    }

    return dst;
}
