/* compiler: 2.0/sp1p5  */
/* NNS_SndStrmStart from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndStrmStart.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020537f8(s32, M2C_UNK, s32, M2C_UNK);
extern M2C_UNK func_02057b24(void *);
extern M2C_UNK func_02057b3c(void *);
s32 func_0206471c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    func_020537f8((*(s32 *) ((s8 *) (arg0) + (0x44))), 0, 1 << (*(s32 *) ((s8 *) (arg0) + (0x40))), 0);
    temp_r0_2 = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x24))) << 0x1E) >> 0x1F;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    func_02057b24(arg0 + 8);
    func_02057b3c(arg0 + 0x14);
    temp_r0                             = (*(s32 *) ((s8 *) (arg0) + (0x24))) | 2;
    (*(s32 *) ((s8 *) (arg0) + (0x24))) = temp_r0;
    return temp_r0;
}
