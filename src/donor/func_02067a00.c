/* compiler: 2.0/sp1p5  */
/* func_020b35f8 from projets/dragon-ball-origins/src/auto/func_020b35f8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02065340(M2C_UNK);
extern M2C_UNK func_02053574(s32, s32, M2C_UNK);
s32 func_02067a00(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                             = func_02065340(arg1);
    (*(s32 *) ((s8 *) (arg0) + (0xA4))) = temp_r0;
    func_02053574(temp_r0, arg0 + 0xA8, 0x40);
    return 1;
}
