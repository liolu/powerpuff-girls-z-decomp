/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FSi_StrNICmp from projets/blue-dragon-awakened-shadow/src/auto/FSi_StrNICmp.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
int func_02054d1c(const char *a, const char *b, u32 len) {
    u32 i;
    for (i = 0; i < len; ++i) {
        u32 c = (u32) (*(u8 *) (a + i) - 'A');
        u32 d = (u32) (*(u8 *) (b + i) - 'A');
        if (c <= 'Z' - 'A') {
            c += 'a' - 'A';
        }
        if (d <= 'Z' - 'A') {
            d += 'a' - 'A';
        }
        if (c != d) {
            return (int) (c - d);
        }
    }
    return 0;
}
