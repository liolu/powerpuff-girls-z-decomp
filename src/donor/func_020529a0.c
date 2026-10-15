/* compiler: 2.0/sp1p5  */
/* OSi_GetAndDisplayContext from projets/blue-dragon-awakened-shadow/src/auto/OSi_GetAndDisplayContext.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
extern void func_020529b4();
extern void func_02052a44();
// clang-format off
asm void func_020529a0(void) {
    stmfd sp!, {r0, lr}
    bl func_020529b4
    bl func_02052a44
    ldmfd sp!, {r0, lr}
    bx lr
}
// clang-format on
