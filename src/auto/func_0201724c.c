#include "m2c.h"

s32 func_02011530(s32);                             /* extern */
extern s32 data_0208defc;

void func_0201724c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_02011530(data_0208defc);
}
