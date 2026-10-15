/* compiler: 2.0/sp1p5  */
/* DC_FlushAll from projets/blue-dragon-awakened-shadow/src/auto/DC_FlushAll.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
// clang-format off
asm void func_02051fc0(void) {
    mov ip, #0x0
    mov r1, #0x0
L_02007a00:
    mov r0, #0x0
L_02007a04:
    orr r2, r1, r0
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r2, c7, c14, 2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt L_02007a04
    add r1, r1, #0x40000000
    cmp r1, #0x0
    bne L_02007a00
    bx lr
}
// clang-format on
