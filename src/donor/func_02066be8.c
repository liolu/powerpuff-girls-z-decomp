/* compiler: 2.0/sp1p5  */
/* func_020b27e0 from projets/dragon-ball-origins/src/auto/func_020b27e0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206349c(void *, M2C_UNK);
extern M2C_UNK func_02051630(void *, M2C_UNK *, void *, s32, s32, s32);
extern M2C_UNK func_020518f4(void *);
extern M2C_UNK func_02051dd0(void *);
extern M2C_UNK func_02067a4c;
void func_02066be8(void *arg0, s32 arg1) {
    func_02051630(arg0, &func_02067a4c, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_0206349c(arg0 + 0x4E0, 0);
    func_02051dd0(arg0 + 0x4C8);
    (*(s32 *) ((s8 *) (arg0) + (0x4C4))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x4C0))) = 0;
    func_020518f4(arg0);
}
