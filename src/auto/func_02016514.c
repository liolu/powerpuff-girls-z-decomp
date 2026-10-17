#include "m2c.h"

void func_02016514(s32 arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg1, void **, -8);
    if (temp_r3 == NULL) {
        return;
    }
    M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x10) | M2C_FIELD(arg1, s32 *, -4));
}
