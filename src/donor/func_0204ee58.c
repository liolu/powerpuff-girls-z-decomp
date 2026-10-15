/* compiler: 2.0/sp1p5  */
/* GX_DispOff from projets/blue-dragon-awakened-shadow/src/auto/GX_DispOff.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef unsigned long u32;
extern s16 data_0207eebc;
extern s16 data_0208e01c;
void func_0204ee58(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_0207eebc       = 0;
    data_0208e01c       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
