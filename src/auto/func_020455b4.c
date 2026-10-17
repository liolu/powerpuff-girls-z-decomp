#include "m2c.h"

s32 func_02000c00(s32, s32, M2C_UNK *);             /* extern */
s32 func_02000c9c(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_02069b6c(s32);                         /* extern */
extern M2C_UNK data_02077894;
extern M2C_UNK data_0208c5bc;

s32 func_020455b4(s32 arg0) {
    M2C_UNK sp4;
    M2C_UNK sp0;
    s32 var_r4;

    if (M2C_FIELD(&data_0208c5bc, s32 *, 0x28) != 0) {
        var_r4 = func_02000c00(M2C_FIELD(&data_0208c5bc, s32 *, 0x28), M2C_FIELD(&data_0208c5bc, s32 *, 0x2C), &sp0);
        func_02069b6c(M2C_FIELD(&data_0208c5bc, s32 *, 0x28));
        M2C_FIELD(&data_0208c5bc, s32 *, 0x28) = 0;
        M2C_FIELD(&data_0208c5bc, s32 *, 0x2C) = 0;
    } else {
        var_r4 = func_02000c9c(*((M2C_UNK *) ((s8 *) &data_02077894 + (arg0 * 4))), &sp4);
    }
    return var_r4;
}
