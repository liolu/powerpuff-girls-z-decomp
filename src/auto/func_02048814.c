#include "m2c.h"

void func_02048814(void *arg0) {
    void *temp_r1;

    temp_r1                         = arg0 + (M2C_FIELD(arg0, s32 *, 8) * 4);
    M2C_FIELD(temp_r1, s32 *, 0x2C) = (s32) ~M2C_FIELD(temp_r1, s32 *, 0x2C);
}
