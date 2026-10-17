#include "m2c.h"

s32 func_02045c40(s32, M2C_UNK, M2C_UNK);           /* extern */

s32 func_0204784c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r9;

    var_r6 = 0;
    var_r9 = arg0;
    var_r4 = 0;
    var_r5 = 0x3F;
    do {
        temp_r0 = func_02045c40(var_r9, arg1, arg2);
        var_r4 += 1;
        var_r5 &= temp_r0;
        var_r6 |= temp_r0;
        var_r9 += 0xC;
    } while (var_r4 < 8);
    if (var_r6 == 0) {
        return 1;
    }
    if (var_r5 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return 0 - var_r0;
}
