#include "m2c.h"

M2C_UNK func_02018598(void *);                      /* extern */

void func_02020418(void *arg0, s16 arg1, s32 arg2) {
    void *temp_r3;
    void *temp_r3_2;

    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 6) = arg1;
    temp_r3                                          = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r3, u8 *, 3)                      = (u8) (M2C_FIELD(temp_r3, u8 *, 3) & ~0x40);
    temp_r3_2                                        = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r3_2, u8 *, 3)                    = (u8) (M2C_FIELD(temp_r3_2, u8 *, 3) | 6);
    M2C_FIELD(arg0, s32 *, 0x24)                     = arg2;
    func_02018598(arg0 + 4);
}
