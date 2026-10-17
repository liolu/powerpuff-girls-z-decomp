#include "m2c.h"

M2C_UNK func_0200428c(s32);                         /* extern */
M2C_UNK func_02014c50(s32);                         /* extern */
M2C_UNK func_02046b1c(s32);                         /* extern */
M2C_UNK func_02046cf4(s32);                         /* extern */
M2C_UNK func_02046e40(s32);                         /* extern */
M2C_UNK func_02048af4(s32);                         /* extern */
M2C_UNK func_02069214(s32);                         /* extern */
extern s32 data_0208dee0;

void *func_0200965c(void *arg0) {
    s32 temp_r5;
    s32 temp_r5_2;
    s32 temp_r5_3;
    s32 temp_r5_4;
    s32 temp_r5_5;
    s32 temp_r5_6;
    void **temp_r0;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x160);
    if (temp_r5 != 0) {
        func_0200428c(temp_r5);
        func_02069214(temp_r5);
    }
    data_0208dee0 = 0;
    temp_r0       = M2C_FIELD(arg0, void ***, 4);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
        }
        M2C_FIELD(arg0, void ***, 4) = NULL;
    }
    temp_r5_2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r5_2 != 0) {
        if (temp_r5_2 != 0) {
            func_02046e40(temp_r5_2);
            func_02069214(temp_r5_2);
        }
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    temp_r5_3 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r5_3 != 0) {
        if (temp_r5_3 != 0) {
            func_02046cf4(temp_r5_3);
            func_02069214(temp_r5_3);
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    temp_r5_4 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_r5_4 != 0) {
        if (temp_r5_4 != 0) {
            func_02046b1c(temp_r5_4);
            func_02069214(temp_r5_4);
        }
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    temp_r5_5 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r5_5 != 0) {
        if (temp_r5_5 != 0) {
            func_02048af4(temp_r5_5);
            func_02069214(temp_r5_5);
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    temp_r5_6 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r5_6 != 0) {
        if (temp_r5_6 != 0) {
            func_02014c50(temp_r5_6);
            func_02069214(temp_r5_6);
        }
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
    }
    return arg0;
}
