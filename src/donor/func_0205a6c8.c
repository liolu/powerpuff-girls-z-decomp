/* compiler: 2.0/sp1p5  */
/* WM_Enable from projets/heroes-of-mana/src/nitro/wm/wm_standard.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02059a4c(M2C_UNK, M2C_UNK);
extern s32 func_02059abc(M2C_UNK, M2C_UNK, s32, s32, s32);
extern void *func_02059bd8();
extern s32 func_02059c4c(M2C_UNK, M2C_UNK);
s32 func_0205a6c8(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_02059c4c(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02059a4c(3, arg0);
    temp_r0_2 = func_02059bd8();
    var_r0    = func_02059abc(3, 3, (*(s32 *) ((s8 *) (temp_r0_2) + (0))), (*(s32 *) ((s8 *) (temp_r0_2) + (4))),
                              (*(s32 *) ((s8 *) (temp_r0_2) + (0x10))));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
