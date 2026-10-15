/* compiler: 2.0/sp1p5  */
/* SND_DestroyWaveArc from projets/blue-dragon-awakened-shadow/src/auto/SND_DestroyWaveArc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052010(void *, M2C_UNK);
extern M2C_UNK func_02053ae4();
extern M2C_UNK func_02053af8();
void func_02054584(void *arg0) {
    void *temp_r6;
    void *var_r0;

    func_02053ae4();
    var_r0 = (*(void **) ((s8 *) (arg0) + (0x18)));
    if (var_r0 != ((void *) 0)) {
        do {
            temp_r6                              = (*(void **) ((s8 *) (var_r0) + (4)));
            (*(s32 *) ((s8 *) (var_r0) + (0)))   = 0;
            (*(void **) ((s8 *) (var_r0) + (4))) = ((void *) 0);
            func_02052010(var_r0, 8);
            var_r0 = temp_r6;
        } while (temp_r6 != ((void *) 0));
    }
    func_02053af8();
}
