/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020031e8 from projets/blue-dragon-awakened-shadow/src/donor/func_020031e8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_0207eebc;
extern u16 data_0208e01c;
extern u16 data_0207eebc;
extern u16 data_0208e01c;
void func_0204ee94(void) {
    data_0207eebc = 1;
    if (data_0208e01c != 0) {
        (*(u32 *) ((0x04000000) | 0x0)) = ((*(u32 *) ((0x04000000) | 0x0)) & ~0x30000) | (data_0208e01c << 16);
    } else {
        (*(u32 *) ((0x04000000) | 0x0)) |= 0x10000;
    }
}
