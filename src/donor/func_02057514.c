/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PM_SetBackLightAsync from projets/heroes-of-mana/src/donor/PM_SetBackLightAsync.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef void (*UnkPmCallback)(u32 result, void *arg);
extern u32 func_020573a4(u32 data, UnkPmCallback callback, void *arg);
extern u32 func_020573a4(u32 data, UnkPmCallback callback, void *arg);
u32 func_02057514(u32 target, u32 on, UnkPmCallback callback, void *arg) {
    u32 command = 0;

    if (target == 0) {
        if (on == 1) {
            command = 6;
        }
        if (on == 0) {
            command = 7;
        }
    } else if (target == 1) {
        if (on == 1) {
            command = 4;
        }
        if (on == 0) {
            command = 5;
        }
    } else if (target == 2) {
        if (on == 1) {
            command = 8;
        }
        if (on == 0) {
            command = 9;
        }
    }
    if (command == 0) {
        return 0xffff;
    }
    return func_020573a4(command, callback, arg);
}
