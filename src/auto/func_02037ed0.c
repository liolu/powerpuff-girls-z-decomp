#include "m2c.h"

M2C_UNK func_02018598(void *);                      /* extern */
M2C_UNK func_020185ac(void *);                      /* extern */
M2C_UNK func_020185fc(void *, M2C_UNK);             /* extern */

s32 func_02037ed0(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r2_2;
    void *temp_r2;
    void *temp_r2_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x6A8);
    switch (temp_r0) {                              /* irregular */
        case 0:
            temp_r2                        = M2C_FIELD(arg0, void **, 0x48);
            M2C_FIELD(temp_r2, s8 *, 0xCE) = 1;
            M2C_FIELD(temp_r2, u8 *, 0xCF) = (u8) (M2C_FIELD(temp_r2, u8 *, 0xCF) & ~0x40);
            func_02018598(arg0 + 0xD20);
            temp_r2_2 = ((M2C_FIELD(arg0, s32 *, 0x6AC) + 0x12) * 0x14) + (s32) (M2C_FIELD(arg0, void **, 0x48) + 0x54);
            M2C_FIELD(temp_r2_2, s8 *, 2) = 1;
            M2C_FIELD(temp_r2_2, u8 *, 3) = (u8) (M2C_FIELD(temp_r2_2, u8 *, 3) & ~0x40);
            M2C_FIELD(arg0, s32 *, 0x6A8) = (s32) (M2C_FIELD(arg0, s32 *, 0x6A8) + 1);
        /* fallthrough */
        case 1:
            func_020185fc(arg0 + 0xD20, arg1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xD44) >= (s32) M2C_FIELD(arg0, s32 *, 0xD40)) {
                func_020185ac(arg0 + 0xD20);
                temp_r2_3                        = M2C_FIELD(arg0, void **, 0x48);
                M2C_FIELD(temp_r2_3, u8 *, 0xCF) = (u8) (M2C_FIELD(temp_r2_3, u8 *, 0xCF) | 0x40);
                M2C_FIELD(arg0, s32 *, 0x6AC)    = (s32) (M2C_FIELD(arg0, s32 *, 0x6AC) + 1);
                return 0;
            }
        default:
            return -1;
    }
}
