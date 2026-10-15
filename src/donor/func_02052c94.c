/* compiler: 2.0/sp1p5  */
/* OS_GetProcMode from projets/blue-dragon-awakened-shadow/src/auto/OS_GetProcMode.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02052c94(void) {
    mrs r0, cpsr
    and r0, r0, #0x1f
    bx lr
}
// clang-format on
