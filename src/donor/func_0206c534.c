/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* strchr from projets/blue-dragon-awakened-shadow/src/auto/strchr.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern char *func_0206c534(const char *str, int chr);
char *func_0206c534(const char *str, int chr) {
    const char *p = str;
    char c        = chr;
    char ch;

    while ((ch = *p++)) {
        if (ch == c) {
            return ((char *) (p - 1));
        }
    }

    return (c ? 0 : (char *) (p - 1));
}
