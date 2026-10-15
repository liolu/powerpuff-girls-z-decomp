/* compiler: 2.0/sp1p5  */
/* TP_Init from projets/blue-dragon-awakened-shadow/src/auto/TP_Init.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02054814();
extern M2C_UNK func_02054920(M2C_UNK, M2C_UNK *);
extern s32 func_0205496c(M2C_UNK, M2C_UNK);
extern M2C_UNK data_020900b0;
extern M2C_UNK func_02056734;
void func_020569b4(void) {
    if ((*(u16 *) ((s8 *) (&data_020900b0) + (0))) != 0) {
        return;
    }
    (*(u16 *) ((s8 *) (&data_020900b0) + (0))) = 1U;
    func_02054814();
    (*(s16 *) ((s8 *) (&data_020900b0) + (0x10))) = 0;
    (*(s32 *) ((s8 *) (&data_020900b0) + (4)))    = 0;
    (*(s32 *) ((s8 *) (&data_020900b0) + (0x14))) = 0;
    (*(s16 *) ((s8 *) (&data_020900b0) + (0x36))) = 0;
    (*(s16 *) ((s8 *) (&data_020900b0) + (0x34))) = 0;
    (*(s16 *) ((s8 *) (&data_020900b0) + (0x3A))) = 0;
    (*(s16 *) ((s8 *) (&data_020900b0) + (0x38))) = 0;
    do {

    } while (func_0205496c(6, 1) == 0);
    func_02054920(6, &func_02056734);
}
