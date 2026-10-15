/* compiler: 2.0/sp1p5  */
/* NNS_SndArcPlayerStartSeq from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndArcPlayerStartSeq.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02064f38(s32);
extern s32 func_0206614c(M2C_UNK, u8, u16, u8, void *, s32);
s32 func_02066084(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_02064f38(arg1);
    if (temp_r0 == ((void *) 0)) {
        return 0;
    }
    return func_0206614c(arg0, (*(u8 *) ((s8 *) (temp_r0) + (9))), (*(u16 *) ((s8 *) (temp_r0) + (4))),
                         (*(u8 *) ((s8 *) (temp_r0) + (8))), temp_r0, arg1);
}
