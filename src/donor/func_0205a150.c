/* compiler: 2.0/sp1p5  */
/* WM_SetIndCallback from projets/blue-dragon-awakened-shadow/src/auto/WM_SetIndCallback.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern void *func_02059bd8();
extern s32 func_02059be8();
s32 func_0205a150(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_02052c30();
    temp_r0 = func_02059be8();
    if (temp_r0 != 0) {
        func_02052c44(temp_r5);
        return temp_r0;
    }
    (*(s32 *) ((s8 *) (func_02059bd8()) + (0xC8))) = arg0;
    func_02052c44(temp_r5);
    return 0;
}
