#include "m2c.h"

M2C_UNK func_0206f5c4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206f604(void *, s32);                 /* extern */

s32 func_0201d818(void *arg0) {
    s32 var_r6;
    void *var_r7;

    if ((M2C_FIELD(arg0, s8 *, 7) == 2) && (M2C_FIELD(arg0, s8 *, 0xCEA) == 1) && (M2C_FIELD(arg0, s8 *, 0xCEB) == 1)) {
        if ((s32) M2C_FIELD(arg0, s16 *, 0x52) < 0x708) {
            var_r6 = 0;
            if ((s32) M2C_FIELD(arg0, s8 *, 8) > 0) {
                var_r7 = arg0;
                do {
                    if ((s32) M2C_FIELD(var_r7, s16 *, 0x6E) >= 5) {
                        func_0206f604(arg0, var_r6);
                        func_0206f5c4(arg0, 4);
                    }
                    var_r6 += 1;
                    var_r7 += 0xC;
                } while (var_r6 < (s32) M2C_FIELD(arg0, s8 *, 8));
            }
        } else {
            func_0206f5c4(arg0, 3);
        }
    }
    return -1;
}
