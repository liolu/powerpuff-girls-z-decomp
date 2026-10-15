/* compiler: 2.0/sp1p5  */
/* FSi_SeekDirDirect from projets/blue-dragon-awakened-shadow/src/auto/FSi_SeekDirDirect.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02054b8c(void *, M2C_UNK);
void func_02054e2c(void *arg0, s16 arg1) {
    (*(s32 *) ((s8 *) (arg0) + (0xC)))  = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) | 4);
    (*(s32 *) ((s8 *) (arg0) + (0x30))) = (s32) (*(s32 *) ((s8 *) (arg0) + (8)));
    (*(s32 *) ((s8 *) (arg0) + (0x38))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x36))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x34))) = arg1;
    func_02054b8c(arg0, 2);
}
