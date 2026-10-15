/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_SendMessage from projets/blue-dragon-awakened-shadow/src/auto/OS_SendMessage.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern int func_02052c30(void);
extern void func_02052c44(int state);
extern void func_0205183c(void *queue);
extern void func_0205188c(void *queue);
extern long long func_0206ee68(int a, int b);
int func_02051bfc(char *q, void *msg, int flags) {
    int enabled = func_02052c30();
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_02052c44(enabled);
            return 0;
        }
        func_0205183c(q);
    }
    (*(void ***) (q + 0x10))[(int) (func_0206ee68(*(int *) (q + 0x18) + *(int *) (q + 0x1c), *(int *) (q + 0x14)) >> 32)] =
        msg;
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) + 1;
    func_0205188c(q + 8);
    func_02052c44(enabled);
    return 1;
}
