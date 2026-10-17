#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020511d8();                                /* extern */
extern M2C_UNK data_020970b8;
extern M2C_UNK data_020970bc;

void func_02060a90(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_020970bc, 0x05000001);
    M2C_FIELD(&data_020970b8, s16 *, 6) = func_020511d8();
}
