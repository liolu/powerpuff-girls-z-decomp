/* compiler: 2.0/sp1p5  */
/* func_02016c10 from projets/mysims/src/auto/func_02016c10.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern M2C_UNK func_02052eb4();
extern M2C_UNK func_0205fbcc();
extern M2C_UNK data_02097060;
void func_0205fc60(void) {
    s32 temp_r4;

    temp_r4 = func_02052c30();
    if ((*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (0xC)))) + (0x1320))) != 0) {
        func_02052eb4();
    }
    func_0205fbcc();
    func_02052c44(temp_r4);
}
