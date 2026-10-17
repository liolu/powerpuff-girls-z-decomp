#include "m2c.h"

void func_02016534(s32 arg0, void *arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg1, void **, -8);
    if (temp_r2 == NULL) {
        return;
    }
    M2C_FIELD(temp_r2, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r2, s32 *, 0x10) & ~M2C_FIELD(arg1, s32 *, -4));
}
