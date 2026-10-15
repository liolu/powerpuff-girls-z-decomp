/* compiler: 2.0/sp1p5  */
/* func_020be618 from projets/dragon-ball-origins/src/auto/func_020be618.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020570e0(void);
extern void func_020576e8(M2C_UNK);
extern void func_02057944(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_020900ec;
s32 func_02057310(s32 arg0, s32 arg1) {
    if (func_020570e0() == 0) {
        return 1;
    }
    (*(volatile s32 *) ((s8 *) (&data_020900ec) + (4))) = 0;
    func_020576e8(0x03006000);
    do {

    } while ((*(volatile s32 *) ((s8 *) (&data_020900ec) + (4))) == 0);
    (*(volatile s32 *) ((s8 *) (&data_020900ec) + (4))) = 0;
    (*(volatile s32 *) ((s8 *) (&data_020900ec) + (8))) = 0;
    func_02057944(0, 2, 0, 1);
    func_020576e8((u8) arg0 | 0x02006100);
    func_020576e8(0x01010000 | (u16) arg1);
    return 0;
}
