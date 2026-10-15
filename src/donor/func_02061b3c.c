/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020690f4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_charcanvas.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
extern const u8 data_02076f00[4][4][2];
// clang-format off
static inline u32 CountLeadingZeros(u32 x) {
    asm { clz x, x }
    return x;
}
// clang-format on
static inline const u8 *GetObjShiftWH(int w, int h) {
    int sw = (w >= 8) ? 3 : 31 - CountLeadingZeros(w);
    int sh = (h >= 8) ? 3 : 31 - CountLeadingZeros(h);

    return data_02076f00[sh][sw];
}
static inline u32 GetLowBits(u32 v, int shift) {
    return v & ~(0xffffffff << shift);
}
static inline u32 GetHighBits(u32 v, int shift) {
    return v & (0xffffffff << shift);
}
u32 func_02061b3c(u32 x, u32 y, int areaW, int areaH, int wShift, int hShift) {
    u32 charNo = 0;

    for (;;) {
        u32 ones  = 0xffffffff;
        int ws    = wShift;
        int hs    = hShift;
        u32 fullW = GetHighBits(areaW, ws);
        u32 fullH = GetHighBits(areaH, hs);

        if (fullH <= y) {
            charNo += areaW * fullH;
            if (fullW <= x) {
                areaH -= fullH;
                charNo += fullW * areaH;
                x -= fullW;
                y -= fullH;
                areaW -= fullW;
            } else {
                areaW = fullW;
                y -= fullH;
                areaH -= fullH;
            }
        } else {
            u32 lowH = ~(ones << hs);

            if (fullW <= x) {
                charNo += fullW * fullH;
                areaH = fullH;
                x -= fullW;
                areaW -= fullW;
            } else {
                charNo += fullW * GetHighBits(y, hs);
                return charNo + (GetHighBits(x, ws) << hs) + ((y & lowH) << ws) + GetLowBits(x, ws);
            }
        }
        {
            const u8 *shift = GetObjShiftWH(areaW, areaH);

            wShift = shift[0];
            hShift = shift[1];
        }
    }
}
