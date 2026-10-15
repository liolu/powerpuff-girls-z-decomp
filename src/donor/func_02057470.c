/* compiler: 2.0/sp1p5  */
/* func_020be778 from projets/dragon-ball-origins/src/auto/func_020be778.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205711c();
extern s32 func_02057404(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *);
extern M2C_UNK func_0205715c;
s32 func_02057470(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02057404(arg0, arg1, &func_0205715c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0205711c();
    return sp0;
}
