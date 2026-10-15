/* compiler: 2.0/sp1p5  */
/* func_0201658c from projets/heroes-of-mana/src/auto/func_0201658c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02052c30(void);
extern void func_02052c44(M2C_UNK);
extern M2C_UNK func_02058284(void);
extern M2C_UNK data_02090154;
s32 func_02057bf0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_02052c30();
    if ((*(s32 *) ((s8 *) (&data_02090154) + (4))) != 0) {
        func_02052c44(temp_r0);
        return 1;
    }
    (*(s32 *) ((s8 *) (&data_02090154) + (4))) = 1;
    func_02052c44(temp_r0);
    (*(s32 *) ((s8 *) (&data_02090154) + (0x18))) = 1;
    (*(s32 *) ((s8 *) (&data_02090154) + (0x1C))) = 0;
    (*(s32 *) ((s8 *) (&data_02090154) + (0xC)))  = arg0;
    (*(s32 *) ((s8 *) (&data_02090154) + (8)))    = arg1;
    (*(s32 *) ((s8 *) (&data_02090154) + (0x14))) = arg2;
    if (func_02058284() != 0) {
        return 0;
    }
    return 3;
}
