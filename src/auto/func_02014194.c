#include "m2c.h"

s32 func_02001f14();                                /* extern */
M2C_UNK func_02002018(s32, M2C_UNK);                /* extern */
M2C_UNK func_02002058(s32);                         /* extern */
M2C_UNK func_02044410();                            /* extern */
void *func_020691b0(M2C_UNK);                       /* extern */
extern M2C_UNK data_02077230;
extern M2C_UNK data_02077a00;

void func_02014194(s32 arg0) {
    s32 temp_r0;
    void *temp_r0_2;

    func_02044410();
    temp_r0 = func_02001f14();
    if (temp_r0 != 0) {
        func_02002018(temp_r0, 1);
        func_02002058(temp_r0);
    }
    temp_r0_2 = func_020691b0(0x24);
    if (temp_r0_2 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0_2, M2C_UNK **, 0) = &data_02077230;
    M2C_FIELD(temp_r0_2, s32 *, 4)      = arg0;
    M2C_FIELD(temp_r0_2, s16 *, 8)      = 0;
    M2C_FIELD(temp_r0_2, s16 *, 0xA)    = 0;
    M2C_FIELD(temp_r0_2, s8 *, 0xC)     = 0;
    M2C_FIELD(temp_r0_2, s8 *, 0xD)     = -1;
    M2C_FIELD(temp_r0_2, s8 *, 0xE)     = 0;
    M2C_FIELD(temp_r0_2, s32 *, 0x10)   = 0;
    M2C_FIELD(temp_r0_2, M2C_UNK **, 0) = &data_02077a00;
    M2C_FIELD(temp_r0_2, s32 *, 0x14)   = 0;
    M2C_FIELD(temp_r0_2, s32 *, 0x18)   = 0;
    M2C_FIELD(temp_r0_2, s32 *, 0x1C)   = 0;
    M2C_FIELD(temp_r0_2, s8 *, 0x21)    = 0;
}
