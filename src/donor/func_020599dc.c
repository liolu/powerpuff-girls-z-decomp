/* compiler: 2.0/sp1p5  */
/* WM_Finish from projets/blue-dragon-awakened-shadow/src/auto/WM_Finish.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern M2C_UNK func_02054920(M2C_UNK, M2C_UNK);
extern s32 func_02059be8();
extern s32 func_02059c4c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0205a08c();
extern M2C_UNK data_02090a80;
s32 func_020599dc(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = func_02052c30();
    if (func_02059be8() != 0) {
        func_02052c44(temp_r4);
        return 3;
    }
    temp_r0 = func_02059c4c(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0205a08c();
    func_02054920(0xA, 0);
    (*(s32 *) ((s8 *) (&data_02090a80) + (4))) = 0;
    (*(s16 *) ((s8 *) (&data_02090a80) + (0))) = 0;
    func_02052c44(temp_r4);
    return 0;
}
