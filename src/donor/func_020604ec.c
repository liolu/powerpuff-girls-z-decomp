/* compiler: 2.0/sp1p5  */
/* MBi_SetChildMPMaxSize from projets/heroes-of-mana/src/nitro/mb/mb_block.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206ee68(M2C_UNK, M2C_UNK);
extern M2C_UNK data_020970a4;
void func_020604ec(s32 arg0) {
    s32 temp_r1;

    temp_r1                                       = arg0 - 2;
    (*(s32 *) ((s8 *) (&data_020970a4) + (8)))    = temp_r1;
    (*(s32 *) ((s8 *) (&data_020970a4) + (0xC)))  = func_0206ee68(0x1E, temp_r1);
    (*(s32 *) ((s8 *) (&data_020970a4) + (0x10))) = 0x1E;
}
