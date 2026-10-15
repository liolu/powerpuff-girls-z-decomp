/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_ReceiveMessage from projets/blue-dragon-awakened-shadow/src/auto/OS_ReceiveMessage.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern int func_02052c30(void);
extern void func_02052c44(int state);
extern void func_0205183c(void *queue);
extern void func_0205188c(void *queue);
extern long long func_0206ee68(int a, int b);
int func_02051c90(char *q, void **out, int flags) {
    int enabled = func_02052c30();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_02052c44(enabled);
            return 0;
        }
        func_0205183c(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_0206ee68(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_0205188c(q);
    func_02052c44(enabled);
    return 1;
}
