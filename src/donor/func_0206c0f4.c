/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* sprintf from projets/blue-dragon-awakened-shadow/src/auto/sprintf.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef char *va_list;
extern int func_0206c08c(char *s, unsigned int n, const char *format, va_list arg);
int func_0206c0f4(char *s, const char *format, ...) {
    return func_0206c08c(
        s, 0xffffffffUL, format,
        ((va_list) ((char *) ((unsigned int) (&format) & ~3U) + ((((unsigned int) (sizeof(format))) + 3U) & ~3U))));
}
