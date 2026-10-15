/* compiler: 2.0/sp1p5  */
/* func_02016b7c from projets/mysims/src/auto/func_02016b7c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern M2C_UNK func_0205e51c(M2C_UNK);
extern s32 func_0205fb88();
extern s32 func_020602f0();
extern M2C_UNK func_020604a4(M2C_UNK *);
extern M2C_UNK data_02097060;
extern M2C_UNK func_0205fbc0;
s32 func_0205fbcc(void) {
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 1;
    temp_r4 = func_02052c30();
    if ((*(u8 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x50D))) == 0) {
        func_0205e51c(0);
    } else if ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x526))) == 0) {
        (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x5E4))) = 0;
        (*(u16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x526))) = 1U;
        if (func_020602f0() != 0) {
            func_020604a4(&func_0205fbc0);
            var_r5 = 0;
        } else {
            var_r5 = func_0205fb88();
        }
    }
    func_02052c44(temp_r4);
    return var_r5;
}
