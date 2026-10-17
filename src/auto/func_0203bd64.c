#include "m2c.h"

M2C_UNK func_02017dd8();                            /* extern */
M2C_UNK func_0201832c(s32);                         /* extern */
M2C_UNK func_0201ec58(void *);                      /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02079470;
extern M2C_UNK data_0207c9b4;

void *func_0203bd64(void *arg0) {
    func_02017dd8(arg0);
    func_0201832c(arg0 + 0x9C);
    M2C_FIELD(arg0, M2C_UNK **, 0)      = &data_0207c9b4;
    M2C_FIELD(arg0, M2C_UNK **, 0x1064) = &data_02079470;
    func_0201ec58(arg0 + 0x1064);
    M2C_FIELD(arg0, s16 *, 0x15E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x15FC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1604) = -1;
    M2C_FIELD(arg0, s32 *, 0x160C) = 0;
    M2C_FIELD(arg0, s8 *, 0x4F)    = 0;
    M2C_FIELD(arg0, s8 *, 8)       = 0;
    M2C_FIELD(arg0, s8 *, 9)       = -1;
    M2C_FIELD(arg0, s8 *, 0xA)     = -1;
    func_02069ed4(arg0 + 0x6C, 0, 0x30);
    M2C_FIELD(arg0, s8 *, 0x4C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)   = -1;
    M2C_FIELD(arg0, s8 *, 7)      = 0;
    M2C_FIELD(arg0, s32 *, 0x68)  = 0;
    M2C_FIELD(arg0, s16 *, 0x54)  = 0xE10;
    M2C_FIELD(arg0, s8 *, 0x58)   = 5;
    M2C_FIELD(arg0, s8 *, 0x59)   = 6;
    M2C_FIELD(arg0, s8 *, 0x5A)   = 7;
    M2C_FIELD(arg0, s8 *, 0x5B)   = 0x27;
    M2C_FIELD(arg0, s8 *, 0x57)   = -0x58;
    M2C_FIELD(arg0, s8 *, 0x5C)   = 6;
    M2C_FIELD(arg0, s8 *, 0x5D)   = 7;
    M2C_FIELD(arg0, s8 *, 0x5E)   = 8;
    M2C_FIELD(arg0, s32 *, 0x64)  = 0x4D;
    M2C_FIELD(arg0, s32 *, 0x6AC) = 0;
    func_02069ed4(arg0 + 0x6B0, 0, 0xC0);
    M2C_FIELD(arg0, s32 *, 0x104C) = 0;
    M2C_FIELD(arg0, s16 *, 0x1050) = 0;
    M2C_FIELD(arg0, s16 *, 0x1052) = 0;
    M2C_FIELD(arg0, s16 *, 0x1054) = 0;
    M2C_FIELD(arg0, s32 *, 0x105C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1058) = 0;
    M2C_FIELD(arg0, s8 *, 0x1060)  = 0;
    return arg0;
}
