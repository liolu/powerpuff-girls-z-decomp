/* compiler: 2.0/sp1p5  */
/* func_020bd7a0 from projets/dragon-ball-origins/src/auto/func_020bd7a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
void func_0205639c(s32 arg0) {
    s32 temp_r0;
    s32 var_r1;
    void *temp_r2;

    temp_r0 = func_02052c30();
    if ((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) & 1) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        (*(volatile s32 *) ((s8 *) (arg0) + (0xC)))     = (s32) ((*(volatile s32 *) ((s8 *) (arg0) + (0xC))) | 2);
        temp_r2                                         = (*(void **) ((s8 *) (arg0) + (8)));
        (*(volatile s32 *) ((s8 *) (temp_r2) + (0x1C))) = (s32) ((*(volatile s32 *) ((s8 *) (temp_r2) + (0x1C))) | 0x20);
    }
    func_02052c44(temp_r0);
}
