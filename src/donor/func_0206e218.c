/* compiler: 2.0/sp1p5  */
/* _fgr from projets/blue-dragon-awakened-shadow/src/auto/_fgr.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0206e218(void) {
    mov r3, #0xff000000
    cmp r3, r0, lsl #0x1
    cmphs r3, r1, lsl #0x1
    blo L_02023f0c
    cmp r0, #0x0
    bicmi r0, r0, #0x80000000
    rsbmi r0, r0, #0x0
    cmp r1, #0x0
    bicmi r1, r1, #0x80000000
    rsbmi r1, r1, #0x0
    cmp r0, r1
    movgt r0, #0x1
    movle r0, #0x0
    mrs ip, cpsr
    bicle ip, ip, #0x20000000
    orrgt ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02023f0c:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
}
// clang-format on
