/* compiler: 2.0/sp1p5  */
/* MBi_OnInitializeDone from projets/heroes-of-mana/src/nitro/mb/mb_wm_base.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0205a150(M2C_UNK *);
extern s32 func_0205b9c4(M2C_UNK *, u16, u16, u16, s32);
extern M2C_UNK func_0206000c(M2C_UNK, s32);
extern M2C_UNK data_0207eef4;
extern M2C_UNK func_0205e560;
void func_0205e4cc(void) {
    func_0206000c(0x80, func_0205a150(&func_0205e560));
    func_0206000c(0x1D, func_0205b9c4(&func_0205e560, (*(u16 *) ((s8 *) (&data_0207eef4) + (6))),
                                      (*(u16 *) ((s8 *) (&data_0207eef4) + (2))), (*(u16 *) ((s8 *) (&data_0207eef4) + (0))),
                                      (s32) (*(u16 *) ((s8 *) (&data_0207eef4) + (4)))));
}
