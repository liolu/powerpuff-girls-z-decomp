/* compiler: 2.0/sp1p5  */
/* MBi_ClearParentPieceBuffer from projets/heroes-of-mana/src/nitro/mb/mb_block.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_020970a4;
extern M2C_UNK func_020534e0(s32, M2C_UNK, M2C_UNK);
void func_0206053c(s32 arg0) {
    s32 temp_r4;

    if ((*(s32 *) ((s8 *) (&data_020970a4) + (4))) == 0) {
        return;
    }
    temp_r4 = arg0 - 1;
    func_020534e0((*(s32 *) ((s8 *) (&data_020970a4) + (4))) + (temp_r4 << 5), 0, 0x1E);
    (*(s32 *) ((s8 *) (((*(s32 *) ((s8 *) (&data_020970a4) + (4))) + (temp_r4 * 4))) + (0x1E0))) = 0;
}
