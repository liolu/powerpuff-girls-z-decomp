#include "m2c.h"

s32 func_0206ee68(s32, s16);                        /* extern */

void func_02045628(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5) {
    M2C_FIELD(arg0, s32 *, 0x164) = arg1;
    M2C_FIELD(arg0, s32 *, 0x160) = func_0206ee68(arg3 << 0xC, arg2);
    M2C_FIELD(arg0, s16 *, 0x158) = arg2;
    M2C_FIELD(arg0, s16 *, 0x15A) = arg3;
    M2C_FIELD(arg0, s16 *, 0x15C) = (s16) arg4;
    M2C_FIELD(arg0, s16 *, 0x15E) = (s16) arg5;
}
