/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_DisableScheduler from projets/blue-dragon-awakened-shadow/src/auto/OS_DisableScheduler.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_0208e0c0;
extern OSIntrMode func_02052c30(void);
extern OSIntrMode func_02052c44(OSIntrMode mode);
u32 func_02051a48(void) {
    OSIntrMode interruptMode = func_02052c30();
    u32 count;

    if (data_0208e0c0.rescheduleCount < (u32) (0 - 1)) {
        count = data_0208e0c0.rescheduleCount++;
    }
    (void) func_02052c44(interruptMode);

    return count;
}
