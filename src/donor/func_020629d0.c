/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020232b0 from https://github.com/RonyxDumb/mkds src/arm9/020232b0_func_020232b0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
extern const u16(*ctrdgi_fl_maxtime);
typedef enum NNSG2dTextBGWidth {
    NNS_G2D_TEXT_BG_WIDTH_256 = 32,
    NNS_G2D_TEXT_BG_WIDTH_512 = 64
} NNSG2dTextBGWidth;
typedef enum NNSG2d256x16PlttBGWidth {
    NNS_G2D_256x16PLTT_BG_WIDTH_128  = 16,
    NNS_G2D_256x16PLTT_BG_WIDTH_256  = 32,
    NNS_G2D_256x16PLTT_BG_WIDTH_512  = 64,
    NNS_G2D_256x16PLTT_BG_WIDTH_1024 = 128
} NNSG2d256x16PlttBGWidth;
extern void func_020629d0(void *scnBase, int areaWidth, int areaHeight, int areaLeft, int areaTop, NNSG2dTextBGWidth scnWidth,
                          int charNo, int cplt);
extern void func_02062a80(void *areaBase, int areaWidth, int areaHeight, NNSG2d256x16PlttBGWidth scnWidth, int charNo,
                          int cplt);
extern void func_02062a80(void *areaBase, int areaWidth, int areaHeight, NNSG2d256x16PlttBGWidth scnWidth, int charNo,
                          int cplt);
#pragma thumb off
void func_020629d0(void *scnBase, int areaWidth, int areaHeight, int areaLeft, int areaTop, NNSG2dTextBGWidth scnWidth,
                   int charNo, int cplt) {
    ((void) 0);
    ;
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);

    if (scnWidth <= 32) {
        void *areaBase = (u16 *) scnBase + (scnWidth * areaTop + areaLeft);
        func_02062a80(areaBase, areaWidth, areaHeight, (NNSG2d256x16PlttBGWidth) scnWidth, charNo, cplt);
    } else {
        const int areaRight  = areaLeft + areaWidth;
        const int areaBottom = areaTop + areaHeight;
        const u16 cplt_sft   = (u16) (cplt << 12);
        u16 *const pScrBase  = (u16 *) scnBase;
        int x, y;

        for (y = areaTop; y < areaBottom; ++y) {
            const int py = (y < 32) ? y : y + 32;
            u16 *pScr    = pScrBase + py * 32;

            for (x = areaLeft; x < areaRight; ++x) {
                const int px = (x < 32) ? x : x + 32 * 31;
                *(pScr + px) = (u16) (cplt_sft | charNo++);
            }
        }
    }
}
