/* compiler: 2.0/sp1p5  */
/* SND_AllocCommand from projets/blue-dragon-awakened-shadow/src/auto/SND_AllocCommand.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02053be0(M2C_UNK);
extern M2C_UNK func_02053db0(M2C_UNK);
extern s32 func_020540cc();
extern M2C_UNK func_0205416c();
extern s32 func_02054194();
extern s32 func_020541dc();
s32 func_02053cf0(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_020541dc() == 0) {
        return 0;
    }
    temp_r0_3 = func_02054194();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_020540cc() > 0) {
        do {

        } while (func_02053be0(0) != 0);
        temp_r0_2 = func_02054194();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02053db0(1);
block_12:
    func_0205416c();
    do {
        func_02053be0(1);
        temp_r0 = func_02054194();
    } while (temp_r0 == 0);
    return temp_r0;
}
