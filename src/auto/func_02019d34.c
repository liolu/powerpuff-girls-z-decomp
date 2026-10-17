#include "m2c.h"

M2C_UNK func_0206f5c4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206f604(void *);                      /* extern */

s32 func_02019d34(void *arg0) {
    s32 var_r1;
    s8 temp_r3;
    void *var_r2;

    if (M2C_FIELD(arg0, s8 *, 7) == 2) {
        if ((s32) M2C_FIELD(arg0, s16 *, 0x52) < (s32) M2C_FIELD(arg0, u16 *, 0x54)) {
            temp_r3 = M2C_FIELD(arg0, s8 *, 8);
            var_r1  = 0;
            if ((s32) temp_r3 > 0) {
                var_r2 = arg0;
            loop_4:
                if ((s32) M2C_FIELD(var_r2, s16 *, 0x6E) >= 0xA) {
                    func_0206f604(arg0);
                    func_0206f5c4(arg0, 4);
                } else {
                    var_r1 += 1;
                    var_r2 += 0xC;
                    if (var_r1 >= (s32) temp_r3) {

                    } else {
                        goto loop_4;
                    }
                }
            }
        } else {
            func_0206f5c4(arg0, 3);
        }
    }
    return -1;
}
