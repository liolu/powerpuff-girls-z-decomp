#include "m2c.h"

void func_0206f604(void *arg0, s8 arg1) {
    if ((M2C_FIELD(arg0, u8 *, 4) != 0) && (M2C_FIELD(arg0, u8 *, 5) == 0)) {
        return;
    }
    M2C_FIELD(arg0, s8 *, 0xA) = arg1;
    M2C_FIELD(arg0, u16 *, 0x20) =
        (u16) ((M2C_FIELD(arg0, u16 *, 0x20) & ~0x3000) | ((u32) ((u16) (arg1 + 1) << 0x1E) >> 0x12));
}
