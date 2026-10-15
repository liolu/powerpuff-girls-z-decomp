/* compiler: 2.0/sp1p5  */
/* SNDi_CallAlarmHandler from projets/blue-dragon-awakened-shadow/src/auto/SNDi_CallAlarmHandler.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0208ff40;
void func_0205429c(s32 arg0) {
    M2C_UNK (*temp_r1)(s32);
    s32 temp_r3;

    temp_r3 = ((u8) arg0 * 0xC) + (s32) &data_0208ff40;
    if ((u8) (arg0 >> 8) != (*(u8 *) ((s8 *) (temp_r3) + (8)))) {
        return;
    }
    temp_r1 = (*(M2C_UNK(**)(s32))((s8 *) (temp_r3) + (0)));
    if (temp_r1 == ((void *) 0)) {
        return;
    }
    temp_r1((*(s32 *) ((s8 *) (temp_r3) + (4))));
}
