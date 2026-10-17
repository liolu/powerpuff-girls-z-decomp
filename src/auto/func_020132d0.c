#include "m2c.h"

M2C_UNK func_02005e54();                            /* extern */
extern M2C_UNK data_0208dee8;
extern M2C_UNK data_027e0000;

void func_020132d0(void) {
    M2C_FIELD(&data_0208dee8, s32 *, 0x20) = (s32) (M2C_FIELD(&data_0208dee8, s32 *, 0x20) + 1);
    func_02005e54();
    M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) | 1);
}
