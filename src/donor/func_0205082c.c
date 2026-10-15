/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_BeginLoadTex from projets/blue-dragon-awakened-shadow/src/donor/GX_BeginLoadTex.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState data_0208e03c;
extern const u16 data_020762e8[16][3];
extern s32 func_0204fb58(void);
void func_0205082c(void) {
    s32 bank                    = func_0204fb58();
    data_0208e03c.texBank       = bank;
    data_0208e03c.texStartAddr  = data_020762e8[bank][0] << 12;
    data_0208e03c.texStartAddr2 = data_020762e8[bank][1] << 12;
    data_0208e03c.texSize1      = data_020762e8[bank][2] << 12;
}
