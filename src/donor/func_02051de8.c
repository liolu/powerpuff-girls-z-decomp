/* compiler: 2.0/sp1p5  */
/* OS_LockMutex from projets/blue-dragon-awakened-shadow/src/auto/OS_LockMutex.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205183c(void *);
extern M2C_UNK func_02051f78(void *, void *);
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern M2C_UNK data_0208e0e4;
void func_02051de8(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_02052c30();
    temp_r7 = (*(void **) ((s8 *) (&data_0208e0e4) + (4)));
loop_1:
    temp_r0 = (*(void **) ((s8 *) (arg0) + (8)));
    if (temp_r0 == ((void *) 0)) {
        (*(void **) ((s8 *) (arg0) + (8))) = temp_r7;
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) + 1);
        func_02051f78(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) + 1);
    } else {
        (*(void **) ((s8 *) (temp_r7) + (0x84))) = arg0;
        func_0205183c(arg0);
        (*(void **) ((s8 *) (temp_r7) + (0x84))) = ((void *) 0);
        goto loop_1;
    }
    func_02052c44(temp_r4);
}
