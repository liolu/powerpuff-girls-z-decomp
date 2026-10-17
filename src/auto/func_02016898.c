#include "m2c.h"

void func_02016898(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(M2C_FIELD(arg1, void **, -4), u8 *, 0x16);
}
