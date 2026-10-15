/* compiler: 2.0/sp1p5  */
/* CARD_InitPulledOutCallback from projets/blue-dragon-awakened-shadow/src/auto/CARD_InitPulledOutCallback.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02054814();
extern M2C_UNK func_02054920(M2C_UNK, M2C_UNK *);
extern M2C_UNK data_02090a60;
extern M2C_UNK func_0205962c;
void func_02059600(void) {
    func_02054814();
    func_02054920(0xE, &func_0205962c);
    (*(s32 *) ((s8 *) (&data_02090a60) + (4))) = 0;
}
