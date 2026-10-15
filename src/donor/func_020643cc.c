/* compiler: 2.0/sp1p5  */
/* PlayerHeapDisposeCallback from projets/blue-dragon-awakened-shadow/src/auto/PlayerHeapDisposeCallback.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020635e8(s32, void *);
extern M2C_UNK func_02065418();
extern M2C_UNK data_02099f24;
void func_020643cc(void *arg0) {
    void *temp_r1;

    if ((*(s32 *) ((s8 *) (arg0) + (8))) == 0) {
        return;
    }
    func_02065418();
    temp_r1 = (*(void **) ((s8 *) (arg0) + (0xC)));
    if (temp_r1 != ((void *) 0)) {
        (*(s32 *) ((s8 *) (temp_r1) + (8))) = 0;
        return;
    }
    func_020635e8(((*(s32 *) ((s8 *) (arg0) + (0x10))) * 0x24) + (s32) &data_02099f24 + 0xC, arg0);
}
