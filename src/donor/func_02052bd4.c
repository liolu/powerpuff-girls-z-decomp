/* compiler: 2.0/sp1p5  */
/* OS_InitVAlarm from projets/blue-dragon-awakened-shadow/src/auto/OS_InitVAlarm.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02050e44(M2C_UNK);
extern M2C_UNK data_0208e414;
void func_02052bd4(void) {
    if ((*(u16 *) ((s8 *) (&data_0208e414) + (0))) != 0) {
        return;
    }
    (*(u16 *) ((s8 *) (&data_0208e414) + (0)))    = 1U;
    (*(s32 *) ((s8 *) (&data_0208e414) + (0xC)))  = 0;
    (*(s32 *) ((s8 *) (&data_0208e414) + (0x10))) = 0;
    func_02050e44(4);
    (*(s32 *) ((s8 *) (&data_0208e414) + (8))) = 0;
    (*(s32 *) ((s8 *) (&data_0208e414) + (4))) = 0;
}
