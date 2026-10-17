#include "m2c.h"

s32 func_0201163c(s32);                             /* extern */
extern s32 data_0208defc;

void func_020173c0(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_0201163c(data_0208defc);
}
