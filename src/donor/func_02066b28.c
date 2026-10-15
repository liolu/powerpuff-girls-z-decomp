/* compiler: 2.0/sp1p5  */
/* func_02034d50 from projets/blue-dragon-awakened-shadow/src/auto/func_02034d50.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206679c(void *);
extern M2C_UNK func_02066bc4();
extern M2C_UNK func_02066c48(M2C_UNK *, void *);
extern M2C_UNK data_0209aab0;
extern M2C_UNK data_0209b140;
void func_02066b28(void *arg0) {
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x110))) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02066bc4(arg0);
    (*(M2C_UNK(**)(void *))((s8 *) (arg0) + (0x168)))(arg0);
    func_02066c48(&data_0209b140, arg0);
    if ((*(s32 *) ((s8 *) (&data_0209aab0) + (4))) != 0) {
        func_02066c48((*(s32 *) ((s8 *) (&data_0209aab0) + (4))) + 0x4E0, arg0);
    }
    func_0206679c(arg0);
}
