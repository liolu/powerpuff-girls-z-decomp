/* compiler: 2.0/sp1p5  */
/* InitFrameHeap from projets/blue-dragon-awakened-shadow/src/auto/InitFrameHeap.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02063704(void *, s32, s32, M2C_UNK, s32);
void *func_02063798(void *arg0, M2C_UNK arg1, s32 arg2) {
    func_02063704(arg0, 0x46524D48, arg0 + 0x30, arg1, arg2);
    (*(s32 *) ((s8 *) (arg0) + (0x24))) = (s32) (*(s32 *) ((s8 *) (arg0) + (0x18)));
    (*(s32 *) ((s8 *) (arg0) + (0x28))) = (s32) (*(s32 *) ((s8 *) (arg0) + (0x1C)));
    (*(s32 *) ((s8 *) (arg0) + (0x2C))) = 0;
    return arg0;
}
