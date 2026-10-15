/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* IsCommandAvailable from projets/blue-dragon-awakened-shadow/src/auto/IsCommandAvailable.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern u32 func_02052c30(void);
extern u32 func_02052c44(u32 state);
extern BOOL func_02051bb4(void);
extern BOOL func_020541dc(void);
BOOL func_020541dc(void) {
    u32 enabled;
    u32 result;

    if (!func_02051bb4()) {
        return 1;
    }
    enabled              = func_02052c30();
    *(vu32 *) 0x04fff200 = 0x10;
    result               = *(vu32 *) 0x04fff200;
    func_02052c44(enabled);
    return result ? 1 : 0;
}
