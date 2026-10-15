/* compiler: 2.0/sp1p5  */
/* PMi_AppendList from projets/blue-dragon-awakened-shadow/src/auto/PMi_AppendList.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
void func_02057a68(void **arg0, void *arg1) {
    void *var_r0;
    void *var_r2;

    if (arg0 == ((void *) 0)) {
        return;
    }
    var_r2 = *arg0;
    if (var_r2 == ((void *) 0)) {
        (*(void **) ((s8 *) (arg1) + (8))) = ((void *) 0);
        *arg0                              = arg1;
        return;
    }
    var_r0 = (*(void **) ((s8 *) (var_r2) + (8)));
    if (var_r0 != ((void *) 0)) {
        do {
            var_r2 = var_r0;
            var_r0 = (*(void **) ((s8 *) (var_r0) + (8)));
        } while (var_r0 != ((void *) 0));
    }
    (*(void **) ((s8 *) (arg1) + (8)))   = var_r0;
    (*(void **) ((s8 *) (var_r2) + (8))) = arg1;
}
