/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_UnlockVram from projets/blue-dragon-awakened-shadow/src/auto/OSi_UnlockVram.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_02052c30(void);
extern u32 func_02052c44(u32 state);
extern u32 data_0208e42c;
extern u16 data_0208e430[9];
extern u32 func_02052df0(register u32 value);
void func_02052e2c(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_02052c30();

    mask = bank & data_0208e42c & 0x1ff;

    while (1) {
        s32 i = 31 - func_02052df0(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_0208e430[i] == lockID) {
            data_0208e430[i] = 0;
            data_0208e42c &= ~(1 << i);
        }
    }
    func_02052c44(enabled);
}
