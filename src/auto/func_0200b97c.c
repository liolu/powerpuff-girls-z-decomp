#include "m2c.h"

M2C_UNK func_02005838(s32, M2C_UNK);                /* extern */

s32 func_0200b97c(void *arg0) {
    s32 temp_r0;
    s32 var_r5;
    void *var_r6;

    var_r5                         = 0;
    var_r6                         = arg0;
    M2C_FIELD(var_r6, s32 *, 0x78) = 0;
    M2C_FIELD(var_r6, s32 *, 0x7C) = 0;
    M2C_FIELD(var_r6, s8 *, 0x54)  = 0;
    M2C_FIELD(var_r6, s8 *, 0x55)  = -1;
    M2C_FIELD(var_r6, s8 *, 0x5A)  = -1;
    do {
        temp_r0 = M2C_FIELD(var_r6, s32 *, 0x9C);
        if (temp_r0 != 0) {
            func_02005838(temp_r0, 0x44);
        }
        var_r5 += 1;
        var_r6 += 0x44;
    } while (var_r5 < 4);
    return -1;
}
