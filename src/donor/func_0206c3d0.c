/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* strncpy from projets/blue-dragon-awakened-shadow/src/auto/strncpy.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long size_t;
extern char *func_0206c3d0(char *dest, const char *src, size_t num);
char *func_0206c3d0(char *dest, const char *src, size_t n) {
    const char *p = src;
    char *q       = (char *) dest;

    n++;

    while (--n != 0) {
        if ((*q++ = *p++) == 0) {
            while (--n != 0) {
                *q++ = 0;
            }
            break;
        }
    }

    return dest;
}
