#include "m2c.h"

M2C_UNK func_02014e60(s32, M2C_UNK);                /* extern */

void func_02014e18(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    var_r5  = M2C_FIELD(arg0, s32 *, 0xC);
    var_r4  = 0;
    if ((temp_r0 > 0) && (temp_r0 > 0)) {
        do {
            func_02014e60(var_r5, arg1);
            var_r4 += 1;
            var_r5 += 0x38;
        } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 4));
    }
}
