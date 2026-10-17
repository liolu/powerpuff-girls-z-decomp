#include "m2c.h"

s32 func_0206ee68(s32, s32);                        /* extern */

void func_02016efc(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_0206ee68(M2C_FIELD(arg1, s32 *, -8), M2C_FIELD(arg1, s32 *, -4));
}
