#include "m2c.h"

M2C_UNK func_0204d498(s32, void *);                 /* extern */

void func_0204ba80(void *arg0, void *arg1, s32 *arg2) {
    s32 (*temp_r3)(M2C_UNK, M2C_UNK, M2C_UNK);
    s32 temp_r0;
    s32 temp_r1;

    if (arg2 != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x3C);
    }
    if ((u32) (M2C_FIELD(arg0, s32 *, 0) - 4) <= 1U) {
        M2C_FIELD(arg1, M2C_UNK(**)(s32, s32), 0x24)(M2C_FIELD(arg1, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0xC));
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 6) {
        func_0204d498(M2C_FIELD(arg0, s32 *, 4), arg1);
    }
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    temp_r1                      = M2C_FIELD(arg0, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x34) = temp_r1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r1;
    temp_r3                      = M2C_FIELD(arg0, s32(**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x38);
    if (temp_r3 == NULL) {
        return;
    }
    temp_r0                      = temp_r3(0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x3C) = temp_r0;
    M2C_FIELD(arg1, s32 *, 0x30) = temp_r0;
}
