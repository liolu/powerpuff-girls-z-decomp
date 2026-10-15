/* compiler: 2.0/sp1p5  */
/* func_0202718c from projets/blue-dragon-awakened-shadow/src/auto/func_0202718c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02067cd0(void *, M2C_UNK *);
void func_020698bc(u8 *arg0) {
    M2C_UNK sp0;
    u8 temp_r4;
    void *temp_r0;

    temp_r4 = *arg0;
    temp_r0 = func_02067cd0(arg0 + 2, &sp0);
    if (!(temp_r4 & 0x40)) {
        return;
    }
    func_02067cd0(temp_r0, &sp0);
}
