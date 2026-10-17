#include "m2c.h"

void func_0202d98c(void *arg0, s32 arg1) {
    s16 temp_r2;
    s16 var_r2;
    void *temp_r3;

    var_r2 = M2C_FIELD(arg0, s32 *, 0x9D0) - arg1;
    if ((s32) var_r2 <= 0) {
        var_r2 = 0 - var_r2;
    }
    if ((s32) var_r2 < 2) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x9D0) = arg1;
    temp_r3                       = M2C_FIELD(arg0, void **, 0x48) + 0x2D4;
    temp_r2                       = M2C_FIELD(temp_r3, s16 *, 0x10);
    if ((s32) temp_r2 < 0x32) {
        return;
    }
    if ((s32) temp_r2 > 0xCE) {
        return;
    }
    M2C_FIELD(temp_r3, s16 *, 0x10) = (s16) (arg1 - M2C_FIELD(arg0, s32 *, 0x9CC));
    if ((s32) M2C_FIELD(temp_r3, s16 *, 0x10) < 0x32) {
        M2C_FIELD(temp_r3, s16 *, 0x10) = 0x32;
    }
    if ((s32) M2C_FIELD(temp_r3, s16 *, 0x10) > 0xCE) {
        M2C_FIELD(temp_r3, s16 *, 0x10) = 0xCE;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x48), s16 *, 0x104) = (s16) M2C_FIELD(temp_r3, s16 *, 0x10);
}
