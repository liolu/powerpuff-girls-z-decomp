/* compiler: 2.0/sp1p5  */
/* WMi_SetCallbackTable from projets/blue-dragon-awakened-shadow/src/auto/WMi_SetCallbackTable.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02090a80;
void func_02059a4c(s32 arg0, s32 arg1) {
    (*(s32 *) ((s8 *) (((*(s32 *) ((s8 *) (&data_02090a80) + (4))) + (arg0 * 4))) + (0x18))) = arg1;
}
