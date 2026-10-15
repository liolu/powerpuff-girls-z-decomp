/* compiler: 2.0/sp1p5  */
/* func_020afd30 from projets/dragon-ball-origins/src/auto/func_020afd30.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020648dc(void *, M2C_UNK);
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern s32 func_020537f8(s32, M2C_UNK, s32, M2C_UNK);
s32 func_020649d8(void *arg0) {
    s32 temp_r0;
    s32 temp_r6;

    temp_r0 = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x24))) << 0x1E) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x38))) != 0) {
        do {
            temp_r6 = func_02052c30();
            func_020648dc(arg0, 1);
            func_02052c44(temp_r6);
        } while ((*(s32 *) ((s8 *) (arg0) + (0x38))) != 0);
    }
    return func_020537f8((*(s32 *) ((s8 *) (arg0) + (0x44))), 0, 1 << (*(s32 *) ((s8 *) (arg0) + (0x40))), 0);
}
