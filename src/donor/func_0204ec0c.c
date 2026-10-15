/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002ac0 from projets/blue-dragon-awakened-shadow/src/donor/func_02002ac0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef volatile u64 vu64;
typedef volatile u16 vu16;
extern void func_0204ec0c(s32 denom);
void func_0204ec0c(s32 denom) {
    (*(vu16 *) 0x04000280) = 1;
    (*(vu64 *) 0x04000290) = 0x1000LL << 32;
    (*(vu64 *) 0x04000298) = (u32) denom;
}
