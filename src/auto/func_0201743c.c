#include "m2c.h"

s32 func_0201161c(s32);                             /* extern */
extern s32 data_0208defc;

void func_0201743c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_0201161c(data_0208defc);
}
