/* compiler: 2.0/sp1p5  */
/* WM_GetConnectedAIDs from projets/blue-dragon-awakened-shadow/src/auto/WM_GetConnectedAIDs.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern M2C_UNK data_02090a80;
s32 func_0205a0d8(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02052c30();
    if ((*(void **) ((s8 *) (&data_02090a80) + (4))) != ((void *) 0)) {
        var_r4 = (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_02090a80) + (4)))) + (0x14C)));
    } else {
        var_r4 = 0;
    }
    func_02052c44(temp_r0);
    return (s32) (u16) var_r4;
}
