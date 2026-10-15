/* compiler: 2.0/sp1p5  */
/* NNS_SndHeapClear from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndHeapClear.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020635e8(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02063660(M2C_UNK, M2C_UNK);
extern void func_0206394c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02065598(M2C_UNK);
extern void func_020655d4(void);
void func_02065430(s32 arg0) {
    M2C_UNK (*temp_ip)(s32, s32, s32, s32);
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;

    var_r6 = 0;
    var_r5 = func_02063660(arg0 + 4, 0);
    if (var_r5 != 0) {
        do {
            var_r7 = func_02063660(var_r5, 0);
            if (var_r7 != 0) {
                do {
                    temp_ip = (*(M2C_UNK(**)(s32, s32, s32, s32))((s8 *) (var_r7) + (0xC)));
                    if (temp_ip != ((void *) 0)) {
                        temp_ip(var_r7 + 0x20, (*(s32 *) ((s8 *) (var_r7) + (8))), (*(s32 *) ((s8 *) (var_r7) + (0x10))),
                                (*(s32 *) ((s8 *) (var_r7) + (0x14))));
                        var_r6 = 1;
                    }
                    var_r7 = func_02063660(var_r5, var_r7);
                } while (var_r7 != 0);
            }
            func_020635e8(arg0 + 4, var_r5);
            var_r5 = func_02063660(arg0 + 4, 0);
        } while (var_r5 != 0);
    }
    func_0206394c(*(M2C_UNK *) arg0, 3);
    if (var_r6 != 0) {
        func_020655d4();
    }
    func_02065598(arg0);
}
