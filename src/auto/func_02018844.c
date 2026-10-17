#include "m2c.h"

M2C_UNK func_02069eb4(void *, void *, M2C_UNK);     /* extern */

void func_02018844(void *arg0, s32 arg1, s32 arg2) {
    func_02069eb4(arg0, M2C_FIELD(arg0, s32 *, 0x64) + 0x564 + (arg1 << 9) + (arg2 << 5), 0x20);
    func_02069eb4(arg0 + 0x20, arg0, 0x20);
    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
}
