/* compiler: 2.0/sp1p5  */
/* SetPlayerPriority from projets/blue-dragon-awakened-shadow/src/auto/SetPlayerPriority.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020635e8(M2C_UNK *, void *);
extern M2C_UNK func_02064204(M2C_UNK *, void *);
extern M2C_UNK func_02064254(void *);
extern M2C_UNK data_02099ad8;
void func_0206441c(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = (*(M2C_UNK **) ((s8 *) (arg0) + (4)));
    if (temp_r4 != ((void *) 0)) {
        func_020635e8(temp_r4, arg0);
        (*(M2C_UNK **) ((s8 *) (arg0) + (4))) = ((void *) 0);
    }
    func_020635e8(&data_02099ad8, arg0);
    (*(s8 *) ((s8 *) (arg0) + (0x3D))) = arg1;
    if (temp_r4 != ((void *) 0)) {
        func_02064204(temp_r4, arg0);
    }
    func_02064254(arg0);
}
