/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_EnableScheduler from projets/blue-dragon-awakened-shadow/src/auto/OS_EnableScheduler.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u8 pad_00[4];
    u32 rescheduleCount;
} SchedulerGlobals_02056b50;
extern SchedulerGlobals_02056b50 data_0208e0c0;
extern u32 func_02052c30(void);
extern void func_02052c44(u32 state);
u32 func_02051a7c(void) {
    u32 savedState = func_02052c30();
    u32 count      = 0;

    if (data_0208e0c0.rescheduleCount != 0) {
        count                         = data_0208e0c0.rescheduleCount;
        data_0208e0c0.rescheduleCount = count - 1;
    }
    func_02052c44(savedState);
    return count;
}
