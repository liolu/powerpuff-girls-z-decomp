/* compiler: 2.0/sp1p5  */
/* MBi_CallReset from projets/heroes-of-mana/src/nitro/mb/mb_wm_base_4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02097060;
extern s32 func_0205a844(s32);
extern M2C_UNK func_0206000c(M2C_UNK, s32);
extern M2C_UNK func_0205fb88();
s32 func_0205fb88(void) {
    s32 var_r4;

    var_r4 = func_0205a844((*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x508))));
    func_0206000c(1, var_r4);
    if (var_r4 == 2) {
        var_r4 = 0;
    }
    return var_r4;
}
