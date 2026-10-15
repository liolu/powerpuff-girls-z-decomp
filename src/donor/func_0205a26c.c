/* compiler: 2.0/sp1p5  */
/* WM_GetMPSendBufferSize from projets/blue-dragon-awakened-shadow/src/auto/WM_GetMPSendBufferSize.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051ff4(void *, M2C_UNK);
extern void *func_02059bd8();
extern s32 func_02059c4c(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0205a26c(void) {
    void *temp_r1;
    void *temp_r4;

    temp_r4 = func_02059bd8();
    if (func_02059c4c(2, 7, 8) != 0) {
        return 0;
    }
    func_02051ff4((*(void **) ((s8 *) (temp_r4) + (4))) + 0xC, 4);
    temp_r1 = (*(void **) ((s8 *) (temp_r4) + (4)));
    if ((*(s32 *) ((s8 *) (temp_r1) + (0xC))) == 1) {
        return 0;
    }
    func_02051ff4(temp_r1 + 0x3C, 4);
    return ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (temp_r4) + (4)))) + (0x3C))) + 0x1F) & ~0x1F;
}
