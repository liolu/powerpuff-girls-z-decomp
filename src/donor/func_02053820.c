/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_StopTimer from projets/blue-dragon-awakened-shadow/src/auto/SND_StopTimer.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern void func_02053a68(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
extern void func_0205424c(s32 no);
void func_02053820(u32 arg0, u32 arg1, u32 alarmMask, u32 arg3) {
    s32 i;
    u32 mask = alarmMask;

    for (i = 0; i < 8 && mask != 0; i++, mask >>= 1) {
        if (mask & 1) {
            func_0205424c(i);
        }
    }
    func_02053a68(13, arg0, arg1, alarmMask, arg3);
}
extern void func_02053a68(s32 id, u32 arg0, u32 arg1, u32 arg2, u32 arg3);
