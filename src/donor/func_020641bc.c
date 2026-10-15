/* compiler: 2.0/sp1p5  */
/* InitPlayer from projets/blue-dragon-awakened-shadow/src/auto/InitPlayer.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02067adc(void *);
extern M2C_UNK func_02067af4(void *, M2C_UNK, M2C_UNK);
void func_020641bc(void *arg0) {
    (*(s8 *) ((s8 *) (arg0) + (0x2E)))  = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x2D)))  = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x2F)))  = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x34))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x3E))) = 0;
    (*(s8 *) ((s8 *) (arg0) + (0x40)))  = 0x7F;
    (*(s8 *) ((s8 *) (arg0) + (0x41)))  = 0x7F;
    func_02067adc(arg0 + 0x1C);
    func_02067af4(arg0 + 0x1C, 0x7F00, 1);
}
