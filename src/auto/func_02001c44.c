#include "m2c.h"

s32 func_02001c44(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 temp_r2_2;

    temp_r2_2 = M2C_FIELD(arg0, s32 *, 0x40);
    if (temp_r2_2 >= 0x40) {
        return -1;
    }
    M2C_FIELD((arg0 + (temp_r2_2 * 4)), s32 *, 0x44) = arg1;
    temp_r2                                          = M2C_FIELD(arg0, s32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x40)                     = (s32) (temp_r2 + 1);
    return temp_r2;
}
