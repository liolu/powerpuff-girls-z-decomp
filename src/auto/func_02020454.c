#include "m2c.h"

M2C_UNK func_020185ac(void *);                      /* extern */
M2C_UNK func_020185fc(void *);                      /* extern */

void func_02020454(void *arg0) {
    void *temp_r2;
    void *temp_r2_2;

    if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 0), u8 *, 3) & 6)) {
        return;
    }
    func_020185fc(arg0 + 4);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) < (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        return;
    }
    temp_r2                       = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r2, u8 *, 3)   = (u8) (M2C_FIELD(temp_r2, u8 *, 3) | 0x40);
    temp_r2_2                     = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_r2_2, u8 *, 3) = (u8) (M2C_FIELD(temp_r2_2, u8 *, 3) & ~6);
    func_020185ac(arg0 + 4);
}
