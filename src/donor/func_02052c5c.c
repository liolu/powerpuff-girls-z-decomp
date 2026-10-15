/* compiler: 2.0/sp1p5  */
/* OS_DisableInterrupts_IrqAndFiq from projets/blue-dragon-awakened-shadow/src/auto/OS_DisableInterrupts_IrqAndFiq.c (same code
 * in another game of this workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02052c5c(void) {
    mrs r0, cpsr
    orr r1, r0, #0xc0
    msr cpsr_c, r1
    and r0, r0, #0xc0
    bx lr
}
// clang-format on
