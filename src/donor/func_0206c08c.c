/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* vsnprintf from projets/blue-dragon-awakened-shadow/src/auto/vsnprintf.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned long size_t;
typedef char *va_list;
typedef struct {
    char *CharStr;
    size_t MaxCharCount;
    size_t CharsWritten;
} __OutStrCtrl;
extern int func_0206b824(void *(*WriteProc)(void *, const char *, size_t), void *WriteProcArg, const char *format_str,
                         va_list arg);
extern void *func_0206c048(void *wosc, const char *buffer, size_t numchars);
int func_0206c08c(char *s, unsigned int n, const char *format, va_list arg) {
    unsigned int end;
    __OutStrCtrl osc;

    osc.CharStr      = s;
    osc.MaxCharCount = n;
    osc.CharsWritten = 0;

    end = func_0206b824(&func_0206c048, &osc, format, arg);

    if (s != 0) {
        if (end < n) {
            s[end] = 0;
        } else if (n > 0) {
            *(s + n - 1) = 0;
        }
    }

    return end;
}
