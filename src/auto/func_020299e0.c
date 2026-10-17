#include "m2c.h"

M2C_UNK func_0206f5c4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206f604(void *, s32);                 /* extern */

s32 func_020299e0(void *arg0) {
    s16 temp_r0;
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;
    s8 temp_lr;
    void *var_ip;

    if (M2C_FIELD(arg0, s8 *, 7) == 2) {
        if ((s32) M2C_FIELD(arg0, s16 *, 0x52) < (s32) M2C_FIELD(arg0, u16 *, 0x54)) {
            if ((M2C_FIELD(arg0, u8 *, 0x6B0) != 0) && ((s32) M2C_FIELD(arg0, s16 *, 0x50) > 0xB4)) {
                temp_lr = M2C_FIELD(arg0, s8 *, 8);
                var_r2  = 0;
                var_r1  = 0;
                var_r3  = 0;
                if ((s32) temp_lr > 0) {
                    var_ip = arg0;
                    do {
                        temp_r0 = M2C_FIELD(var_ip, s16 *, 0x6E);
                        var_ip += 0xC;
                        if (var_r2 < (s32) temp_r0) {
                            var_r1 = var_r3;
                            var_r2 = (s32) temp_r0;
                        }
                        var_r3 += 1;
                    } while (var_r3 < (s32) temp_lr);
                }
                func_0206f604(arg0, var_r1);
                func_0206f5c4(arg0, 4);
            }
        } else {
            func_0206f5c4(arg0, 3);
        }
    }
    return -1;
}
