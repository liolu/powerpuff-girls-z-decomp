#include "m2c.h"

M2C_UNK func_020037a4(void *, s32);                 /* extern */

void func_02016634(s32 arg0, void *arg1) {
    void *temp_r0;

    temp_r0 = *M2C_FIELD(arg1, void ***, -4);
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 0x16) != 2) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x20) = 0x7FFFFFFF;
    M2C_FIELD(temp_r0, s32 *, 0x24) = 0x7FFFFFFF;
    M2C_FIELD(temp_r0, s32 *, 0x28) = 0x7FFFFFFF;
    M2C_FIELD(temp_r0, s32 *, 0x2C) = 0x80000000;
    M2C_FIELD(temp_r0, s32 *, 0x30) = 0x80000000;
    M2C_FIELD(temp_r0, s32 *, 0x34) = 0x80000000;
    func_020037a4(temp_r0, M2C_FIELD(temp_r0, s32 *, 8));
}
