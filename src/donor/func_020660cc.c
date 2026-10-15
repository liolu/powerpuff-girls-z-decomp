/* compiler: 2.0/sp1p5  */
/* NNS_SndArcPlayerStartSeqArc from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndArcPlayerStartSeqArc.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 *func_02064f9c(s32);
extern s32 func_02065340(s32);
extern s32 func_02066248(M2C_UNK, u8, u16, u8, void *, s32, s32, s32);
extern void *func_02067a9c(s32, s32);
s32 func_020660cc(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 *temp_r0_3;
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0_3 = func_02064f9c(arg1);
    if (temp_r0_3 == ((void *) 0)) {
        return 0;
    }
    temp_r0_2 = func_02065340(*temp_r0_3);
    if (temp_r0_2 == 0) {
        return 0;
    }
    temp_r0 = func_02067a9c(temp_r0_2, arg2);
    if (temp_r0 == ((void *) 0)) {
        return 0;
    }
    return func_02066248(arg0, (*(u8 *) ((s8 *) (temp_r0) + (9))), (*(u16 *) ((s8 *) (temp_r0) + (4))),
                         (*(u8 *) ((s8 *) (temp_r0) + (8))), temp_r0, temp_r0_2, arg1, arg2);
}
