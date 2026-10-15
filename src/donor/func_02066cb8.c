/* compiler: 2.0/sp1p5  */
/* func_020b28b0 from projets/dragon-ball-origins/src/auto/func_020b28b0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020635e8(M2C_UNK, void *);
extern void *func_02063648(M2C_UNK, M2C_UNK);
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
void *func_02066cb8(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r4 = func_02052c30();
    temp_r0 = func_02063648(arg0, 0);
    if (temp_r0 != ((void *) 0)) {
        func_020635e8(arg0, temp_r0);
        temp_r1                                 = (*(void **) ((s8 *) (temp_r0) + (8)));
        (*(s32 *) ((s8 *) (temp_r1) + (0x11C))) = (s32) ((*(s32 *) ((s8 *) (temp_r1) + (0x11C))) - 1);
    }
    func_02052c44(temp_r4);
    return temp_r0;
}
