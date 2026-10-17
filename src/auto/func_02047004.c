#include "m2c.h"

s32 func_02047004(void *arg0, s32 arg1) {
    s32 var_r3;

    var_r3 = 0;
    if (arg1 < (s32) M2C_FIELD(arg0, s32 *, 8)) {
        var_r3 = (arg1 * 0x78) + M2C_FIELD(arg0, s32 *, 0x10);
    }
    return var_r3;
}
