/* compiler: 2.0/sp1p5  */
/* WMi_CheckIdle from projets/blue-dragon-awakened-shadow/src/auto/WMi_CheckIdle.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051ff4(u16 *, M2C_UNK);
extern s32 func_02059be8();
extern M2C_UNK data_02090a80;
s32 func_02059c04(void) {
    s32 temp_r0;

    temp_r0 = func_02059be8();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02051ff4((*(u16 **) ((s8 *) ((*(void **) ((s8 *) (&data_02090a80) + (4)))) + (4))), 2);
    if ((u32) * (*(u16 **) ((s8 *) ((*(void **) ((s8 *) (&data_02090a80) + (4)))) + (4))) <= 1U) {
        return 3;
    }
    return 0;
}
