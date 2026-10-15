/* compiler: 2.0/sp1p5  */
/* func_02046dc0 from projets/fairy-tail-kardia/src/auto/func_02046dc0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0205fe84(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_0205202c(M2C_UNK, M2C_UNK);
extern void func_02052050(void);
void func_0205db3c(s32 arg0, s32 arg1, s32 arg2) {
    func_0205202c(arg2, (arg0 + 0x1F) & ~0x1F);
    func_02052050();
    func_0205fe84(arg2, arg0, arg1);
}
