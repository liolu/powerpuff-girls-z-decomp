#include "m2c.h"

s32 func_020455b4(M2C_UNK);                         /* extern */

s32 func_02006414(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    M2C_FIELD(arg0, s8 *, 0x12AC) = 0;
    M2C_FIELD(arg0, s8 *, 0x12AD) = 3;
    temp_r0                       = func_020455b4(arg1);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0) = temp_r0;
        return 1;
    }
    return 0;
}
