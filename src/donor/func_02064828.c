/* compiler: 2.0/sp1p5  */
/* ForceStopStrm from projets/blue-dragon-awakened-shadow/src/auto/ForceStopStrm.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02053820(s32, M2C_UNK, s32, M2C_UNK);
extern M2C_UNK func_02053db0(M2C_UNK);
extern M2C_UNK func_02053f6c(s32);
extern s32 func_02053fd8();
extern M2C_UNK func_02057b54(void *);
extern M2C_UNK func_02057b6c(void *);
extern M2C_UNK func_0206489c(void *);
void func_02064828(void *arg0) {
    s32 temp_r5;

    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x24))) << 0x1E) >> 0x1F) != 0) {
        func_02053820((*(s32 *) ((s8 *) (arg0) + (0x44))), 0, 1 << (*(s32 *) ((s8 *) (arg0) + (0x40))), 0);
        func_02057b54(arg0 + 8);
        func_02057b6c(arg0 + 0x14);
        (*(s32 *) ((s8 *) (arg0) + (0x24))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x24))) & ~2);
        temp_r5                             = func_02053fd8();
        func_02053db0(1);
        func_02053f6c(temp_r5);
    }
    func_0206489c(arg0);
}
