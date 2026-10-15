/* compiler: 2.0/sp1p5  */
/* OS_DisableInterrupts from projets/blue-dragon-awakened-shadow/src/auto/OS_DisableInterrupts.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02052c30(void) {
    mrs r0, cpsr
    orr r1, r0, #0x80
    msr cpsr_c, r1
    and r0, r0, #0x80
    bx lr
}
// clang-format on
