/* compiler: 2.0/sp1p5  */
/* func_02034cb8 from projets/blue-dragon-awakened-shadow/src/auto/func_02034cb8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02051de8(M2C_UNK *);
extern M2C_UNK func_02051e6c(M2C_UNK *);
extern M2C_UNK func_02064770(void *);
extern M2C_UNK func_02066b28(void *);
extern M2C_UNK data_0209aab0;
extern M2C_UNK data_0209b128;
void func_02066a90(void *arg0) {
    func_02051de8(&data_0209b128);
    if ((*(s32 *) ((s8 *) (&data_0209aab0) + (4))) != 0) {
        func_02051de8((*(s32 *) ((s8 *) (&data_0209aab0) + (4))) + 0x4C8);
    }
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x110))) << 0x1E) >> 0x1F) != 0) {
        func_02064770(arg0);
    }
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x110))) << 0x1F) >> 0x1F) != 0) {
        (*(M2C_UNK(**)(void *))((s8 *) (arg0) + (0x170)))(arg0);
    }
    func_02066b28(arg0);
    func_02051e6c(&data_0209b128);
    if ((*(s32 *) ((s8 *) (&data_0209aab0) + (4))) == 0) {
        return;
    }
    func_02051e6c((*(s32 *) ((s8 *) (&data_0209aab0) + (4))) + 0x4C8);
}
