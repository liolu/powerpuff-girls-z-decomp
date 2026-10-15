/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3X_Reset from projets/blue-dragon-awakened-shadow/src/donor/G3X_Reset.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
extern void func_02050400(void);
void func_020502d4(void) {
    while ((*(vu32 *) 0x04000600) & 0x8000000) {
    }
    (*(vu32 *) 0x04000600) |= 0x8000;
    (*(vu16 *) 0x04000060) |= 0x2000;
    (*(vu16 *) 0x04000060) |= 0x1000;
    func_02050400();
    (*(vu32 *) 0x040004a4) = 0x1f0080;
    (*(vu32 *) 0x040004a8) = 0;
    (*(vu32 *) 0x040004ac) = 0;
}
extern void func_02050400(void);
