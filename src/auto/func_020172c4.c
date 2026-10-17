#include "m2c.h"

s32 func_020115dc(s32);                             /* extern */
extern s32 data_0208defc;

void func_020172c4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = func_020115dc(data_0208defc);
}
