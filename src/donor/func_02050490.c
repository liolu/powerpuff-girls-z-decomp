/* compiler: 2.0/sp1p5  */
/* G3X_SetClearColor from projets/blue-dragon-awakened-shadow/src/auto/G3X_SetClearColor.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
void func_02050490(s32 arg0, s32 arg1, s16 arg2, s32 arg3, s32 arg4) {
    s32 var_r1;

    var_r1 = arg0 | (arg1 << 0x10) | (arg3 << 0x18);
    if (arg4 != 0) {
        var_r1 |= 0x8000;
    }
    (*(s32 *) ((s8 *) ((void *) 0x04000350) + (0))) = var_r1;
    (*(s16 *) ((s8 *) ((void *) 0x04000350) + (4))) = arg2;
}
