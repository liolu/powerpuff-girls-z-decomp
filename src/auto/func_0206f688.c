#include "m2c.h"

s32 func_0206f688(void *arg0) {
    s32 var_r0;

    var_r0 = 1;
    if (((u32) (M2C_FIELD(arg0, u16 *, 0x22) << 0x10) >> 0x1C) != ((1 << M2C_FIELD(arg0, s8 *, 8)) - 1)) {
        var_r0 = 0;
    }
    return var_r0;
}
