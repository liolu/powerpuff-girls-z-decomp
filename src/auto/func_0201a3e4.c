#include "m2c.h"

s32 func_0201a3e4(s32 arg0, u8 *arg1, s32 arg2, s16 arg3, s32 arg4) {
    s16 var_r1;
    s32 var_r4;
    void *temp_r4;
    void *var_ip;

    var_ip = arg0 + 0xA4;
    var_r4 = 0;
loop_1:
    if ((M2C_FIELD(var_ip, s16 *, 0x10) == arg2) && ((u32) (u8) (s8) (M2C_FIELD(var_ip, s8 *, 8) - 2) <= 1U)) {
        M2C_FIELD(var_ip, s8 *, 8)    = 4;
        M2C_FIELD(var_ip, s16 *, 0xE) = (s16) ((u32) (*arg1 << 0x1D) >> 0x1D);
        if (var_r4 < 3) {
            var_r1 = 0xF;
        } else {
            var_r1 = 0x5F;
        }
        M2C_FIELD(M2C_FIELD(var_ip, void **, 0), s16 *, 0x12) = var_r1;
        temp_r4                                               = M2C_FIELD(var_ip, void **, 4);
        M2C_FIELD(temp_r4, u8 *, 3)                           = (u8) (M2C_FIELD(temp_r4, u8 *, 3) & ~0x40);
        M2C_FIELD(M2C_FIELD(var_ip, void **, 4), s16 *, 6)    = (s16) ((M2C_FIELD(var_ip, s16 *, 0xE) * 2) + 0x11);
        M2C_FIELD(M2C_FIELD(var_ip, void **, 4), s16 *, 0x10) = arg3;
        M2C_FIELD(M2C_FIELD(var_ip, void **, 4), s16 *, 0x12) = (s16) arg4;
        M2C_FIELD(var_ip, s16 *, 0xC)                         = 0;
        return 1;
    }
    var_r4 += 1;
    var_ip += 0x18;
    if (var_r4 >= 6) {
        return 0;
    }
    goto loop_1;
}
