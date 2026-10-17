#include "m2c.h"

s32 func_020114c8(s32, s32);                        /* extern */
extern s32 data_0208defc;

void func_02017228(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_020114c8(data_0208defc, M2C_FIELD(arg1, s32 *, -4));
}
