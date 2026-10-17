#include "m2c.h"

void func_02034704(void *arg0) {
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 var_r1;
    void *temp_ip;
    void *temp_r4;
    void *var_r2;

    var_r1 = 0;
    if ((s32) M2C_FIELD(arg0, s8 *, 8) <= 0) {
        return;
    }
    var_r2 = arg0;
    do {
        temp_r6   = (M2C_FIELD(arg0, s8 *, 9) * 0x2980) + (s32) arg0;
        temp_r6_2 = ((s32) M2C_FIELD(var_r2, s32 *, 0x6B0) >> 0xC) - M2C_FIELD(temp_r6, s16 *, 0x6DA);
        temp_r5   = ((s32) M2C_FIELD(var_r2, s32 *, 0x6B4) >> 0xC) - M2C_FIELD(temp_r6, s16 *, 0x6D8);
        if ((temp_r6_2 < -0x18) || (temp_r6_2 > 0x100) || (temp_r5 < -0x18) || (temp_r5 > 0xC0)) {
            temp_ip                     = M2C_FIELD(var_r2, void **, 0x6D0);
            M2C_FIELD(temp_ip, u8 *, 3) = (u8) (M2C_FIELD(temp_ip, u8 *, 3) | 0x40);
        } else {
            M2C_FIELD(M2C_FIELD(var_r2, void **, 0x6D0), s16 *, 0x10) = (s16) temp_r6_2;
            M2C_FIELD(M2C_FIELD(var_r2, void **, 0x6D0), s16 *, 0x12) = (s16) temp_r5;
            temp_r4                                                   = M2C_FIELD(var_r2, void **, 0x6D0);
            M2C_FIELD(temp_r4, u8 *, 3)                               = (u8) (M2C_FIELD(temp_r4, u8 *, 3) & ~0x40);
        }
        var_r1 += 1;
        var_r2 += 0x2980;
    } while (var_r1 < (s32) M2C_FIELD(arg0, s8 *, 8));
}
