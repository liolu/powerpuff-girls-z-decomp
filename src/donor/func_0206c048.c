/* compiler: 2.0/sp1p5  */
/* __StringWrite from projets/blue-dragon-awakened-shadow/src/auto/__StringWrite.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02069eb4(s32, M2C_UNK, s32);
s32 func_0206c048(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r5;
    u32 temp_r2;

    temp_r3 = (*(s32 *) ((s8 *) (arg0) + (8)));
    var_r5  = arg2;
    temp_r2 = (*(u32 *) ((s8 *) (arg0) + (4)));
    if ((u32) (temp_r3 + var_r5) > temp_r2) {
        var_r5 = temp_r2 - temp_r3;
    }
    func_02069eb4((*(s32 *) ((s8 *) (arg0) + (0))) + temp_r3, arg1, var_r5);
    (*(s32 *) ((s8 *) (arg0) + (8))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (8))) + var_r5);
    return 1;
}
