#include "m2c.h"

void *func_02046ef4(s32);                           /* extern */
M2C_UNK func_02047708(void *, s32);                 /* extern */

void *func_02003754(void *arg0, s32 arg1, s32 arg2, s16 arg3) {
    void *temp_r0;

    temp_r0 = func_02046ef4(M2C_FIELD(arg0, s32 *, 8));
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s16 *, 0x14) = arg3;
        if ((arg2 != 0) && (arg2 != -1)) {
            func_02047708(temp_r0, arg2);
        } else {
            func_02047708(temp_r0, 0);
        }
    }
    return temp_r0;
}
