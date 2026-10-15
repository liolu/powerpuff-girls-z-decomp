/* compiler: 2.0/sp1p5  */
/* InsertPrioList from projets/blue-dragon-awakened-shadow/src/auto/InsertPrioList.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02063584();
extern void *func_02063648();
extern M2C_UNK data_02099ad8;
void func_02064254(void *arg0) {
    void *var_r1;

    var_r1 = func_02063648(&data_02099ad8, 0);
    if (var_r1 != ((void *) 0)) {
    loop_2:
        if ((u32) (*(u8 *) ((s8 *) (arg0) + (0x3D))) >= (u32) (*(u8 *) ((s8 *) (var_r1) + (0x3D)))) {
            var_r1 = func_02063648(&data_02099ad8);
            if (var_r1 != ((void *) 0)) {
                goto loop_2;
            }
        }
    }
    func_02063584(&data_02099ad8, var_r1, arg0);
}
