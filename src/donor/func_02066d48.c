/* compiler: 2.0/sp1p5  */
/* FreeCommandBuffer from projets/blue-dragon-awakened-shadow/src/auto/FreeCommandBuffer.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern M2C_UNK func_020634e0(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_0209aabc;
void func_02066d48(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02052c30();
    func_020634e0(&data_0209aabc, arg0);
    func_02052c44(temp_r4);
}
