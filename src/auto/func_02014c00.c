#include "m2c.h"

s32 func_0206934c(s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_02014c4c;

void *func_02014c00(void *arg0, s32 arg1) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r0                   = func_0206934c(arg1, 0x38, 0, &func_02014c4c, 0);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0)   = arg1;
        M2C_FIELD(arg0, s32 *, 0xC) = temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    return arg0;
}
