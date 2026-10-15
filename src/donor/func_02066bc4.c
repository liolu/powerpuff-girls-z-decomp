/* compiler: 2.0/sp1p5  */
/* FreeChannel from projets/blue-dragon-awakened-shadow/src/auto/FreeChannel.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02064554();
void func_02066bc4(void *arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = (*(s32 *) ((s8 *) (arg0) + (0x120)));
    if (temp_r1 == 0) {
        return;
    }
    temp_r1_2                            = temp_r1 - 1;
    (*(s32 *) ((s8 *) (arg0) + (0x120))) = temp_r1_2;
    if (temp_r1_2 != 0) {
        return;
    }
    func_02064554();
}
