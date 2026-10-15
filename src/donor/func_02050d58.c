/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_EnterDmaCallback from projets/blue-dragon-awakened-shadow/src/donor/OSi_EnterDmaCallback.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;
extern UnkIrqCallbackInfo data_0208e05c[8];
extern void func_02050d58(u32 dmaNo, void (*func)(void *), void *arg);
extern u32 func_02050e14(u32 mask);
extern UnkIrqCallbackInfo data_0208e05c[8];
void func_02050d58(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask                    = 1 << (dmaNo + 8);
    data_0208e05c[dmaNo].func   = func;
    data_0208e05c[dmaNo].arg    = arg;
    data_0208e05c[dmaNo].enable = func_02050e14(mask) & mask;
}
extern u32 func_02050e14(u32 mask);
