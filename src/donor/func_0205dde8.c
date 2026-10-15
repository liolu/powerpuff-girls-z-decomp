/* compiler: 2.0/sp1p5  */
/* func_02047098 from projets/fairy-tail-kardia/src/auto/func_02047098.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_020915c0;
void func_0205dde8(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    var_r2 = (*(s32 *) ((s8 *) (&data_020915c0) + (0x18)));
    if (var_r2 == 0) {
        (*(s32 *) ((s8 *) (&data_020915c0) + (0x18))) = arg0;
    } else {
        var_r1 = (*(s32 *) ((s8 *) (var_r2) + (0x4BC)));
        if (var_r1 != 0) {
            do {
                var_r2 = var_r1;
                var_r1 = (*(s32 *) ((s8 *) (var_r1) + (0x4BC)));
            } while (var_r1 != 0);
        }
        (*(s32 *) ((s8 *) (var_r2) + (0x4BC))) = arg0;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x4BC))) = 0;
}
