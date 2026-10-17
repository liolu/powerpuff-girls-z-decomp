#include "m2c.h"

M2C_UNK func_02017dd8();                            /* extern */
M2C_UNK func_02018368(void *);                      /* extern */
M2C_UNK func_02018558(s32);                         /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02078ad4;

void *func_0201d0dc(void *arg0) {
    func_02017dd8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02078ad4;
    func_02018558(arg0 + 0xD04);
    func_02018368(arg0 + 0xD30);
    M2C_FIELD(arg0, s8 *, 0x4F) = 0;
    M2C_FIELD(arg0, s8 *, 8)    = 0;
    M2C_FIELD(arg0, s8 *, 9)    = -1;
    M2C_FIELD(arg0, s8 *, 0xA)  = -1;
    func_02069ed4(arg0 + 0x6C, 0, 0x30);
    M2C_FIELD(arg0, s8 *, 0x4C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)   = -1;
    M2C_FIELD(arg0, s8 *, 7)      = 0;
    M2C_FIELD(arg0, s32 *, 0x68)  = 0;
    M2C_FIELD(arg0, s8 *, 0x58)   = 0xB;
    M2C_FIELD(arg0, s8 *, 0x59)   = 0xC;
    M2C_FIELD(arg0, s8 *, 0x5A)   = 0xD;
    M2C_FIELD(arg0, s8 *, 0x5B)   = 0x1A;
    M2C_FIELD(arg0, s8 *, 0x57)   = -0x58;
    M2C_FIELD(arg0, s8 *, 0x9C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x9D)   = 0;
    M2C_FIELD(arg0, s8 *, 0x9E)   = 0;
    M2C_FIELD(arg0, s8 *, 0x9F)   = 0;
    M2C_FIELD(arg0, s8 *, 0xCE8)  = 0;
    M2C_FIELD(arg0, s8 *, 0xCE9)  = 0;
    M2C_FIELD(arg0, s8 *, 0xCEA)  = 0;
    M2C_FIELD(arg0, s8 *, 0xCEB)  = 0;
    M2C_FIELD(arg0, s8 *, 0xCEC)  = 0;
    M2C_FIELD(arg0, s8 *, 0xCED)  = 0;
    M2C_FIELD(arg0, s32 *, 0xCF0) = 0;
    M2C_FIELD(arg0, s32 *, 0xCF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xCF8) = 0;
    M2C_FIELD(arg0, s32 *, 0xCFC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD00) = 0;
    M2C_FIELD(arg0, s32 *, 0x64)  = 0x18000;
    M2C_FIELD(arg0, s16 *, 0x54)  = 0x708;
    return arg0;
}
