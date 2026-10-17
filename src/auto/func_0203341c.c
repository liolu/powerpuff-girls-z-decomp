#include "m2c.h"

M2C_UNK func_0206f5c4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206f604(void *);                      /* extern */

s32 func_0203341c(void *arg0) {
    s32 var_r1;
    s8 temp_r3;
    void *var_r2;

    if (M2C_FIELD(arg0, s8 *, 7) == 2) {
        if ((s32) M2C_FIELD(arg0, s16 *, 0x52) < 0xE10) {
            temp_r3 = M2C_FIELD(arg0, s8 *, 8);
            var_r1  = 0;
            if ((s32) temp_r3 > 0) {
                var_r2 = arg0;
            loop_4:
                if ((s32) M2C_FIELD(var_r2, s16 *, 0x6E) < 3) {
                    var_r1 += 1;
                    var_r2 += 0xC;
                    if (var_r1 >= (s32) temp_r3) {
                        goto block_6;
                    }
                    goto loop_4;
                }
            } else {
            block_6:
                var_r1 = -1;
            }
            if (var_r1 >= 0) {
                func_0206f604(arg0);
                func_0206f5c4(arg0, 4);
            }
        } else {
            func_0206f5c4(arg0, 3);
        }
    }
    return -1;
}
