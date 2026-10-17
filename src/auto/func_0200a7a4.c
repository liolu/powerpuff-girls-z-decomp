#include "m2c.h"

s32 func_02000c00(s32, s32, M2C_UNK *);             /* extern */
M2C_UNK func_0200a838(s32, M2C_UNK);                /* extern */
s32 func_020691b0(s32);                             /* extern */
M2C_UNK func_02069b6c(s32);                         /* extern */
extern M2C_UNK data_0208c5bc;
extern s16 data_0208deec;

void func_0200a7a4(M2C_UNK arg0) {
    M2C_UNK sp0;
    s32 temp_r0;
    s32 temp_r5;

    M2C_FIELD(&data_0208c5bc, s32 *, 0x28) = 0;
    M2C_FIELD(&data_0208c5bc, s32 *, 0x2C) = 0;
    if (data_0208deec == 3) {
        if (M2C_FIELD(&data_0208c5bc, s32 *, 0x1C) != 0) {
            temp_r5 = func_02000c00(M2C_FIELD(&data_0208c5bc, s32 *, 0x1C), M2C_FIELD(&data_0208c5bc, s32 *, 0x20), &sp0);
            func_02069b6c(M2C_FIELD(&data_0208c5bc, s32 *, 0x1C));
            M2C_FIELD(&data_0208c5bc, s32 *, 0x1C) = temp_r5;
        }
        M2C_FIELD(&data_0208c5bc, s8 *, 0xE) = 0;
    } else {
        M2C_FIELD(&data_0208c5bc, s32 *, 0x1C) = 0;
    }
    temp_r0 = func_020691b0(0x7CC);
    if (temp_r0 == 0) {
        return;
    }
    func_0200a838(temp_r0, arg0);
}
