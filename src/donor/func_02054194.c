/* compiler: 2.0/sp1p5  */
/* AllocCommand from projets/blue-dragon-awakened-shadow/src/auto/AllocCommand.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern M2C_UNK data_0208e460;
s32 func_02054194(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = func_02052c30();
    temp_r4 = (*(M2C_UNK **) ((s8 *) (&data_0208e460) + (0)));
    if (temp_r4 == ((void *) 0)) {
        func_02052c44(temp_r0);
        return 0;
    }
    temp_r2                                         = *temp_r4;
    (*(M2C_UNK **) ((s8 *) (&data_0208e460) + (0))) = temp_r2;
    if (temp_r2 == ((void *) 0)) {
        (*(s32 *) ((s8 *) (&data_0208e460) + (0x10))) = 0;
    }
    func_02052c44(temp_r0);
    return (s32) temp_r4;
}
