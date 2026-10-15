/* compiler: 2.0/sp1p5  */
/* OS_SaveContext from projets/blue-dragon-awakened-shadow/src/auto/OS_SaveContext.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void r1();
extern char func_020566b8[];
// clang-format off
asm void func_02051b24(void) {
    stmfd sp!, {r0, lr}
    add r0, r0, #0x48
    ldr r1, =func_020566b8
    blx r1
    ldmfd sp!, {r0, lr}
    add r1, r0, #0x0
    mrs r2, cpsr
    str r2, [r1], #0x4
    mov r0, #0xd3
    msr cpsr_c, r0
    str sp, [r1, #0x40]
    msr cpsr_c, r2
    mov r0, #0x1
    stmia r1, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, ip, sp, lr}
    add r0, pc, #0x8
    str r0, [r1, #0x3c]
    mov r0, #0x0
    bx lr
}
// clang-format on
