/* compiler: 2.0/sp1p5  */
/* OS_InitReset from projets/blue-dragon-awakened-shadow/src/auto/OS_InitReset.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02054814();
extern M2C_UNK func_02054920(M2C_UNK, M2C_UNK *);
extern s32 func_0205496c(M2C_UNK, M2C_UNK);
extern M2C_UNK data_0208e428;
extern M2C_UNK func_02052d1c;
void func_02052cc8(void) {
    if ((*(u16 *) ((s8 *) (&data_0208e428) + (2))) != 0) {
        return;
    }
    (*(u16 *) ((s8 *) (&data_0208e428) + (2))) = 1U;
    func_02054814();
    do {

    } while (func_0205496c(0xC, 1) == 0);
    func_02054920(0xC, &func_02052d1c);
}
