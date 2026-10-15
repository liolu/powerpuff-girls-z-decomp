/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_IdleThreadProc from projets/blue-dragon-awakened-shadow/src/auto/OSi_IdleThreadProc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_02052c1c(void);
extern void func_02052ec4(void);
extern void func_02051a38(void *arg);
void func_02051a38(void *arg) {
    func_02052c1c();
    while (1) {
        func_02052ec4();
    }
}
