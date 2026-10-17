#include "m2c.h"

void func_020169cc(void *arg0, void *arg1) {
    s32 var_r1;

    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, void **, -4), void **, 0x74), u16 *, 0x12) & 0x2000) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r1;
}
