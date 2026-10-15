/* compiler: 2.0/sp1p5  */
/* func_02044c48 from projets/fairy-tail-kardia/src/auto/func_02044c48.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern void *data_0209706c;
void func_0205ba9c(s32 arg0) {
    s32 temp_r0;

    temp_r0                                        = func_02052c30();
    (*(s32 *) ((s8 *) (data_0209706c) + (0x14E4))) = arg0;
    func_02052c44(temp_r0);
}
