/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02069324 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/g2d/g2d_charcanvas.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned char u8;
typedef char s8;
typedef struct UnkGlyphCharParam {
    void *unk_00;
    u8 *unk_04;
    int unk_08;
    int unk_0c;
    int unk_10;
    int unk_14;
    int unk_18;
    int unk_1c;
    int unk_20;
    int unk_24;
} UnkGlyphCharParam;
typedef struct UnkBitReader {
    u8 *unk_00;
    s8 unk_04;
    u8 unk_05;
} UnkBitReader;
extern u32 func_02063344(UnkBitReader *reader, int nBits);
static inline int UnkCanvasMin(int a, int b) {
    return (a <= b) ? a : b;
}
static inline int UnkCanvasMax(int a, int b) {
    return (a >= b) ? a : b;
}
static inline void UnkCanvasReaderInit(UnkBitReader *reader, const void *src) {
    reader->unk_04 = 0;
    reader->unk_00 = (u8 *) src;
    reader->unk_05 = 0;
}
void func_02061d88(UnkGlyphCharParam *i) {
    const u8 *pSrc;
    u32 x_st;
    u32 x_ed;
    u32 y_st;
    u32 y_ed;
    u32 offset;

    {
        u32 bit_y_begin;

        x_st = (unsigned int) UnkCanvasMax(i->unk_08, 0);
        y_st = (unsigned int) UnkCanvasMax(i->unk_0c, 0);
        x_ed = (unsigned int) UnkCanvasMin(8, i->unk_08 + i->unk_10);
        y_ed = (unsigned int) UnkCanvasMin(8, i->unk_0c + i->unk_14);

        bit_y_begin = (unsigned int) -UnkCanvasMin(i->unk_0c, 0);
        offset      = -UnkCanvasMin(i->unk_08, 0) * i->unk_1c + bit_y_begin * i->unk_18;

        pSrc = i->unk_04;
    }

    {
        u32 x;
        const int dsrc   = i->unk_18;
        const int srcBpp = i->unk_1c;
        const int dstBpp = i->unk_20;

        x_st *= dstBpp;
        x_ed *= dstBpp;

        if (dstBpp == 4) {
            u32 *pDst    = (u32 *) i->unk_00 + y_st;
            u32 *pDstEnd = (u32 *) i->unk_00 + y_ed;
            u32 cl       = i->unk_24;

            for (; pDst < pDstEnd; pDst++) {
                UnkBitReader reader;
                u32 out_line = *pDst;

                UnkCanvasReaderInit(&reader, pSrc + offset / 8);
                (void) func_02063344(&reader, (int) offset % 8);

                for (x = x_st; x < x_ed; x += 4) {
                    u32 bits = func_02063344(&reader, srcBpp);

                    if (bits != 0) {
                        out_line = (out_line & ~(0xF << x)) | ((cl + bits) << x);
                    }
                }

                *pDst = out_line;

                offset += dsrc;
            }
        } else {
            u32 *pDst          = (u32 *) ((u64 *) i->unk_00 + y_st);
            u32 *const pDstEnd = (u32 *) ((u64 *) i->unk_00 + y_ed);
            u32 cl             = i->unk_24;

            for (; pDst < pDstEnd; pDst += 2) {
                UnkBitReader reader;
                u32 out_line_0 = *pDst;
                u32 out_line_1 = *(pDst + 1);

                UnkCanvasReaderInit(&reader, pSrc + offset / 8);
                (void) func_02063344(&reader, (int) offset % 8);

                for (x = x_st; x < x_ed; x += 8) {
                    u32 bits = func_02063344(&reader, srcBpp);

                    if (bits != 0) {
                        if (x < 32) {
                            out_line_0 = (out_line_0 & ~((u32) 0xFF << x)) | ((u32) (cl + bits) << x);
                        } else {
                            const u32 x_32 = x - 32;
                            out_line_1     = (out_line_1 & ~((u32) 0xFF << x_32)) | ((u32) (cl + bits) << x_32);
                        }
                    }
                }

                *pDst       = out_line_0;
                *(pDst + 1) = out_line_1;

                offset += dsrc;
            }
        }
    }
}
