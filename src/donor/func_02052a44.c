/* compiler: 2.0/sp1p5  */
/* OSi_DisplayExContext from projets/heroes-of-mana/src/nitro/os/os_exception_2.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern char data_0208e374[];
extern void func_02052878();
extern void func_02052888();
extern void r2();
extern char data_0208e368[];
// clang-format off
asm void func_02052a44(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_0208e368
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_02052878
    ldr r1, =data_0208e368
    ldr r0, =data_0208e368
    ldr r1, [r1, #0x4]
    ldr r2, [r0, #0x0]
    ldr r0, =data_0208e374
    blx r2
    bl func_02052888
    ldmfd sp!, {r3, pc}
}
// clang-format on
