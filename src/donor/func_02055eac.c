/* compiler: 2.0/sp1p5  */
/* FS_SetArchiveProc from projets/blue-dragon-awakened-shadow/src/auto/FS_SetArchiveProc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_02055eac(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r1;
    s32 var_r2;

    var_r1 = arg1;
    var_r2 = arg2;
    if (var_r2 == 0) {
        var_r1 = 0;
    } else if (var_r1 == 0) {
        var_r2 = 0;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x54))) = var_r1;
    (*(s32 *) ((s8 *) (arg0) + (0x58))) = var_r2;
}
