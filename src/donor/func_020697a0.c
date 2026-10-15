/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02027070 from projets/blue-dragon-awakened-shadow/src/auto/func_02027070.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
#pragma opt_strength_reduction off
void *func_020697a0(char *self) {
    int off  = (*(unsigned char *) (self + 0x6a) != 0) ? 0x10 : 0;
    int f60  = *(int *) (self + 0x60);
    char *lr = (char *) (*(int *) (self + 0x18) + f60 - off);
    int i;

    for (i = 15; i >= 0; i--) {
        u16 flags = *(u16 *) (self + 0x68);
        if (flags & (1 << i)) {
            lr -= 4;
            *(int *) (self + 0x1c + i * 4) = *(int *) lr;
        }
    }

    *(int *) (self + 0x14) = *(int *) (self + 0x18) + f60;
    return *(void **) (self + 0x54);
}
