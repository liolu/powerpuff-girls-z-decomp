/* compiler: 2.0/sp1p5  */
/* func_020b296c from projets/dragon-ball-origins/src/auto/func_020b296c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02064554(void *);
extern M2C_UNK func_02066a90(void *);
extern M2C_UNK func_02051de8(M2C_UNK *);
extern M2C_UNK func_02051e6c(M2C_UNK *);
extern M2C_UNK data_0209aab0;
extern M2C_UNK data_0209b128;
void func_02066d74(s32 arg0, s32 arg1, void *arg2) {
    if (arg0 != (*(s32 *) ((s8 *) (arg2) + (0x12C)))) {
        return;
    }
    func_02051de8(&data_0209b128);
    if ((*(s32 *) ((s8 *) (&data_0209aab0) + (4))) != 0) {
        func_02051de8((*(s32 *) ((s8 *) (&data_0209aab0) + (4))) + 0x4C8);
    }
    func_02066a90(arg2);
    (*(s32 *) ((s8 *) (arg2) + (0x12C))) = 0;
    (*(s32 *) ((s8 *) (arg2) + (0x130))) = 0;
    (*(s8 *) ((s8 *) (arg2) + (0x124)))  = 0;
    if ((s32) (*(s32 *) ((s8 *) (arg2) + (0x120))) > 0) {
        func_02064554(arg2);
        (*(s32 *) ((s8 *) (arg2) + (0x120))) = 0;
    }
    func_02051e6c(&data_0209b128);
    if ((*(s32 *) ((s8 *) (&data_0209aab0) + (4))) == 0) {
        return;
    }
    func_02051e6c((*(s32 *) ((s8 *) (&data_0209aab0) + (4))) + 0x4C8);
}
