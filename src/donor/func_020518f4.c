/* compiler: 2.0/sp1p5  */
/* OS_WakeupThreadDirect from projets/blue-dragon-awakened-shadow/src/auto/OS_WakeupThreadDirect.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051420();
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
void func_020518f4(void *arg0) {
    s32 temp_r4;

    temp_r4                             = func_02052c30();
    (*(s32 *) ((s8 *) (arg0) + (0x64))) = 1;
    func_02051420();
    func_02052c44(temp_r4);
}
