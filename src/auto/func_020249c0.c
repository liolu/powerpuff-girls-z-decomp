#include "m2c.h"

M2C_UNK func_0206f5c4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206f604(void *, s32);                 /* extern */

s32 func_020249c0(void *arg0) {
    s16 temp_r0;
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;
    s8 temp_lr;
    void *var_ip;

    if ((M2C_FIELD(arg0, s8 *, 7) == 2) && ((s32) M2C_FIELD(arg0, s32 *, 0xA34) >= 5)) {
        temp_lr = M2C_FIELD(arg0, s8 *, 8);
        var_r2  = 0;
        var_r3  = 0;
        var_r1  = -1;
        if ((s32) temp_lr > 0) {
            var_ip = arg0;
            do {
                temp_r0 = M2C_FIELD(var_ip, s16 *, 0x6E);
                var_ip += 0xC;
                if ((s32) temp_r0 > var_r2) {
                    var_r1 = var_r3;
                    var_r2 = (s32) temp_r0;
                }
                var_r3 += 1;
            } while (var_r3 < (s32) temp_lr);
        }
        if (var_r2 == 0) {
            func_0206f5c4(arg0, 4);
        } else {
            func_0206f604(arg0, var_r1);
            func_0206f5c4(arg0, 6);
        }
    }
    return -1;
}
