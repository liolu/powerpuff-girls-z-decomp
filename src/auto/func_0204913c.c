#include "m2c.h"

s32 func_02048ebc(s32, s32, s32, s32);              /* extern */

void func_0204913c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_02048ebc(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg1, s32 *, -0xC),
                                                 M2C_FIELD(arg1, s32 *, -8), M2C_FIELD(arg1, s32 *, -4));
}
