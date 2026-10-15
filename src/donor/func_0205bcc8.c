/* compiler: 2.0/sp1p5  */
/* func_02044e64 from projets/fairy-tail-kardia/src/auto/func_02044e64.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *data_0209706c;
void func_0205bcc8(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_r3)(arg0, arg1, arg2);

    temp_r3 = (*(M2C_UNK(**)())((s8 *) (data_0209706c) + (0x14E4)));
    if (temp_r3 == ((void *) 0)) {
        return;
    }
    temp_r3(arg0, arg1, arg2);
}
