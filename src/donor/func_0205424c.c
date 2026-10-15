/* compiler: 2.0/sp1p5  */
/* SNDi_IncAlarmId from projets/blue-dragon-awakened-shadow/src/auto/SNDi_IncAlarmId.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0208ff40;
void func_0205424c(s32 arg0) {
    s32 temp_r1;

    temp_r1                            = (arg0 * 0xC) + (s32) &data_0208ff40;
    (*(u8 *) ((s8 *) (temp_r1) + (8))) = (u8) ((*(u8 *) ((s8 *) (temp_r1) + (8))) + 1);
}
