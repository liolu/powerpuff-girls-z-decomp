#include "m2c.h"

s32 func_02011578(s32);                             /* extern */
extern s32 data_0208defc;

void func_0201728c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_02011578(data_0208defc);
}
