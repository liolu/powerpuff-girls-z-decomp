#include "m2c.h"

void func_020188c4(void *arg0, s32 arg1, s8 arg2, s8 arg3, u8 arg4) {
    void *temp_ip;

    M2C_FIELD(arg0, u16 *, 0x40)   = (u16) (M2C_FIELD(arg0, u16 *, 0x40) | (1 << arg1));
    temp_ip                        = arg0 + (arg1 * 3);
    M2C_FIELD(temp_ip, s8 *, 0x42) = arg2;
    M2C_FIELD(temp_ip, s8 *, 0x43) = arg3;
    M2C_FIELD(temp_ip, u8 *, 0x44) = arg4;
    M2C_FIELD(arg0, s32 *, 0x54)   = 0;
}
