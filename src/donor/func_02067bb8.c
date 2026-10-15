/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* __read_console from projets/blue-dragon-awakened-shadow/src/auto/__read_console.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_02067bb8(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
extern asm int func_02067b94(void);
// clang-format on
int func_02067bb8(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        buffer[i] = func_02067b94();
        if (buffer[i] == '\r' || buffer[i] == '\n') {
            *count = i + 1;
            break;
        }
    }

    return 0;
}
