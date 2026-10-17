#include "m2c.h"

extern s16 data_0208deea;

void func_02004314(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x1000);
    data_0208deea             = 1;
}
