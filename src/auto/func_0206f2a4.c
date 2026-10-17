#include "m2c.h"

void func_0206f2a4(void *arg0, s32 arg1, s32 arg2, s8 arg3, u8 arg4, s32 arg5) {
    M2C_FIELD(arg0, s8 *, 4)     = arg3;
    M2C_FIELD(arg0, u8 *, 5)     = arg4;
    M2C_FIELD(arg0, s32 *, 0x10) = arg5;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x10)(arg0, arg1, arg2);
}
