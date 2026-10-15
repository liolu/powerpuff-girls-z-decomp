/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02023244 from https://github.com/RonyxDumb/mkds src/arm9/02023244_func_02023244.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short int u16;
extern const u16(*ctrdgi_fl_maxtime);
typedef enum NNSG2d256x16PlttBGWidth {
    NNS_G2D_256x16PLTT_BG_WIDTH_128  = 16,
    NNS_G2D_256x16PLTT_BG_WIDTH_256  = 32,
    NNS_G2D_256x16PLTT_BG_WIDTH_512  = 64,
    NNS_G2D_256x16PLTT_BG_WIDTH_1024 = 128
} NNSG2d256x16PlttBGWidth;
extern void func_02062a80(void *areaBase, int areaWidth, int areaHeight, NNSG2d256x16PlttBGWidth scnWidth, int charNo,
                          int cplt);
#pragma thumb off
void func_02062a80(void *areaBase, int areaWidth, int areaHeight, NNSG2d256x16PlttBGWidth scnWidth, int charNo, int cplt) {
    u16 *pScrBase;
    int x, y;
    const u16 cplt_sft = (u16) (cplt << 12);

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

    pScrBase = areaBase;

    for (y = 0; y < areaHeight; ++y) {
        u16 *pScr = pScrBase;
        for (x = 0; x < areaWidth; ++x) {
            *pScr++ = (u16) (cplt_sft | charNo++);
        }
        pScrBase += scnWidth;
    }
}
