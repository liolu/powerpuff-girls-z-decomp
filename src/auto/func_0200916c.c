#include "m2c.h"

M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0200916c(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x148) = arg1;
    M2C_FIELD(arg0, s32 *, 0x14C) = arg2;
    func_02069ed4(arg0, 0, 0x140);
    M2C_FIELD(arg0, void **, 0x144) = NULL;
    M2C_FIELD(arg0, s32 *, 0x140)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14C)   = 0;
    M2C_FIELD(arg0, void **, 0x144) = arg0;
    M2C_FIELD(arg0, s32 *, 0)       = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)     = arg1;
}
