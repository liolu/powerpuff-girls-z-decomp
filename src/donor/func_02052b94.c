/* compiler: 2.0/sp1p5  */
/* OS_InitAlarm from projets/blue-dragon-awakened-shadow/src/auto/OS_InitAlarm.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02050e44(M2C_UNK);
extern void func_02052a98(M2C_UNK);
extern M2C_UNK data_0208e408;
void func_02052b94(void) {
    if ((*(u16 *) ((s8 *) (&data_0208e408) + (0))) != 0) {
        return;
    }
    (*(u16 *) ((s8 *) (&data_0208e408) + (0))) = 1U;
    func_02052a98(1);
    (*(s32 *) ((s8 *) (&data_0208e408) + (4))) = 0;
    (*(s32 *) ((s8 *) (&data_0208e408) + (8))) = 0;
    func_02050e44(0x10);
}
