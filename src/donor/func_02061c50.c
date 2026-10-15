/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020691ec from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_charcanvas.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef struct UnkChar8bppRow {
    u32 unk_00;
    u32 unk_04;
} UnkChar8bppRow;
extern void func_02053494(u32 value, void *dest, u32 size);
void func_02061c50(void *chr, int x, int y, int w, int h, u32 pattern, u32 bpp) {
    if (w == 8 && h == 8) {
        func_02053494(pattern, chr, bpp * 8);
        return;
    }

    if (bpp == 4) {
        int lsft;
        int rsft;
        u32 mask;
        u32 val;
        u32 *p;
        u32 *end;

        lsft = x * 4;
        rsft = 32 - (lsft + w * 4);
        mask = ((0xffffffff >> lsft) << (rsft + x * 4)) >> rsft;
        p    = (u32 *) chr + y;
        end  = p + h;
        val  = pattern & mask;
        mask = ~mask;
        for (; p < end; p++) {
            *p = val | (*p & mask);
        }
    } else {
        u32 maskLo;
        u32 maskHi;
        u32 t;
        u32 valLo;
        u32 valHi;
        UnkChar8bppRow *p;
        UnkChar8bppRow *end;

        x *= 8;
        w      = 64 - (x + w * 8);
        maskLo = 0xffffffff >> x;
        if ((u32) w < 32) {
            maskLo <<= x;
        } else {
            u32 s  = w - 32;
            maskLo = (maskLo << (x + s)) >> s;
        }
        t = 0xffffffff << w;
        if ((u32) x < 32) {
            maskHi = t >> w;
        } else {
            u32 s  = x - 32;
            maskHi = (t >> (s + w)) << s;
        }

        p      = (UnkChar8bppRow *) chr + y;
        end    = p + h;
        valLo  = pattern & maskLo;
        valHi  = pattern & maskHi;
        maskLo = ~maskLo;
        maskHi = ~maskHi;
        for (; p < end; p++) {
            p->unk_00 = valLo | (p->unk_00 & maskLo);
            p->unk_04 = valHi | (p->unk_04 & maskHi);
        }
    }
}
