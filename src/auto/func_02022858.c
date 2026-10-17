#include "m2c.h"

s32 func_02022858(s32 arg0, s32 arg1, void *arg2) {
    s16 temp_r3;
    s32 var_r0;

    temp_r3 = M2C_FIELD(((arg1 * 0xC) + arg0), s16 *, 0x6E);
    var_r0  = 0;
    if (M2C_FIELD(arg2, s16 *, 2) != temp_r3) {
        M2C_FIELD(arg2, s16 *, 2) = temp_r3;
        var_r0                    = 1;
    }
    return var_r0;
}
