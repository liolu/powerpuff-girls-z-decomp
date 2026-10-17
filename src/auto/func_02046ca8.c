#include "m2c.h"

s32 func_02069228(s32);                             /* extern */
M2C_UNK func_02069ed4(s32, M2C_UNK, s32);           /* extern */

void *func_02046ca8(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r5                   = arg1 * 8;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    temp_r0                   = func_02069228(temp_r5);
    if (temp_r0 != 0) {
        func_02069ed4(temp_r0, 0, temp_r5);
        M2C_FIELD(arg0, s32 *, 0) = arg1;
        M2C_FIELD(arg0, s32 *, 8) = temp_r0;
    }
    return arg0;
}
