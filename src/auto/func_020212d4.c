#include "m2c.h"

M2C_UNK func_0200130c(M2C_UNK);                     /* extern */
s32 func_02012138(s32, M2C_UNK);                    /* extern */

s32 func_020212d4(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    M2C_FIELD(arg0, s16 *, 0x52) = (s16) (M2C_FIELD(arg0, s16 *, 0x52) + 1);
    if ((s32) M2C_FIELD(arg0, s16 *, 0x52) >= 0x258) {
        return 2;
    }
    temp_r0 = func_02012138(M2C_FIELD(arg0, s32 *, 0x48) + 0x54, arg2);
    if ((temp_r0 >= 1) && (temp_r0 <= 5)) {
        M2C_FIELD(arg0, s32 *, 0x6B0) = temp_r0;
        func_0200130c(0x2A);
        return 2;
    }
    return -1;
}
