#include "m2c.h"

M2C_UNK func_0201ee60(void *, s32);                 /* extern */

void func_0202da14(void *arg0, void *arg1) {
    s16 temp_ip;
    s16 temp_r2;
    s16 temp_r2_2;
    s32 var_r3;
    void *temp_r1;
    void *temp_r2_3;
    void *var_r4;

    temp_r2 = M2C_FIELD(arg1, s16 *, 0x12);
    temp_ip = M2C_FIELD(arg1, s16 *, 0x10);
    if ((s32) temp_r2 > 0x7B) {
        return;
    }
    if ((s32) temp_r2 <= 0x6B) {
        return;
    }
    var_r3 = 0;
    var_r4 = M2C_FIELD(arg0, void **, 0x48) + 0x234;
loop_5:
    if (!(M2C_FIELD(var_r4, u8 *, 3) & 0x40)) {
        temp_r2_2 = M2C_FIELD(var_r4, s16 *, 0x10);
        if (((s32) temp_ip >= (s32) (temp_r2_2 - 0x10)) && ((s32) temp_ip < (s32) (temp_r2_2 + 0x10))) {
            M2C_FIELD(arg1, u8 *, 3)          = (u8) (M2C_FIELD(arg1, u8 *, 3) | 0x40);
            M2C_FIELD(var_r4, u8 *, 3)        = (u8) (M2C_FIELD(var_r4, u8 *, 3) | 0x40);
            temp_r2_3                         = M2C_FIELD(arg0, void **, 0x48);
            M2C_FIELD(temp_r2_3, s16 *, 0xF0) = (s16) M2C_FIELD(var_r4, s16 *, 0x10);
            M2C_FIELD(temp_r2_3, s16 *, 0xF2) = (s16) M2C_FIELD(var_r4, s16 *, 0x12);
            M2C_FIELD(temp_r2_3, u8 *, 0xE3)  = (u8) (M2C_FIELD(temp_r2_3, u8 *, 0xE3) & ~0x40);
            func_0201ee60(arg0 + 0x9FC, M2C_FIELD(arg0, s32 *, 0x9F8));
            temp_r1 = M2C_FIELD(arg0, void **, 0x9E0);
            if (temp_r1 != NULL) {
                M2C_FIELD(temp_r1, u8 *, 3) = (u8) (M2C_FIELD(temp_r1, u8 *, 3) & ~0x40);
            }
            M2C_FIELD(arg0, void **, 0x9E0) = var_r4;
            M2C_FIELD(arg0, s32 *, 0x9E8)   = 1;
            M2C_FIELD(arg0, s32 *, 0x9D4)   = 2;
            M2C_FIELD(arg0, s32 *, 0x9DC)   = 0;
            return;
        }
    }
    var_r3 += 1;
    var_r4 += 0x28;
    if (var_r3 >= 3) {
        return;
    }
    goto loop_5;
}
