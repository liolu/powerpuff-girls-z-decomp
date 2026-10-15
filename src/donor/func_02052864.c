/* compiler: 2.0/sp1p5  */
/* OS_GetDTCMAddress from projets/blue-dragon-awakened-shadow/src/auto/OS_GetDTCMAddress.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02052864(void) {
    mrc p15, 0, r0, c9, c1, 0
    ldr r1, =0xfffff000
    and r0, r0, r1
    bx lr
}
// clang-format on
