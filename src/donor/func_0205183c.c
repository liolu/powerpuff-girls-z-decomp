/* compiler: 2.0/sp1p5  */
/* OS_SleepThread from projets/blue-dragon-awakened-shadow/src/auto/OS_SleepThread.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051248(s32, void *);
extern M2C_UNK func_02051420();
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern M2C_UNK data_0208e0c0;
void func_0205183c(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02052c30();
    temp_r5 = *(*(void ***) ((s8 *) (&data_0208e0c0) + (8)));
    if (arg0 != 0) {
        (*(s32 *) ((s8 *) (temp_r5) + (0x78))) = arg0;
        func_02051248(arg0, temp_r5);
    }
    (*(s32 *) ((s8 *) (temp_r5) + (0x64))) = 0;
    func_02051420();
    func_02052c44(temp_r4);
}
