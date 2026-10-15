/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_SpinWait from projets/blue-dragon-awakened-shadow/src/auto/OS_SpinWait.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
// clang-format off
asm void func_02052ca0(register u32 count) {
loop:
    subs count, count, #0x4
    bhs loop
    bx lr
}
// clang-format on
