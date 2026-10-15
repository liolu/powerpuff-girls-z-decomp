/* compiler: 2.0/sp1p5  */
/* CARD_GetBackupSectorSize from projets/blue-dragon-awakened-shadow/src/auto/CARD_GetBackupSectorSize.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_02090200;
s32 func_02058c10(void) {
    return (*(s32 *) ((s8 *) (data_02090200) + (0x1C)));
}
