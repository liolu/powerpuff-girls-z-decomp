#include "m2c.h"

M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0206f25c();                            /* extern */
extern M2C_UNK data_0207815c;

void *func_02017dd8(void *arg0) {
    func_0206f25c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207815c;
    M2C_FIELD(arg0, s32 *, 0x48)   = 0;
    M2C_FIELD(arg0, s16 *, 0x52)   = 0;
    M2C_FIELD(arg0, s16 *, 0x54)   = 0x708;
    M2C_FIELD(arg0, s8 *, 0x56)    = -0x55;
    M2C_FIELD(arg0, s8 *, 0x4E)    = -1;
    M2C_FIELD(arg0, s8 *, 0x5F)    = -1;
    M2C_FIELD(arg0, s8 *, 0x60)    = 0;
    M2C_FIELD(arg0, s32 *, 0x64)   = 0;
    M2C_FIELD(arg0, s8 *, 0xA)     = -1;
    M2C_FIELD(arg0, s8 *, 0x5C)    = 6;
    M2C_FIELD(arg0, s8 *, 0x5D)    = 7;
    M2C_FIELD(arg0, s8 *, 0x5E)    = 8;
    func_02069ed4(arg0 + 0x6C, 0, 0x30);
    return arg0;
}
