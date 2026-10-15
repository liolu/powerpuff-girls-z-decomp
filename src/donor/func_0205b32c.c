/* compiler: 2.0/sp1p5  */
/* WM_EndDataSharing from projets/blue-dragon-awakened-shadow/src/auto/WM_EndDataSharing.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205a194(u16, M2C_UNK, M2C_UNK);
s32 func_0205b32c(void *arg0) {
    if (arg0 == ((void *) 0)) {
        return 6;
    }
    if ((*(u16 *) ((s8 *) (arg0) + (0x80E))) == 0) {
        return 3;
    }
    func_0205a194((*(u16 *) ((s8 *) (arg0) + (0x816))), 0, 0);
    (*(u16 *) ((s8 *) (arg0) + (0x80E))) = 0U;
    (*(s16 *) ((s8 *) (arg0) + (0x81C))) = 0;
    return 0;
}
