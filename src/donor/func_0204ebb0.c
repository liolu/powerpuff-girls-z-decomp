/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002a64 from projets/blue-dragon-awakened-shadow/src/donor/func_02002a64.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned short u16;
typedef long long s64;
typedef volatile u16 vu16;
extern s64 func_0204ebb0(void);
s64 func_0204ebb0(void) {
    while ((*(vu16 *) 0x04000280) & 0x8000) {
    }
    return (*(u64 *) 0x040002A0);
}
