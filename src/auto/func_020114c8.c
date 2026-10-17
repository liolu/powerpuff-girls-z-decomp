#include "m2c.h"

s32 func_0204b22c();                                /* extern */

s8 func_020114c8(void *arg0, s8 arg1) {
    s32 temp_r6;
    s8 temp_r4;

    temp_r4                      = M2C_FIELD(arg0, s8 *, 0xD);
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    M2C_FIELD(arg0, s8 *, 0xD)   = (s8) M2C_FIELD(arg0, s8 *, 0xC);
    M2C_FIELD(arg0, s8 *, 0xC)   = arg1;
    if ((M2C_FIELD(arg0, u8 *, 0x66) != 0) && (M2C_FIELD(arg0, u8 *, 0x67) == 0) && ((u32) (arg1 - 5) <= 1U)) {
        temp_r6                      = func_0204b22c();
        M2C_FIELD(arg0, s32 *, 0x7C) = (s32) (func_0204b22c() | (temp_r6 << 0x10));
    }
    M2C_FIELD(arg0, s8 *, 0xE) = 0;
    return temp_r4;
}
