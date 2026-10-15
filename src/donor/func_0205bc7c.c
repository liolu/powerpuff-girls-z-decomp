/* compiler: 2.0/sp1p5  */
/* func_02044e18 from projets/fairy-tail-kardia/src/auto/func_02044e18.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205bcc8(s32, s32, M2C_UNK);
extern s32 func_0205ce40();
extern s32 data_0209706c;
void func_0205bc7c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (func_0205ce40() != 0) {
        (*(s32 *) ((s8 *) ((data_0209706c + ((arg0 - 1) * 4))) + (0x14E8))) = arg1;
    }
    func_0205bcc8(arg0, arg1, arg2);
}
