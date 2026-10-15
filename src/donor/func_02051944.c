/* compiler: 2.0/sp1p5  */
/* OS_RescheduleThread from projets/blue-dragon-awakened-shadow/src/auto/OS_RescheduleThread.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051420();
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
void func_02051944(void) {
    s32 temp_r4;

    temp_r4 = func_02052c30();
    func_02051420();
    func_02052c44(temp_r4);
}
