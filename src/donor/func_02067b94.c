/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* sys_ReadChar from projets/blue-dragon-awakened-shadow/src/auto/sys_ReadChar.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
// clang-format off
#pragma cplusplus off
#pragma ipa file
asm int func_02067b94(void) {
    str     lr, [sp, #-4]!
    mov     r1, #0
    mov     r0, #0x07
    swi     0x123456
    ldr     pc, [sp], #4
}
// clang-format on
