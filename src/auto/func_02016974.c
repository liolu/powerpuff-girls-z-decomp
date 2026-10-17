#include "m2c.h"

void func_02016974(s32 arg0, void *arg1) {
    void *temp_r2;

    temp_r2                         = M2C_FIELD(M2C_FIELD(arg1, void **, -8), void **, 0x74);
    M2C_FIELD(temp_r2, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, -4);
    M2C_FIELD(temp_r2, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r2, u16 *, 0x12) = (u16) (M2C_FIELD(temp_r2, u16 *, 0x12) & ~0x2000);
}
