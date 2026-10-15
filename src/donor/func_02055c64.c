/* compiler: 2.0/sp1p5  */
/* FS_RegisterArchiveName from projets/blue-dragon-awakened-shadow/src/auto/FS_RegisterArchiveName.c (same code in another game
 * of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02052c30();
extern M2C_UNK func_02052c44(s32);
extern s32 func_020556bc(M2C_UNK, M2C_UNK);
extern s32 func_02055c24(M2C_UNK, M2C_UNK);
extern M2C_UNK data_02090028;
s32 func_02055c64(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 var_r8;
    void *var_r0;
    void *var_r1;

    var_r8  = 0;
    temp_r4 = func_02052c30();
    if (func_02055c24(arg1, arg2) == 0) {
        var_r1 = (*(void **) ((s8 *) (&data_02090028) + (0)));
        if (var_r1 == ((void *) 0)) {
            (*(void **) ((s8 *) (&data_02090028) + (0))) = arg0;
            (*(void **) ((s8 *) (&data_02090028) + (4))) = arg0;
            (*(s32 *) ((s8 *) (&data_02090028) + (0xC))) = 0;
            (*(s16 *) ((s8 *) (&data_02090028) + (0xA))) = 0;
            (*(s16 *) ((s8 *) (&data_02090028) + (8)))   = 0;
        } else {
            var_r0 = (*(void **) ((s8 *) (var_r1) + (4)));
            if (var_r0 != ((void *) 0)) {
                do {
                    var_r1 = var_r0;
                    var_r0 = (*(void **) ((s8 *) (var_r0) + (4)));
                } while (var_r0 != ((void *) 0));
            }
            (*(void **) ((s8 *) (var_r1) + (4))) = arg0;
            (*(void **) ((s8 *) (arg0) + (8)))   = var_r1;
        }
        (*(s32 *) ((s8 *) (arg0) + (0)))    = func_020556bc(arg1, arg2);
        var_r8                              = 1;
        (*(s32 *) ((s8 *) (arg0) + (0x1C))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x1C))) | 1);
    }
    func_02052c44(temp_r4);
    return var_r8;
}
