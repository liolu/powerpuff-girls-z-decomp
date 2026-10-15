/* compiler: 2.0/sp1p5  */
/* ShutdownStrm from projets/blue-dragon-awakened-shadow/src/auto/ShutdownStrm.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020635e8(M2C_UNK *, void *);
extern M2C_UNK func_02063ba4(s32);
extern M2C_UNK data_0209a3a8;
void func_0206489c(void *arg0) {
    func_02063ba4((*(s32 *) ((s8 *) (arg0) + (0x40))));
    func_020635e8(&data_0209a3a8, arg0);
    (*(s32 *) ((s8 *) (arg0) + (0x24))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x24))) & ~1);
}
