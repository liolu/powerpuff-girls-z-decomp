/* compiler: 2.0/sp1p5  */
/* func_020158f4 from projets/heroes-of-mana/src/auto/func_020158f4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern M2C_UNK data_020900ec;
s32 func_020570e0(void) {
    s32 temp_r0;

    temp_r0 = func_02052c30();
    if ((*(s32 *) ((s8 *) (&data_020900ec) + (0x18))) != 0) {
        func_02052c44(temp_r0);
        return 0;
    }
    (*(s32 *) ((s8 *) (&data_020900ec) + (0x18))) = 1;
    func_02052c44(temp_r0);
    return 1;
}
