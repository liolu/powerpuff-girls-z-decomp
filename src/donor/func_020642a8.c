/* compiler: 2.0/sp1p5  */
/* ForceStopSeq from projets/blue-dragon-awakened-shadow/src/auto/ForceStopSeq.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02053738(u8);
extern M2C_UNK func_020537a0(u8, s32);
extern M2C_UNK func_02064348(void *);
void func_020642a8(void *arg0) {
    if ((*(u8 *) ((s8 *) (arg0) + (0x2C))) == 2) {
        func_020537a0((*(u8 *) ((s8 *) (arg0) + (0x3C))), 0xFFFFFD2D);
    }
    func_02053738((*(u8 *) ((s8 *) (arg0) + (0x3C))));
    func_02064348(arg0);
}
