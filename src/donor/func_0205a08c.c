/* compiler: 2.0/sp1p5  */
/* WmClearFifoRecvFlag from projets/blue-dragon-awakened-shadow/src/auto/WmClearFifoRecvFlag.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
void func_0205a08c(void) {
    u16 temp_r0;

    temp_r0 = *(u16 *) 0x027FFF96;
    if (temp_r0 & 1) {
        *(u16 *) 0x027FFF96 = temp_r0 & ~1;
    }
}
