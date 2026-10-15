/* compiler: 2.0/sp1p5  */
/* CTRDGi_PulledOutCallback from projets/blue-dragon-awakened-shadow/src/auto/CTRDGi_PulledOutCallback.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052eb4();
extern M2C_UNK func_020610d8();
extern M2C_UNK data_020970c0;
void func_0206107c(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if ((*(s32 *) ((s8 *) (&data_020970c0) + (0xC))) != 0) {
            return;
        }
        var_r0 = 0;
        if ((*(s32(**)())((s8 *) (&data_020970c0) + (0x18))) != ((void *) 0)) {
            var_r0 = (*(s32(**)())((s8 *) (&data_020970c0) + (0x18)))();
        }
        if (var_r0 != 0) {
            func_020610d8();
        }
        (*(s32 *) ((s8 *) (&data_020970c0) + (0xC))) = 1;
        return;
    }
    func_02052eb4();
}
