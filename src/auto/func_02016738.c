#include "m2c.h"

void func_02016738(void *arg0, void *arg1) {
    s16 var_r1;
    void *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg1, void **, -4), void **, 0x74);
    if (temp_r1 != NULL) {
        var_r1 = M2C_FIELD(temp_r1, s16 *, 0x44);
    } else {
        var_r1 = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) var_r1;
}
