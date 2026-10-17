#include "m2c.h"

s32 func_02069228(s32);                             /* extern */
M2C_UNK func_02069ed4(s32, M2C_UNK, s32);           /* extern */
extern s32 data_0208e018;

void *func_02046dd8(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5                      = arg1 * 0x78;
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_r0                      = func_02069228(temp_r5);
    if (temp_r0 != 0) {
        func_02069ed4(temp_r0, 0, temp_r5);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0x10) = temp_r0;
    }
    data_0208e018 = 0;
    return arg0;
}
