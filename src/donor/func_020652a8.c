/* compiler: 2.0/sp1p5  */
/* func_02004ea0 from projets/heroes-of-mana/src/auto/func_02004ea0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_020563e4(void *, M2C_UNK, u32);
extern s32 func_020563f4(void *, s32, M2C_UNK);
extern void *data_0209aa70;
s32 func_020652a8(u32 arg0, M2C_UNK arg1, u32 arg2, s32 arg3) {
    u32 temp_r0;
    u32 var_r5;
    void *temp_r1;
    void *temp_r2;
    void *temp_r4;

    var_r5  = arg2;
    temp_r4 = data_0209aa70;
    temp_r2 = (*(void **) ((s8 *) (temp_r4) + (0x84)));
    if (arg0 >= (u32) (*(u32 *) ((s8 *) (temp_r2) + (8)))) {
        return -1;
    }
    temp_r1 = temp_r2 + 0xC + (arg0 * 0x10);
    temp_r0 = (*(s32 *) ((s8 *) (temp_r1) + (4))) - arg3;
    if (var_r5 > temp_r0) {
        var_r5 = temp_r0;
    }
    if (func_020563f4(temp_r4 + 0x34, (*(s32 *) ((s8 *) (temp_r1) + (0))) + arg3, 0) == 0) {
        return -1;
    }
    return func_020563e4(temp_r4 + 0x34, arg1, var_r5);
}
