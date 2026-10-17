#include "m2c.h"

extern M2C_UNK data_0208df78;

void func_020407a4(void *arg0) {
    M2C_FIELD(&data_0208df78, s16 *, 0) = (s16) M2C_FIELD(arg0, s16 *, 0);
    M2C_FIELD(&data_0208df78, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
}
