#include "m2c.h"

s32 func_0201c244(void *arg0, s32 arg1, void *arg2) {
    s32 temp_lr;
    u8 temp_r1;
    u8 temp_r1_2;
    u8 temp_r1_3;

    temp_lr = (arg1 * 0xC) + (arg0 + 0x6C);
    if ((M2C_FIELD(arg0, u8 *, 4) != 0) && (M2C_FIELD(arg0, u8 *, 5) == 0)) {
        M2C_FIELD(arg2, u8 *, 4)     = (u8) M2C_FIELD(arg0, u8 *, 0x97C);
        M2C_FIELD(arg2, u8 *, 5)     = (u8) M2C_FIELD(arg0, u8 *, 0x97D);
        M2C_FIELD(arg2, u8 *, 6)     = (u8) M2C_FIELD(arg0, u8 *, 0x97E);
        M2C_FIELD(arg0, u8 *, 0x97C) = 0U;
    } else {
        temp_r1                     = M2C_FIELD(arg0, u8 *, 0x97C);
        M2C_FIELD(arg2, u8 *, 4)    = temp_r1;
        M2C_FIELD(temp_lr, u8 *, 4) = temp_r1;
        temp_r1_2                   = M2C_FIELD(arg0, u8 *, 0x97D);
        M2C_FIELD(arg2, u8 *, 5)    = temp_r1_2;
        M2C_FIELD(temp_lr, u8 *, 5) = temp_r1_2;
        temp_r1_3                   = M2C_FIELD(arg0, u8 *, 0x97E);
        M2C_FIELD(arg2, u8 *, 6)    = temp_r1_3;
        M2C_FIELD(temp_lr, u8 *, 6) = temp_r1_3;
    }
    M2C_FIELD(arg0, u8 *, 0x97C) = 0U;
    M2C_FIELD(arg2, s16 *, 2)    = (s16) M2C_FIELD(temp_lr, s16 *, 2);
    return 1;
}
