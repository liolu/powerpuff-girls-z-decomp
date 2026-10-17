#include "m2c.h"

void func_02018718(void *arg0) {
    void *temp_r3;

    temp_r3                     = M2C_FIELD(arg0, void **, 0x1C);
    M2C_FIELD(temp_r3, u8 *, 3) = (u8) (M2C_FIELD(temp_r3, u8 *, 3) & ~6);
    M2C_FIELD(arg0, s32 *, 8)   = 0;
}
