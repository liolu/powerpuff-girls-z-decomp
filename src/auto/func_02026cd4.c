#include "m2c.h"

s32 func_02026cd4(void *arg0, s32 arg1, void *arg2) {
    s16 temp_r1;
    s32 var_lr;

    var_lr = 0;
    if ((M2C_FIELD(arg0, s8 *, 7) == 2) && ((s32) M2C_FIELD(arg0, s16 *, 0x52) < (s32) M2C_FIELD(arg0, u16 *, 0x54))) {
        temp_r1 = M2C_FIELD(((arg1 * 0xC) + (s32) arg0), s16 *, 0x6E);
        if (M2C_FIELD(arg2, s16 *, 2) != temp_r1) {
            M2C_FIELD(arg2, s16 *, 2) = temp_r1;
            var_lr                    = 1;
        }
    }
    return var_lr;
}
