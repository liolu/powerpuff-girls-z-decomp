#include "m2c.h"

M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02077230;
extern M2C_UNK data_0207d154;

void *func_0203f17c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02077230;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s16 *, 8)      = 0;
    M2C_FIELD(arg0, s16 *, 0xA)    = 0;
    M2C_FIELD(arg0, s8 *, 0xC)     = 0;
    M2C_FIELD(arg0, s8 *, 0xD)     = -1;
    M2C_FIELD(arg0, s8 *, 0xE)     = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207d154;
    M2C_FIELD(arg0, s32 *, 0x14)   = 0;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s8 *, 0x24)    = 0;
    M2C_FIELD(arg0, s8 *, 0x25)    = 0;
    M2C_FIELD(arg0, s8 *, 0x26)    = 0;
    M2C_FIELD(arg0, s16 *, 0x2A)   = 0;
    M2C_FIELD(arg0, s16 *, 0x28)   = 0;
    func_02069ed4(arg0 + 0x7C, 0, 0x60);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    return arg0;
}
