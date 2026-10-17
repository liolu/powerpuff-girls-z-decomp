/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0204802c(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r2 <= 3) {
        M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) | 0x80);
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r2 - 1);
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD((arg0 + (temp_r2 * 4)), s32 *, 0x2C) - 1);
}
