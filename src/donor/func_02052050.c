/* compiler: 2.0/sp1p5  */
/* DC_WaitWriteBufferEmpty from projets/blue-dragon-awakened-shadow/src/auto/DC_WaitWriteBufferEmpty.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
void func_02052050(void) {
    __asm__ volatile("mov r0, #0\n"
                     "mcr p15, 0, r0, c7, c10, 4\n"
                     :
                     :
                     : "r0", "memory");
}
