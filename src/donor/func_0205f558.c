/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0201eac0 from projets/heroes-of-mana/src/donor/func_0201eac0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u32 vu32;
static inline vu32 OS_GetVBlankCount(void) {
    return *(vu32 *) (0x02000000 + 0x007ffc3c);
}
extern void func_02052d50(u8 *macAddress);
u32 func_0205f558(void) {
    u8 mac[6];
    u32 ret;
    s32 i;

    func_02052d50(mac);

    for (i = 0, ret = 0; i < 6; i++) {
        ret += mac[i];
    }

    ret += OS_GetVBlankCount();
    ret *= 7;

    return (ret % 20);
}
