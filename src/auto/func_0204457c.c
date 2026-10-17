#include "m2c.h"

M2C_UNK func_02051ff4(void *, M2C_UNK);             /* extern */
M2C_UNK func_020586a8(u16);                         /* extern */
M2C_UNK func_02058b28(M2C_UNK, void *, M2C_UNK, M2C_UNK *, void *, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_0208c5bc;
extern M2C_UNK func_02044404;

void func_0204457c(void *arg0) {
    M2C_FIELD(&data_0208c5bc, s8 *, 0xF) = 1;
    M2C_FIELD(arg0, s32 *, 8)            = 0;
    func_02051ff4(arg0 + 0x210, 0x10);
    func_020586a8((u16) M2C_FIELD(arg0, s32 *, 0));
    func_02058b28(0, arg0 + 0x210, 0x10, &func_02044404, arg0 + 8, 1, 6, 1, 0);
    M2C_FIELD(arg0, s8 *, 0xF) = 1;
}
