#include "m2c.h"

M2C_UNK func_02051ff4(void *, M2C_UNK);             /* extern */
M2C_UNK func_020586a8(u16);                         /* extern */
M2C_UNK func_02058b28(M2C_UNK, void *, M2C_UNK, M2C_UNK *, void *, s32, s32, s32, s32); /* extern */
extern M2C_UNK func_02044404;

s32 func_020444fc(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xE) = 0;
    M2C_FIELD(arg0, s8 *, 0xD) = 0;
    M2C_FIELD(arg0, s32 *, 8)  = 0;
    func_02051ff4(arg0 + 0x10, 0x200);
    func_020586a8((u16) M2C_FIELD(arg0, s32 *, 0));
    func_02058b28(0, arg0 + 0x10, 0x200, &func_02044404, arg0 + 8, 1, 6, 1, 0);
    return M2C_FIELD(arg0, s8 *, 0xF) = 0;
}
