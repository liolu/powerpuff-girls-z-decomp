#include "m2c.h"

void func_020164fc(void *arg0, void *arg1) {
    s32 var_r1;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg1, void **, -4);
    if (temp_r1 != NULL) {
        var_r1 = M2C_FIELD(temp_r1, s32 *, 0x10);
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r1;
}
