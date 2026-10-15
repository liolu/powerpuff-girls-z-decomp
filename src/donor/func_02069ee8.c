/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* memchr from projets/blue-dragon-awakened-shadow/src/auto/memchr.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
#pragma cplusplus off
#pragma ipa file
void *func_02069ee8(const void *src, int val, int n) {
    const unsigned char *p;

    unsigned int v = (val & 0xff);

    for (p = (unsigned char *) src, n++; --n;) {
        if (*p++ == v) {
            return ((void *) (p - 1));
        }
    }

    return 0;
}
