/* compiler: 2.0/sp1p5  */
/* SND_CountFreeCommand from projets/blue-dragon-awakened-shadow/src/auto/SND_CountFreeCommand.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern M2C_UNK *data_0208e460;
s32 func_02054054(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02052c30();
    var_r4  = 0;
    var_r1  = data_0208e460;
    if (var_r1 != ((void *) 0)) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != ((void *) 0));
    }
    func_02052c44(temp_r0);
    return var_r4;
}
