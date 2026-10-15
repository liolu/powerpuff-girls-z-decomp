/* compiler: 2.0/sp1p5  */
/* OSi_UnlockAllMutex from projets/blue-dragon-awakened-shadow/src/auto/OSi_UnlockAllMutex.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02051348(void *);
extern M2C_UNK func_0205188c();
void func_02051ec8(void *arg0) {
    void *temp_r0;

    if ((*(s32 *) ((s8 *) (arg0) + (0x88))) == 0) {
        return;
    }
    do {
        temp_r0                               = func_02051348(arg0 + 0x88);
        (*(s32 *) ((s8 *) (temp_r0) + (0xC))) = 0;
        (*(s32 *) ((s8 *) (temp_r0) + (8)))   = 0;
        func_0205188c();
    } while ((*(s32 *) ((s8 *) (arg0) + (0x88))) != 0);
}
