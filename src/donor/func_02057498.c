/* compiler: 2.0/sp1p5  */
/* func_020be828 from projets/dragon-ball-origins/src/auto/func_020be828.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
extern s32 func_020573a4();
s32 func_02057498(s32 arg0) {
    s32 var_r0;

    switch (arg0) {
        case 1:
            var_r0 = 1;
            break;
        case 3:
            var_r0 = 2;
            break;
        case 2:
            var_r0 = 3;
            break;
        default:
            var_r0 = 0;
            break;
    }
    if (var_r0 == 0) {
        return 0xFFFF;
    }
    return func_020573a4();
}
