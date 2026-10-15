/* compiler: 2.0/sp1p5  */
/* OS_RestoreInterrupts_IrqAndFiq from projets/blue-dragon-awakened-shadow/src/auto/OS_RestoreInterrupts_IrqAndFiq.c (same code
 * in another game of this workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02052c70(void) {
    mrs r1, cpsr
    bic r2, r1, #0xc0
    orr r2, r2, r0
    msr cpsr_c, r2
    and r0, r1, #0xc0
    bx lr
}
// clang-format on
