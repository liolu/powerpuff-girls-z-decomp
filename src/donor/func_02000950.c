/* compiler: 2.0/sp1p5  */
/* func_02000970 from projets/blue-dragon-awakened-shadow/src/auto/func_02000970.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
// clang-format off
asm void func_02000950(void) {
    cmp r0, #0x0
    beq L_02000a18
    stmfd sp!, {r4, r5, r6, r7}
    ldmea r0, {r1, r2}
    add r2, r0, r2
    sub r3, r0, r1, lsr #0x18
    bic r1, r1, #0xff000000
    sub r1, r0, r1
    mov r4, r2
L_02000994:
    cmp r3, r1
    ble L_020009f4
    ldrb r5, [r3, #-0x1]!
    mov r6, #0x8
L_020009a4:
    subs r6, r6, #0x1
    blt L_02000994
    tst r5, #0x80
    bne L_020009c0
    ldrb r0, [r3, #-0x1]!
    strb r0, [r2, #-0x1]!
    b L_020009e8
L_020009c0:
    ldrb ip, [r3, #-0x1]!
    ldrb r7, [r3, #-0x1]!
    orr r7, r7, ip, lsl #0x8
    bic r7, r7, #0xf000
    add r7, r7, #0x2
    add ip, ip, #0x20
L_020009d8:
    ldrb r0, [r2, r7]
    strb r0, [r2, #-0x1]!
    subs ip, ip, #0x10
    bge L_020009d8
L_020009e8:
    cmp r3, r1
    mov r5, r5, lsl #0x1
    bgt L_020009a4
L_020009f4:
    mov r0, #0x0
    bic r3, r1, #0x1f
L_020009fc:
    mcr p15, 0, r0, c7, c10, 4
    mcr p15, 0, r3, c7, c5, 1
    mcr p15, 0, r3, c7, c14, 1
    add r3, r3, #0x20
    cmp r3, r4
    blt L_020009fc
    ldmfd sp!, {r4, r5, r6, r7}
L_02000a18:
    bx lr
}
// clang-format on
