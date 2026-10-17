#include "m2c.h"

void func_020490d0(void *arg0) {
    void *temp_r0;

    M2C_FIELD(arg0, u16 *, 0x16)     = (u16) (M2C_FIELD(arg0, u16 *, 0x16) | 0x40);
    temp_r0                          = M2C_FIELD(arg0, void **, 0x28);
    M2C_FIELD(temp_r0, s16 *, 0x4D4) = (s16) (M2C_FIELD(temp_r0, s16 *, 0x4D4) + 1);
}
