/* compiler: 2.0/sp1p5  */
/* IC_InvalidateRange from projets/blue-dragon-awakened-shadow/src/auto/IC_InvalidateRange.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_0205205c(void) {
    add r1, r1, r0
    bic r0, r0, #0x1f
L_02007aa8:
    mcr p15, 0, r0, c7, c5, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_02007aa8
    bx lr
}
// clang-format on
