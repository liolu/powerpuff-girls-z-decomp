#include "m2c.h"

s32 func_02011898(s32);                             /* extern */
extern s32 data_0208defc;

void func_020174f8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_02011898(data_0208defc);
}
