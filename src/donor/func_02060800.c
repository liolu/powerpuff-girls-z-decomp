/* compiler: 2.0/sp1p5  */
/* MATH_CountPopulation from projets/blue-dragon-awakened-shadow/src/auto/MATH_CountPopulation.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
u8 func_02060800(u32 arg0) {
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r1;

    temp_r0_2 = arg0 - (0x55555555 & (arg0 >> 1));
    temp_r1   = (temp_r0_2 & 0x33333333) + (0x33333333 & (temp_r0_2 >> 2));
    temp_r0_3 = (temp_r1 + (temp_r1 >> 4)) & 0x0F0F0F0F;
    temp_r0   = temp_r0_3 + (temp_r0_3 >> 8);
    return (u8) (temp_r0 + (temp_r0 >> 0x10));
}
