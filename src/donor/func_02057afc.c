/* compiler: 2.0/sp1p5  */
/* PMi_ExecuteList from projets/blue-dragon-awakened-shadow/src/auto/PMi_ExecuteList.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
void func_02057afc(void *arg0) {
    void *var_r4;

    var_r4 = arg0;
    if (var_r4 == ((void *) 0)) {
        return;
    }
    do {
        (*(M2C_UNK(**)(s32))((s8 *) (var_r4) + (0)))((*(s32 *) ((s8 *) (var_r4) + (4))));
        var_r4 = (*(void **) ((s8 *) (var_r4) + (8)));
    } while (var_r4 != ((void *) 0));
}
