#include "m2c.h"

s32 func_02000c9c(s32, M2C_UNK *);                  /* extern */
s32 func_02001f14();                                /* extern */
M2C_UNK func_02002018(s32, M2C_UNK);                /* extern */
M2C_UNK func_02002058(s32);                         /* extern */
M2C_UNK func_02041f90(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_02077894;
extern M2C_UNK data_0208c5bc;
extern s32 data_0208ca10;
extern s16 data_0208deec;

s32 func_0203f350(void *arg0) {
    M2C_UNK sp0;
    s32 temp_r0;
    s32 temp_r0_2;

    M2C_FIELD(&data_0208c5bc, s8 *, 0x1B)  = 0;
    M2C_FIELD(&data_0208c5bc, s8 *, 0x1A)  = 0;
    M2C_FIELD(&data_0208c5bc, s8 *, 0x19)  = 0;
    M2C_FIELD(&data_0208c5bc, s8 *, 0x18)  = 0;
    M2C_FIELD(&data_0208c5bc, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0208c5bc, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x18)           = (s32) data_0208ca10;
    temp_r0                                = func_02000c9c(M2C_FIELD(&data_02077894, s32 *, 8), &sp0);
    M2C_FIELD(arg0, s32 *, 0x1C)           = temp_r0;
    if (temp_r0 == 0) {
        return 0;
    }
    func_02041f90(arg0, 0);
    temp_r0_2                    = func_02001f14();
    M2C_FIELD(arg0, s32 *, 0x14) = temp_r0_2;
    if (temp_r0_2 != 0) {
        func_02002018(temp_r0_2, 1);
        func_02002058(M2C_FIELD(arg0, s32 *, 0x14));
    }
    if (data_0208deec == 5) {
        if (M2C_FIELD(&data_0208c5bc, u8 *, 0xE) != 0) {
            M2C_FIELD(arg0, s8 *, 0xC) = 5;
        } else {
            M2C_FIELD(arg0, s8 *, 0xC) = 6;
        }
    }
    *M2C_FIELD(arg0, s8 **, 4) = 1;
    return 1;
}
