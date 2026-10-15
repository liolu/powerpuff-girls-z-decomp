/* compiler: 2.0/sp1p5  */
/* InsertPlayerList from projets/blue-dragon-awakened-shadow/src/auto/InsertPlayerList.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02063584();
extern void *func_02063648();
void func_02064204(s32 arg0, void *arg1) {
    void *var_r1;

    var_r1 = func_02063648(arg0, 0);
    if (var_r1 != ((void *) 0)) {
    loop_1:
        if ((u32) (*(u8 *) ((s8 *) (arg1) + (0x3D))) >= (u32) (*(u8 *) ((s8 *) (var_r1) + (0x3D)))) {
            var_r1 = func_02063648(arg0);
            if (var_r1 != ((void *) 0)) {
                goto loop_1;
            }
        }
    }
    func_02063584(arg0, var_r1, arg1);
    (*(s32 *) ((s8 *) (arg1) + (4))) = arg0;
}
