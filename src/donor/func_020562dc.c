/* compiler: 2.0/sp1p5  */
/* FS_WaitAsync from projets/blue-dragon-awakened-shadow/src/auto/FS_WaitAsync.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205183c(void *);
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern s32 func_02055a10(void *);
s32 func_020562dc(void *arg0) {
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r5;

    var_r5  = 0;
    temp_r4 = func_02052c30();
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        if (!((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) & 0x44)) {
            var_r5 = 1;
        } else {
            var_r5 = 0;
        }
        if (var_r5 != 0) {
            (*(volatile s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) | 4);
            do {
                func_0205183c(arg0 + 0x18);
            } while (!((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) & 0x40));
        } else {
            do {
                func_0205183c(arg0 + 0x18);
                if ((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) & 1) {
                    var_r0_2 = 1;
                } else {
                    var_r0_2 = 0;
                }
            } while (var_r0_2 != 0);
        }
    }
    func_02052c44(temp_r4);
    if (var_r5 != 0) {
        return func_02055a10(arg0);
    }
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0x14))) == 0) {
        return 1;
    }
    return 0;
}
