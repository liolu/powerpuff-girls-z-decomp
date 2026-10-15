/* compiler: 2.0/sp1p5  */
/* GX_EndLoadTexPltt from projets/blue-dragon-awakened-shadow/src/auto/GX_EndLoadTexPltt.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0204f804(M2C_UNK);
extern void func_02053218(M2C_UNK);
extern s32 data_0207eec0;
extern M2C_UNK data_0208e03c;
void func_02050ab4(void) {
    if (data_0207eec0 != -1) {
        func_02053218(data_0207eec0);
    }
    func_0204f804((*(s32 *) ((s8 *) (&data_0208e03c) + (0xC))));
    (*(s32 *) ((s8 *) (&data_0208e03c) + (0xC))) = 0;
    (*(s32 *) ((s8 *) (&data_0208e03c) + (8)))   = 0;
}
