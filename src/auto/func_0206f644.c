#include "m2c.h"

void func_0206f644(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0x22) = (u16) ((M2C_FIELD(arg0, u16 *, 0x22) & ~0xF000) | (u16) ((u16) (1 << arg1) << 0xC));
}
