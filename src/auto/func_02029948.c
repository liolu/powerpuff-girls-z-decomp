#include "m2c.h"

void func_02029948(void *arg0, s32 arg1, void *arg2) {
    if (arg1 == M2C_FIELD(arg0, s8 *, 9)) {
        return;
    }
    M2C_FIELD(((arg1 * 0xC) + (s32) arg0), s16 *, 0x6E) = (s16) M2C_FIELD(arg2, s16 *, 2);
}
