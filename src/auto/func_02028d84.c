#include "m2c.h"

M2C_UNK func_02017dd8();                            /* extern */
M2C_UNK func_0201832c(s32);                         /* extern */
M2C_UNK func_0201ec58(void *);                      /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02079470;
extern M2C_UNK data_02079f88;

void *func_02028d84(void *arg0) {
    func_02017dd8(arg0);
    func_0201832c(arg0 + 0x9C);
    M2C_FIELD(arg0, M2C_UNK **, 0)      = &data_02079f88;
    M2C_FIELD(arg0, M2C_UNK **, 0x123C) = &data_02079470;
    func_0201ec58(arg0 + 0x123C);
    M2C_FIELD(arg0, s8 *, 0x4F) = 0;
    M2C_FIELD(arg0, s8 *, 8)    = 0;
    M2C_FIELD(arg0, s8 *, 9)    = -1;
    M2C_FIELD(arg0, s8 *, 0xA)  = -1;
    func_02069ed4(arg0 + 0x6C, 0, 0x30);
    M2C_FIELD(arg0, s8 *, 0x4C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)   = -1;
    M2C_FIELD(arg0, s8 *, 7)      = 0;
    M2C_FIELD(arg0, s32 *, 0x68)  = 0;
    M2C_FIELD(arg0, s16 *, 0x6AE) = 0;
    M2C_FIELD(arg0, s8 *, 0x6B0)  = 0;
    M2C_FIELD(arg0, s8 *, 0x58)   = 5;
    M2C_FIELD(arg0, s8 *, 0x59)   = 6;
    M2C_FIELD(arg0, s8 *, 0x5A)   = 7;
    M2C_FIELD(arg0, s8 *, 0x5B)   = 0x31;
    M2C_FIELD(arg0, s8 *, 0x57)   = -0x58;
    M2C_FIELD(arg0, s16 *, 0x54)  = 0x550;
    return arg0;
}
