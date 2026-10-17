#include "m2c.h"

void func_020185cc(void *arg0, void *arg1) {
    void *temp_ip;

    temp_ip                        = M2C_FIELD(arg0, void **, 0x28);
    M2C_FIELD(temp_ip, u8 *, 3)    = (u8) (M2C_FIELD(temp_ip, u8 *, 3) & ~6);
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg1, u8 *, 3)       = (u8) (M2C_FIELD(arg1, u8 *, 3) | 6);
    M2C_FIELD(arg0, void **, 0x28) = arg1;
}
