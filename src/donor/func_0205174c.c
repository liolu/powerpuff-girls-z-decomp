/* compiler: 2.0/sp1p5  */
/* OSi_ExitThread_ArgSpecified from projets/blue-dragon-awakened-shadow/src/auto/OSi_ExitThread_ArgSpecified.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020517a8(s32);
extern M2C_UNK func_02051ab8(void *, M2C_UNK (*)(s32));
extern M2C_UNK func_02051b70(void *);
extern M2C_UNK data_0208e0c0;
void func_0205174c(void *arg0, s32 arg1) {
    if ((*(s32 *) ((s8 *) (&data_0208e0c0) + (0x1C))) != 0) {
        func_02051ab8(arg0, func_020517a8);
        (*(s32 *) ((s8 *) (arg0) + (4)))    = arg1;
        (*(s32 *) ((s8 *) (arg0) + (0)))    = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) | 0x80);
        (*(s32 *) ((s8 *) (arg0) + (0x64))) = 1;
        func_02051b70(arg0);
        return;
    }
    func_020517a8(arg1);
}
