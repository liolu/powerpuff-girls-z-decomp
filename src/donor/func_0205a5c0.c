/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WM_GetDispersionScanPeriod from projets/blue-dragon-awakened-shadow/src/auto/WM_GetDispersionScanPeriod.c (same code in
 * another game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u32 vu32;
u16 func_0205a5c0(void) {
    u8 mac[6];
    u16 sum;
    s32 i;

    func_02052d50(mac);
    for (i = 0, sum = 0; i < 6; i++) {
        sum += mac[i];
    }
    sum += *(vu32 *) 0x027ffc3c;
    sum *= 13;
    return (u16) (30 + (sum % 10));
}
