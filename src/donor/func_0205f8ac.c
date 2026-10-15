/* compiler: 2.0/sp1p5  */
/* MBi_StartCommon from projets/heroes-of-mana/src/nitro/mb/mb_wm_base_3.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205a150(s32);
extern s32 func_0205a7e8(s32, s32, u16);
extern M2C_UNK func_0205e4cc();
extern M2C_UNK func_0205fe28(M2C_UNK);
extern M2C_UNK data_02097060;
s32 func_0205f8ac(void) {
    s32 temp_r0;

    (*(s16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x528))) = 0;
    (*(s16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x52A))) = 0;
    (*(s16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x526))) = 0;
    (*(s16 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x548))) = 0;
    func_0205fe28(0xA);
    if ((*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (0xC)))) + (0x1320))) == 0) {
        do {
            temp_r0 = func_0205a7e8((*(s32 *) ((s8 *) (&data_02097060) + (4))),
                                    (*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x508))),
                                    (*(u16 *) ((s8 *) (&data_02097060) + (0))));
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        func_0205a150((*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x508))));
        (*(s8 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x50D))) = 1;
        return 0;
    }
    func_0205a150((*(s32 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x508))));
    (*(s8 *) ((s8 *) ((*(void **) ((s8 *) (&data_02097060) + (8)))) + (0x50D))) = 1;
    func_0205e4cc();
    return 0;
}
