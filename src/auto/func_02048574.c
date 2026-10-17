#include "m2c.h"

void func_02048574(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) | 0x80);
}
