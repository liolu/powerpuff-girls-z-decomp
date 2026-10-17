#include "m2c.h"

M2C_UNK func_02017dd8();                            /* extern */
M2C_UNK func_02018368(s32);                         /* extern */
M2C_UNK func_02018558(void *);                      /* extern */
M2C_UNK func_0201ec58(void *);                      /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02079470;
extern M2C_UNK data_0207bc0c;

void *func_020366d4(void *arg0) {
    func_02017dd8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207bc0c;
    func_02018368(arg0 + 0x710);
    func_02018558(arg0 + 0xD20);
    func_02018558(arg0 + 0xD4C);
    func_02018558(arg0 + 0xD78);
    M2C_FIELD(arg0, s16 *, 0xDE4)      = 0;
    M2C_FIELD(arg0, s32 *, 0xDF8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xE00)      = -1;
    M2C_FIELD(arg0, s32 *, 0xE08)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0xE0C) = &data_02079470;
    func_0201ec58(arg0 + 0xE0C);
    M2C_FIELD(arg0, s8 *, 0x4C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)  = -1;
    M2C_FIELD(arg0, s8 *, 7)     = 0;
    M2C_FIELD(arg0, s8 *, 0x58)  = 7;
    M2C_FIELD(arg0, s8 *, 0x59)  = 6;
    M2C_FIELD(arg0, s8 *, 0x5A)  = 5;
    M2C_FIELD(arg0, s8 *, 0x5B)  = 0x18;
    M2C_FIELD(arg0, s8 *, 0x57)  = -0x52;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s16 *, 0x50) = 0;
    M2C_FIELD(arg0, s8 *, 0x4F)  = 0;
    M2C_FIELD(arg0, s8 *, 8)     = 0;
    M2C_FIELD(arg0, s8 *, 9)     = -1;
    M2C_FIELD(arg0, s8 *, 0xA)   = -1;
    func_02069ed4(arg0 + 0x6C, 0, 0x30);
    M2C_FIELD(arg0, s8 *, 0x9C) = 0;
    M2C_FIELD(arg0, s8 *, 0x9D) = 0;
    M2C_FIELD(arg0, s8 *, 0x9E) = 0;
    M2C_FIELD(arg0, s8 *, 0x9F) = 0;
    func_02069ed4(arg0 + 0xA0, 0, 0x600);
    M2C_FIELD(arg0, s32 *, 0x6A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x6A4) = 0;
    M2C_FIELD(arg0, s32 *, 0x6A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x6AC) = 0;
    func_02069ed4(arg0 + 0x6B0, -1, 0x14);
    M2C_FIELD(arg0, s32 *, 0x6C4)  = 0;
    M2C_FIELD(arg0, s32 *, 0x6C8)  = -1;
    M2C_FIELD(arg0, s32 *, 0x6CC)  = -1;
    M2C_FIELD(arg0, s32 *, 0x6D0)  = 0;
    M2C_FIELD(arg0, s32 *, 0x135C) = 0;
    M2C_FIELD(arg0, s16 *, 0x54)   = 0x1E0;
    M2C_FIELD(arg0, s8 *, 0x56)    = -0x4F;
    M2C_FIELD(arg0, s32 *, 0x64)   = 0x28000;
    return arg0;
}
