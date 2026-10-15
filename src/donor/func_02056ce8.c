/* compiler: 2.0/sp1p5  */
/* TP_RequestAutoSamplingStopAsync from projets/blue-dragon-awakened-shadow/src/auto/TP_RequestAutoSamplingStopAsync.c (same
 * code in another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern s32 func_02054990(M2C_UNK, s32, M2C_UNK);
extern M2C_UNK data_020900b0;
void func_02056ce8(void) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = func_02052c30();
    if (func_02054990(6, 0x03000200, 0) >= 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        func_02052c44(temp_r4);
        (*(u16 *) ((s8 *) (&data_020900b0) + (0x38))) = (u16) ((*(u16 *) ((s8 *) (&data_020900b0) + (0x38))) | 4);
        if ((*(M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK))((s8 *) (&data_020900b0) + (4))) == ((void *) 0)) {
            return;
        }
        (*(M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK))((s8 *) (&data_020900b0) + (4)))(2, 4, 0);
        return;
    }
    (*(u16 *) ((s8 *) (&data_020900b0) + (0x3A))) = (u16) ((*(u16 *) ((s8 *) (&data_020900b0) + (0x3A))) | 4);
    (*(u16 *) ((s8 *) (&data_020900b0) + (0x38))) = (u16) ((*(u16 *) ((s8 *) (&data_020900b0) + (0x38))) & ~4);
    func_02052c44(temp_r4);
}
