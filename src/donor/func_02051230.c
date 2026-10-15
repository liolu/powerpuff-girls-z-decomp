/* compiler: 2.0/sp1p5  */
/* OSi_GetUnusedThreadId from projets/blue-dragon-awakened-shadow/src/auto/OSi_GetUnusedThreadId.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0208e0c0;
s32 func_02051230(void) {
    return (*(s32 *) ((s8 *) (&data_0208e0c0) + (0x20))) = (s32) ((*(s32 *) ((s8 *) (&data_0208e0c0) + (0x20))) + 1);
}
