#include "m2c.h"

M2C_UNK func_02017dd8();                            /* extern */
M2C_UNK func_02018368(void *);                      /* extern */
M2C_UNK func_02018558(void *);                      /* extern */
M2C_UNK func_020186e0(void *);                      /* extern */
M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_02079444;

void *func_02021e44(void *arg0) {
    func_02017dd8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02079444;
    func_02018558(arg0 + 0x108);
    func_020186e0(arg0 + 0x134);
    func_02018558(arg0 + 0x154);
    func_02018558(arg0 + 0x180);
    M2C_FIELD(arg0, s16 *, 0x1EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x200) = 0;
    M2C_FIELD(arg0, s32 *, 0x208) = -1;
    M2C_FIELD(arg0, s32 *, 0x210) = 0;
    func_02018368(arg0 + 0x214);
    M2C_FIELD(arg0, s8 *, 0x4C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x4D)  = -1;
    M2C_FIELD(arg0, s8 *, 7)     = 0;
    M2C_FIELD(arg0, s8 *, 0x58)  = 5;
    M2C_FIELD(arg0, s8 *, 0x59)  = 6;
    M2C_FIELD(arg0, s8 *, 0x5A)  = 7;
    M2C_FIELD(arg0, s8 *, 0x5B)  = 0x29;
    M2C_FIELD(arg0, s8 *, 0x57)  = -0x58;
    M2C_FIELD(arg0, s8 *, 0x5C)  = 6;
    M2C_FIELD(arg0, s8 *, 0x5D)  = 7;
    M2C_FIELD(arg0, s8 *, 0x5E)  = 8;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s16 *, 0x50) = 0;
    M2C_FIELD(arg0, s8 *, 0x4F)  = 0;
    M2C_FIELD(arg0, s8 *, 8)     = 0;
    M2C_FIELD(arg0, s8 *, 9)     = -1;
    M2C_FIELD(arg0, s8 *, 0xA)   = -1;
    func_02069ed4(arg0 + 0x6C, 0, 0x30);
    M2C_FIELD(arg0, s8 *, 0x9C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x9D)   = 0;
    M2C_FIELD(arg0, s8 *, 0x9E)   = 0;
    M2C_FIELD(arg0, s8 *, 0x9F)   = 0;
    M2C_FIELD(arg0, s32 *, 0xA0)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA4)  = 0;
    M2C_FIELD(arg0, s32 *, 0xA8)  = 0;
    M2C_FIELD(arg0, s32 *, 0xAC)  = 0;
    M2C_FIELD(arg0, s32 *, 0xB0)  = 0;
    M2C_FIELD(arg0, s32 *, 0xB4)  = 0;
    M2C_FIELD(arg0, s32 *, 0xB8)  = 0;
    M2C_FIELD(arg0, s32 *, 0xBC)  = 0;
    M2C_FIELD(arg0, s32 *, 0xC0)  = 0;
    M2C_FIELD(arg0, s32 *, 0xC4)  = 0;
    M2C_FIELD(arg0, s32 *, 0xC8)  = 0;
    M2C_FIELD(arg0, s32 *, 0xCC)  = 0x1921;
    M2C_FIELD(arg0, s32 *, 0xD0)  = 0;
    M2C_FIELD(arg0, s32 *, 0xF4)  = 0;
    M2C_FIELD(arg0, s32 *, 0xF8)  = 0;
    M2C_FIELD(arg0, s32 *, 0xFC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s8 *, 0x104)  = 0;
    M2C_FIELD(arg0, s16 *, 0x54)  = 0x384;
    M2C_FIELD(arg0, s32 *, 0x64)  = 0x28000;
    return arg0;
}
