#include "m2c.h"

M2C_UNK func_02052eb4();                            /* extern */
M2C_UNK func_02056be8(M2C_UNK, u16, s32, u16);      /* extern */
s32 func_02069228(s32);                             /* extern */

s32 func_02002058(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 1) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
            temp_r0                     = func_02069228(M2C_FIELD(arg0, s16 *, 4) * 8);
            M2C_FIELD(arg0, s32 *, 0xC) = temp_r0;
            if (temp_r0 == 0) {
                func_02052eb4();
            }
        }
        func_02056be8(0, M2C_FIELD(arg0, u16 *, 2), M2C_FIELD(arg0, s32 *, 0xC), (u16) M2C_FIELD(arg0, s16 *, 4));
        M2C_FIELD(arg0, s8 *, 0)  = 1;
        M2C_FIELD(arg0, s16 *, 6) = 0;
    }
    return 1;
}
