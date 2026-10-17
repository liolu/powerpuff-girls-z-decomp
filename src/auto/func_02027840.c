#include "m2c.h"

s32 func_020204b0(s32);                             /* extern */

void func_02027840(void *arg0) {
    if (func_020204b0(arg0 + 0x6BC) != 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x50)  = 0;
    M2C_FIELD(arg0, s16 *, 0x6AE) = 5;
}
