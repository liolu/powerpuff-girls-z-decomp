/* compiler: 2.0/sp1p5  */
/* exit from projets/blue-dragon-awakened-shadow/src/auto/exit.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02069a2c(M2C_UNK);
extern M2C_UNK func_020692ac();
extern M2C_UNK data_0209b928;
void func_020699e0(M2C_UNK arg0) {
    if ((*(s32 *) ((s8 *) (&data_0209b928) + (0xC))) == 0) {
        func_020692ac();
        if ((*(M2C_UNK(**)())((s8 *) (&data_0209b928) + (4))) != ((void *) 0)) {
            (*(M2C_UNK(**)())((s8 *) (&data_0209b928) + (4)))();
            (*(M2C_UNK(**)())((s8 *) (&data_0209b928) + (4))) = ((void *) 0);
        }
    }
    func_02069a2c(arg0);
}
