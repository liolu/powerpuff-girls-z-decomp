/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MIi_CpuCopy32 from projets/heroes-of-mana/src/nitro/mi/mi_memory_2.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
// clang-format off
asm void func_0205347c(register const u32* src, register u32* dest, register u32 count) {
    add     ip, r1, r2
@1:
    cmp     r1, ip
    ldmltia     r0!, {r2}
    stmltia     r1!, {r2}
    blt       @1
    bx      lr
}
// clang-format on
