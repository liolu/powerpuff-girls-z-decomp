/* compiler: 2.0/sp1p5  */
/* TP_WaitBusy from projets/blue-dragon-awakened-shadow/src/auto/TP_WaitBusy.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_020900b0;
void func_020570a0(s32 arg0) {
    do {

    } while ((*(volatile u16 *) ((s8 *) (&data_020900b0) + (0x3A))) & arg0);
}
