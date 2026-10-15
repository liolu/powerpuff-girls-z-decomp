/* compiler: 2.0/sp1p5  */
/* func_02022944 from projets/blue-dragon-awakened-shadow/src/auto/func_02022944.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef double f64;
typedef union {
    f64 value;
    struct {
        u32 lo;
        u32 hi;
    } word;
} M2C_DBL;
s32 func_0206d2e8(M2C_DBL value) {
    return value.word.hi & 0x80000000;
}
