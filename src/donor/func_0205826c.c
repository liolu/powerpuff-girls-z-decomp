/* compiler: 2.0/sp1p5  */
/* RtcWaitBusy from projets/blue-dragon-awakened-shadow/src/auto/RtcWaitBusy.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
extern s32 data_02090158;
// clang-format off
asm void func_0205826c(void) {
    ldr ip, =data_02090158
L_0200f768:
    ldr r0, [ip, #0x0]
    cmp r0, #0x1
    beq L_0200f768
    bx lr
}
// clang-format on
