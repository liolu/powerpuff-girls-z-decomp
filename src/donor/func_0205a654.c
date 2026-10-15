/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WM_GetNextTgid from projets/blue-dragon-awakened-shadow/src/auto/WM_GetNextTgid.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
extern void func_02057b84(void);
extern int func_02057c64(RTCTime *time);
extern u32 data_0207eee4;
u16 func_0205a654(void) {
    enum {
        TGID_DEFAULT = (1 << 16)
    };

    if (data_0207eee4 == (u32) TGID_DEFAULT) {
        RTCTime rt[1];
        func_02057b84();
        if (func_02057c64(rt) == 0) {
            data_0207eee4 = (u16) (rt->second + (rt->minute << 8));
        }
    }

    data_0207eee4 = (u16) (data_0207eee4 + 1);
    return (u16) data_0207eee4;
}
