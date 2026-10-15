/* compiler: 2.0/sp1p5  */
/* NNS_SndArcGetFileAddress from projets/blue-dragon-awakened-shadow/src/auto/NNS_SndArcGetFileAddress.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
extern void *data_0209aa70;
s32 func_02065340(u32 arg0) {
    void *temp_r2;

    temp_r2 = (*(void **) ((s8 *) (data_0209aa70) + (0x84)));
    if (arg0 >= (u32) (*(u32 *) ((s8 *) (temp_r2) + (8)))) {
        return 0;
    }
    return (*(s32 *) ((s8 *) ((temp_r2 + (arg0 * 0x10))) + (0x14)));
}
