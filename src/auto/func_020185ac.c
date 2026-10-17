#include "m2c.h"

void func_020185ac(void *arg0) {
    void *temp_r3;

    temp_r3                      = M2C_FIELD(arg0, void **, 0x28);
    M2C_FIELD(temp_r3, u8 *, 3)  = (u8) (M2C_FIELD(temp_r3, u8 *, 3) & ~6);
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
}
