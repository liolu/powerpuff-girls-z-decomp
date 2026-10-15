/* compiler: 2.0/sp1p5  */
/* _dls from projets/blue-dragon-awakened-shadow/src/auto/_dls.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_0206e094(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02023d2c
    cmn ip, r3, lsl #0x1
    bhs L_02023d40
L_02023cc8:
    orrs ip, r3, r1
    bmi L_02023cf8
    cmp r1, r3
    cmpeq r0, r2
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_02023ce4:
    mov r0, #0x0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02023cf8:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bne L_02023d18
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
L_02023d18:
    cmp r3, r1
    cmpeq r2, r0
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_02023d2c:
    bne L_02023ce4
    cmp r0, #0x0
    bhi L_02023ce4
    cmn ip, r3, lsl #0x1
    blo L_02023cc8
L_02023d40:
    bne L_02023ce4
    cmp r2, #0x0
    bhi L_02023ce4
    b L_02023cc8
}
// clang-format on
