/* compiler: 2.0/sp1p5  */
/* MBi_GetAttribute from projets/heroes-of-mana/src/nitro/mb/mb_wm_base_7.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02097060;
u8 func_0205ff8c(void) {
    s32 var_ip;
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;

    if ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x12))) != 0) {
        var_r2 = 2;
    } else {
        var_r2 = 0;
    }
    if ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0xE))) != 0) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    if ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x14))) != 0) {
        var_ip = 4;
    } else {
        var_ip = 0;
    }
    if ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x16))) != 0) {
        var_r1 = 8;
    } else {
        var_r1 = 0;
    }
    return (u8) (var_r1 | (var_ip | (var_r3 | var_r2)));
}
