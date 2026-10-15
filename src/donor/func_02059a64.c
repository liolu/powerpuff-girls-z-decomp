/* compiler: 2.0/sp1p5  */
/* WmGetCommandBuffer4Arm7 from projets/blue-dragon-awakened-shadow/src/auto/WmGetCommandBuffer4Arm7.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02051c90(M2C_UNK *, u16 **, M2C_UNK);
extern M2C_UNK func_02051d34(M2C_UNK *, u16 *, M2C_UNK);
extern M2C_UNK func_02051ff4(u16 *, M2C_UNK);
extern M2C_UNK data_02090a88;
u16 *func_02059a64(void) {
    u16 *sp0;

    if (func_02051c90(&data_02090a88, &sp0, 0) == 0) {
        return ((void *) 0);
    }
    func_02051ff4(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_02051d34(&data_02090a88, sp0, 1);
    return ((void *) 0);
}
