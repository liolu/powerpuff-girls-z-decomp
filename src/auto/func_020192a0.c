#include "m2c.h"

M2C_UNK func_02017dd8();                            /* extern */
M2C_UNK func_02018368(s32);                         /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02078314;

void *func_020192a0(void *arg0) {
    func_02017dd8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02078314;
    func_02018368(arg0 + 0x960);
    M2C_FIELD(arg0, s8 *, 0x4F) = 0;
    M2C_FIELD(arg0, s8 *, 8)    = 0;
    M2C_FIELD(arg0, s8 *, 9)    = -1;
    M2C_FIELD(arg0, s8 *, 0xA)  = -1;
    func_02069ed4(arg0 + 0x6C, 0, 0x30);
    M2C_FIELD(arg0, s8 *, 0x4C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)  = -1;
    M2C_FIELD(arg0, s8 *, 7)     = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s8 *, 0x58)  = 0x19;
    M2C_FIELD(arg0, s8 *, 0x59)  = 0x1A;
    M2C_FIELD(arg0, s8 *, 0x5A)  = 0x1B;
    M2C_FIELD(arg0, s8 *, 0x5B)  = 0x1C;
    M2C_FIELD(arg0, s8 *, 0x57)  = -0x58;
    M2C_FIELD(arg0, s8 *, 0x5C)  = 6;
    M2C_FIELD(arg0, s8 *, 0x5D)  = 7;
    M2C_FIELD(arg0, s8 *, 0x5E)  = 8;
    M2C_FIELD(arg0, s32 *, 0x64) = 0xC000;
    M2C_FIELD(arg0, s8 *, 0x9C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9F)  = 0;
    func_02069ed4(arg0 + 0xA4, 0, 0x90);
    M2C_FIELD(arg0, s32 *, 0x134) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s16 *, 0x13C) = 0;
    M2C_FIELD(arg0, s8 *, 0xA0)   = 0;
    M2C_FIELD(arg0, s8 *, 0xA1)   = -1;
    M2C_FIELD(arg0, s16 *, 0x15A) = 0;
    M2C_FIELD(arg0, s16 *, 0x54)  = 0x708;
    return arg0;
}
