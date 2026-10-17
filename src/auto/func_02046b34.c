#include "m2c.h"

M2C_UNK func_02069ed4(s32, M2C_UNK, s32);           /* extern */

void func_02046b34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_02069ed4(M2C_FIELD(arg0, s32 *, 8), 0, M2C_FIELD(arg0, s32 *, 0) * 4);
    func_02069ed4(M2C_FIELD(arg0, s32 *, 0x10), 0, M2C_FIELD(arg0, s32 *, 0xC) * 4);
}
