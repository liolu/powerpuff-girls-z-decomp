#include "m2c.h"

void func_020490f4(void *arg0) {
    s16 temp_r1_2;
    u16 temp_r1;
    void *temp_r0;

    temp_r1 = M2C_FIELD(arg0, u16 *, 0x16);
    if (!(temp_r1 & 0xC0)) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x16) = (u16) (temp_r1 & ~0xC0);
    temp_r0                      = M2C_FIELD(arg0, void **, 0x28);
    temp_r1_2                    = M2C_FIELD(temp_r0, s16 *, 0x4D4);
    if ((s32) temp_r1_2 > 0) {
        M2C_FIELD(temp_r0, s16 *, 0x4D4) = (s16) (temp_r1_2 - 1);
    }
}
