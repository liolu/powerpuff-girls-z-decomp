/* compiler: 2.0/sp1p5  */
/* _deq from projets/blue-dragon-awakened-shadow/src/auto/_deq.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0206e130(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02023db8
    cmn ip, r3, lsl #0x1
    bhs L_02023dcc
L_02023d64:
    orrs ip, r3, r1
    bmi L_02023d94
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_02023d80:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_02023d94:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_02023db8:
    bne L_02023d80
    cmp r0, #0x0
    bhi L_02023d80
    cmn ip, r3, lsl #0x1
    blo L_02023d64
L_02023dcc:
    bne L_02023d80
    cmp r2, #0x0
    bhi L_02023d80
    b L_02023d64
}
// clang-format on
