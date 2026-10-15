/* compiler: 2.0/sp1p5  */
/* DC_FlushRange from projets/blue-dragon-awakened-shadow/src/auto/DC_FlushRange.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_0205202c(void) {
    mov ip, #0x0
    add r1, r1, r0
    bic r0, r0, #0x1f
L_02007a70:
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r0, c7, c14, 1
    add r0, r0, #0x20
    cmp r0, r1
    blt L_02007a70
    bx lr
}
// clang-format on
