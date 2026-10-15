/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MI_StopDma from projets/blue-dragon-awakened-shadow/src/auto/MI_StopDma.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
typedef unsigned short u16;
typedef volatile u16 vu16;
void func_02053280(u32 dmaNo) {
    u32 e = func_02052c30();
    (((vu16 *) 0x040000b0)[(dmaNo) * 6 + 5]) &= ~0x3a00;
    (((vu16 *) 0x040000b0)[(dmaNo) * 6 + 5]) &= ~0x8000;
    (((vu16 *) 0x040000b0)[(dmaNo) * 6 + 5]);
    (((vu16 *) 0x040000b0)[(dmaNo) * 6 + 5]);
    if (dmaNo == 0) {
        vu32 *p = (vu32 *) (0x040000b0 + dmaNo * 12);
        p[0]    = 0;
        p[1]    = 0;
        p[2]    = 0x81400001;
    }
    func_02052c44(e);
}
