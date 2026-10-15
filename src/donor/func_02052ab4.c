/* compiler: 2.0/sp1p5  */
/* OS_InitTick from projets/blue-dragon-awakened-shadow/src/auto/OS_InitTick.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02050cd0(M2C_UNK, M2C_UNK *);
extern M2C_UNK func_02050e14(M2C_UNK);
extern M2C_UNK func_02052a98(M2C_UNK);
extern M2C_UNK data_0208e3f8;
extern M2C_UNK func_02052b2c;
void func_02052ab4(void) {
    if ((*(u16 *) ((s8 *) (&data_0208e3f8) + (0))) != 0) {
        return;
    }
    (*(u16 *) ((s8 *) (&data_0208e3f8) + (0))) = 1U;
    func_02052a98(0);
    (*(s32 *) ((s8 *) (&data_0208e3f8) + (8)))       = 0;
    (*(s32 *) ((s8 *) (&data_0208e3f8) + (0xC)))     = 0;
    (*(s16 *) ((s8 *) ((void *) 0x04000102) + (0)))  = 0;
    (*(s16 *) ((s8 *) ((void *) 0x04000102) + (-2))) = 0;
    (*(s16 *) ((s8 *) ((void *) 0x04000102) + (0)))  = 0xC1;
    func_02050cd0(8, &func_02052b2c);
    func_02050e14(8);
    (*(s32 *) ((s8 *) (&data_0208e3f8) + (4))) = 0;
}
