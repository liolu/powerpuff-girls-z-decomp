/* compiler: 2.0/sp1p5  */
/* GX_EndLoadTex from projets/blue-dragon-awakened-shadow/src/auto/GX_EndLoadTex.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0204f62c(M2C_UNK);
extern void func_02053218(M2C_UNK);
extern s32 data_0207eec0;
extern M2C_UNK data_0208e03c;
void func_020509c8(void) {
    if (data_0207eec0 != -1) {
        func_02053218(data_0207eec0);
    }
    func_0204f62c((*(s32 *) ((s8 *) (&data_0208e03c) + (0x14))));
    (*(s32 *) ((s8 *) (&data_0208e03c) + (0x1C))) = 0;
    (*(s32 *) ((s8 *) (&data_0208e03c) + (0x18))) = 0;
    (*(s32 *) ((s8 *) (&data_0208e03c) + (4)))    = 0;
    (*(s32 *) ((s8 *) (&data_0208e03c) + (0x14))) = 0;
}
