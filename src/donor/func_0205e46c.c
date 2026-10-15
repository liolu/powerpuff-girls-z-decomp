/* compiler: 2.0/sp1p5  */
/* MBi_IsSendEnabled from projets/heroes-of-mana/src/nitro/mb/mb_wm_base.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02097060;
s32 func_0205e46c(void) {
    s32 var_r0;
    s32 var_r2;
    s32 var_r3;

    var_r0 = 0;
    var_r3 = 0;
    var_r2 = 0;
    if (((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x528))) == 1) &&
        ((*(u8 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x50C))) == 0)) {
        var_r3 = 1;
    }
    if ((var_r3 != 0) && ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x526))) == 0)) {
        var_r2 = 1;
    }
    if ((var_r2 != 0) && ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x52A))) != 0)) {
        var_r0 = 1;
    }
    return var_r0;
}
