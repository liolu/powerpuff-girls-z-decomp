#include "m2c.h"

s32 func_020612a8(M2C_UNK, s32);                    /* extern */

s32 func_020080e8(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020612a8(arg0, 0x5343524E);
    if (temp_r0 != 0) {
        return temp_r0 + 8;
    }
    return 0;
}
