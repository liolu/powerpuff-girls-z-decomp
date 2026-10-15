/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FSi_GetPackedName from projets/blue-dragon-awakened-shadow/src/auto/FSi_GetPackedName.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
extern u32 func_020556bc(const char *name, s32 nameLen);
u32 func_020556bc(const char *name, s32 nameLen) {
    u32 ret = 0;
    if (nameLen <= 3) {
        int i = 0;
        for (; i < nameLen; ++i) {
            u32 c = (u32) (*(u8 *) (name + i));
            if (c == 0) {
                break;
            }
            c = (u32) (c - 'A');
            if (c <= (u32) ('Z' - 'A')) {
                c = (u32) (c + 'a');
            } else {
                c = (u32) (c + 'A');
            }
            ret |= (u32) (c << (i * 8));
        }
    }
    return ret;
}
