#include "m2c.h"

s32 func_02011664(s32, s32);                        /* extern */
extern s32 data_0208defc;

void func_020173e0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_02011664(data_0208defc, M2C_FIELD(arg1, s32 *, -4));
}
