/* compiler: 2.0/sp1p5  */
/* func_020be9f4 from projets/dragon-ball-origins/src/auto/func_020be9f4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205711c();
extern s32 func_020575b8(M2C_UNK *, s32 *);
extern M2C_UNK func_0205715c;
s32 func_02057664(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020575b8(&func_0205715c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0205711c();
    return sp0;
}
