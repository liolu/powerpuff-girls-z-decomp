#include "m2c.h"

extern s16 data_0208deea;

s32 func_02031408(void *arg0) {
    M2C_FIELD(arg0, u16 *, 8) = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x1000);
    data_0208deea             = 7;
    return -1;
}
