#include "m2c.h"

M2C_UNK func_02017dd8();                            /* extern */
M2C_UNK func_02018368(s32);                         /* extern */
M2C_UNK func_02018558(void *);                      /* extern */
M2C_UNK func_0202ebf4(void *);                      /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_0207a770;

void *func_0202dbf8(void *arg0) {
    func_02017dd8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207a770;
    func_02018368(arg0 + 0xCC);
    func_02018558(arg0 + 0x6DC);
    M2C_FIELD(arg0, s16 *, 0x748) = 0;
    M2C_FIELD(arg0, s32 *, 0x75C) = 0;
    M2C_FIELD(arg0, s32 *, 0x764) = -1;
    M2C_FIELD(arg0, s32 *, 0x76C) = 0;
    M2C_FIELD(arg0, s8 *, 0x4C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)   = -1;
    M2C_FIELD(arg0, s8 *, 7)      = 0;
    M2C_FIELD(arg0, s8 *, 0x58)   = 5;
    M2C_FIELD(arg0, s8 *, 0x59)   = 6;
    M2C_FIELD(arg0, s8 *, 0x5A)   = 7;
    M2C_FIELD(arg0, s8 *, 0x5B)   = 0x33;
    M2C_FIELD(arg0, s8 *, 0x57)   = -0x52;
    M2C_FIELD(arg0, s32 *, 0x68)  = 0;
    M2C_FIELD(arg0, s16 *, 0x50)  = 0;
    M2C_FIELD(arg0, s8 *, 0x4F)   = 0;
    M2C_FIELD(arg0, s8 *, 8)      = 0;
    M2C_FIELD(arg0, s8 *, 9)      = -1;
    M2C_FIELD(arg0, s8 *, 0xA)    = -1;
    func_02069ed4(arg0 + 0x6C, 0, 0x30);
    M2C_FIELD(arg0, s8 *, 0x9C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9F)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s8 *, 0xA4)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    func_02069ed4(arg0 + 0xB4, -1, 0x14);
    M2C_FIELD(arg0, s32 *, 0xC8) = -1;
    func_0202ebf4(arg0);
    M2C_FIELD(arg0, s16 *, 0x54) = 0x12C;
    M2C_FIELD(arg0, s8 *, 0x56)  = -0x4F;
    M2C_FIELD(arg0, s32 *, 0x64) = 0x28000;
    return arg0;
}
