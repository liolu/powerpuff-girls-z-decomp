#include "m2c.h"

M2C_UNK func_02001bb4(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0201259c(s32);                         /* extern */
M2C_UNK func_02014c70(s32);                         /* extern */
M2C_UNK func_02046b34(s32);                         /* extern */
M2C_UNK func_02046d1c(s32);                         /* extern */
M2C_UNK func_02046e68(s32);                         /* extern */
M2C_UNK func_02048b14(s32);                         /* extern */

void func_02009784(void *arg0) {
    func_02001bb4(arg0 + 0x1C, 0x20000, 0x20000, 0x20000, 0x4000);
    func_0201259c(M2C_FIELD(arg0, s32 *, 4));
    func_02046e68(M2C_FIELD(arg0, s32 *, 8));
    func_02046d1c(M2C_FIELD(arg0, s32 *, 0xC));
    func_02046b34(M2C_FIELD(arg0, s32 *, 0x10));
    func_02048b14(M2C_FIELD(arg0, s32 *, 0x18));
    func_02014c70(M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(arg0, s16 *, 0x170) = 0x7FFF;
    M2C_FIELD(arg0, s8 *, 0x174)  = 0x1F;
    M2C_FIELD(arg0, s16 *, 0x172) = 0x7FFF;
    M2C_FIELD(arg0, s8 *, 0x175)  = 0x3F;
    M2C_FIELD(arg0, s8 *, 0x176)  = 0;
    M2C_FIELD(arg0, s8 *, 0x177)  = 0;
    M2C_FIELD(arg0, s32 *, 0x164) = 0;
}
