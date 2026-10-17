#include "m2c.h"

s32 func_0204e9d0(s32, s32 *, void *, s32);         /* extern */
M2C_UNK func_0205202c(s32, s32);                    /* extern */
M2C_UNK func_02069214(s32);                         /* extern */
s32 func_02069228();                                /* extern */

s32 func_02000c00(void *arg0, s32 arg1, s32 *arg2) {
    s32 sp0;
    s32 temp_r0;
    s32 var_r7;

    var_r7 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0) == 0x4C) && (M2C_FIELD(arg0, u8 *, 1) == 0x5A)) {
        sp0 = M2C_FIELD(arg0, u8 *, 2) + (M2C_FIELD(arg0, u8 *, 3) << 8) + (M2C_FIELD(arg0, u8 *, 4) << 0x10) +
              (M2C_FIELD(arg0, u8 *, 5) << 0x18);
        temp_r0 = func_02069228();
        var_r7  = temp_r0;
        if (var_r7 != 0) {
            if (func_0204e9d0(temp_r0, &sp0, arg0 + 6, arg1 - 6) != 0) {
                func_02069214(var_r7);
                var_r7 = 0;
            } else {
                func_0205202c(var_r7, sp0);
            }
            if (arg2 != NULL) {
                *arg2 = sp0;
            }
        }
    }
    return var_r7;
}
