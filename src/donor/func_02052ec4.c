/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_Halt from projets/blue-dragon-awakened-shadow/src/auto/OS_Halt.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern void func_02052ec4(void);
// clang-format off
asm void func_02052ec4(void) {
    mov r0, #0
    mcr p15, 0, r0, c7, c0, 4
    bx lr
}
// clang-format on
