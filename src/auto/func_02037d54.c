#include "m2c.h"

M2C_UNK func_0200130c(M2C_UNK);                     /* extern */

s32 func_02037d54(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x6CC);
    if (temp_r1 == -1) {
        func_0200130c(0x26);
        return 6;
    }
    if (temp_r1 == M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x6C4) * 4)), s32 *, 0x6B0)) {
        func_0200130c(0x24);
        temp_r0                       = M2C_FIELD(arg0, s32 *, 0x6C4) + 1;
        M2C_FIELD(arg0, s32 *, 0x6C4) = temp_r0;
        if (temp_r0 < 5) {
            if (M2C_FIELD((arg0 + (temp_r0 * 4)), s32 *, 0x6B0) == -1) {
                var_r0 = 5;
            } else {
                var_r0 = 2;
            }
            return var_r0;
        }
        return 5;
    }
    func_0200130c(0x26);
    return 6;
}
