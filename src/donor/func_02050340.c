/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3X_ClearFifo from projets/blue-dragon-awakened-shadow/src/donor/G3X_ClearFifo.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_02050340(void);
extern void func_020505c8(volatile void *fifo);
void func_02050340(void) {
    func_020505c8(((vu32 *) 0x04000400));
    while ((*(vu32 *) 0x04000600) & 0x8000000) {
    }
}
extern void func_020505c8(register volatile void *fifo);
