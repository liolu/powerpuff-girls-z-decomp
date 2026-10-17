#include "m2c.h"

s32 func_020599dc();                                /* extern */
M2C_UNK func_0205a194(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02069b6c();                            /* extern */

void func_020027d4(void *arg0) {
    s8 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0xB) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_0205a194(4, 0, 0);
    }
    temp_r0 = M2C_FIELD(arg0, s8 *, 0);
    if ((temp_r0 != 0) && (temp_r0 != 1)) {
        return;
    }
    if (func_020599dc() != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x40) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        func_02069b6c();
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    M2C_FIELD(arg0, u8 *, 0xB) = 0U;
}
