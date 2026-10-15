/* compiler: 2.0/sp1p5  */
/* func_020b34ac from projets/dragon-ball-origins/src/auto/func_020b34ac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02065340(M2C_UNK);
extern M2C_UNK func_02067934;
extern M2C_UNK func_020679a8;
extern M2C_UNK func_020679b8;
extern M2C_UNK func_020679f0;
extern M2C_UNK func_02067a00;
extern M2C_UNK func_02067a28;
extern M2C_UNK func_02067a2c;
extern M2C_UNK func_02067a48;
void func_020678b4(void *arg0, M2C_UNK arg1) {
    if (func_02065340(arg1) == 0) {
        (*(M2C_UNK **) ((s8 *) (arg0) + (0x164))) = &func_02067934;
        (*(M2C_UNK **) ((s8 *) (arg0) + (0x168))) = &func_020679a8;
        (*(M2C_UNK **) ((s8 *) (arg0) + (0x16C))) = &func_020679b8;
        (*(M2C_UNK **) ((s8 *) (arg0) + (0x170))) = &func_020679f0;
        return;
    }
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x164))) = &func_02067a00;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x168))) = &func_02067a28;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x16C))) = &func_02067a2c;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x170))) = &func_02067a48;
}
