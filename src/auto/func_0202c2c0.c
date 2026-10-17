#include "m2c.h"

M2C_UNK func_02017dd8();                            /* extern */
M2C_UNK func_02018368(void *);                      /* extern */
M2C_UNK func_02018558(void *);                      /* extern */
M2C_UNK func_0201ec58(void *);                      /* extern */
M2C_UNK func_02052fd0(s32, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02079470;
extern M2C_UNK data_0207a59c;
extern s32 data_0207eec0;

void *func_0202c2c0(void *arg0) {
    func_02017dd8();
    M2C_FIELD(arg0, M2C_UNK **, 0)     = &data_0207a59c;
    M2C_FIELD(arg0, M2C_UNK **, 0x9FC) = &data_02079470;
    func_0201ec58(arg0 + 0x9FC);
    func_02018558(arg0 + 0xF40);
    func_02018368(arg0 + 0xF6C);
    M2C_FIELD(arg0, s8 *, 0x4C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)  = -1;
    M2C_FIELD(arg0, s8 *, 7)     = 0;
    M2C_FIELD(arg0, s8 *, 0x58)  = 5;
    M2C_FIELD(arg0, s8 *, 0x59)  = 6;
    M2C_FIELD(arg0, s8 *, 0x5A)  = 7;
    M2C_FIELD(arg0, s8 *, 0x5B)  = 0x28;
    M2C_FIELD(arg0, s8 *, 0x57)  = -0x52;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s16 *, 0x50) = 0;
    M2C_FIELD(arg0, s8 *, 0x4F)  = 0;
    M2C_FIELD(arg0, s8 *, 8)     = 0;
    M2C_FIELD(arg0, s8 *, 9)     = -1;
    M2C_FIELD(arg0, s8 *, 0xA)   = -1;
    func_02069ed4(arg0 + 0x6C, 0, 0x30);
    M2C_FIELD(arg0, s8 *, 0x9C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9F)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    func_02052fd0(data_0207eec0, arg0 + 0xAC, 0, 0x600);
    M2C_FIELD(arg0, s32 *, 0x6AC) = 0;
    func_02052fd0(data_0207eec0, arg0 + 0x6B0, 0, 0x300);
    M2C_FIELD(arg0, s16 *, 0x9B0) = 0;
    M2C_FIELD(arg0, s32 *, 0x9B4) = 0;
    M2C_FIELD(arg0, s32 *, 0x9B8) = 0;
    M2C_FIELD(arg0, s8 *, 0x9C8)  = 0;
    M2C_FIELD(arg0, s8 *, 0x9C9)  = 0;
    M2C_FIELD(arg0, s32 *, 0x9CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x9D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x9D4) = 0;
    M2C_FIELD(arg0, s32 *, 0x9D8) = 0;
    M2C_FIELD(arg0, s32 *, 0x9DC) = 0;
    func_02052fd0(data_0207eec0, arg0 + 0x9E0, 0, 0x14);
    func_02052fd0(data_0207eec0, arg0 + 0x9F4, 0, 8);
    M2C_FIELD(arg0, s16 *, 0x54) = 0xE10;
    M2C_FIELD(arg0, s8 *, 0x56)  = -0x4F;
    M2C_FIELD(arg0, s32 *, 0x64) = 0x28000;
    return arg0;
}
