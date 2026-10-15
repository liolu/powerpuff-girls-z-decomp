/* compiler: 2.0/sp1p5  */
/* CARDi_PulledOutCallback from projets/blue-dragon-awakened-shadow/src/auto/CARDi_PulledOutCallback.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052eb4();
extern M2C_UNK func_02059690();
extern M2C_UNK data_02090a60;
void func_0205962c(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if ((*(s32 *) ((s8 *) (&data_02090a60) + (0))) != 0) {
            return;
        }
        var_r0                                     = 1;
        (*(s32 *) ((s8 *) (&data_02090a60) + (0))) = 1;
        if ((*(s32(**)())((s8 *) (&data_02090a60) + (4))) != ((void *) 0)) {
            var_r0 = (*(s32(**)())((s8 *) (&data_02090a60) + (4)))();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02059690();
        return;
    }
    func_02052eb4();
}
