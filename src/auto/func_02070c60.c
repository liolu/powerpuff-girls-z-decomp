#include "engine.h"
#include "m2c.h"

s32 func_02070c60(s32 arg0) {
    s32 temp_r0;
    u16 temp_r4;

    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + 1);
    if ((u32) M2C_FIELD(arg0, u16 *, 0x66) >= 0x3CU) {
        temp_r0                      = func_02052c30();
        temp_r4                      = M2C_FIELD(arg0, u16 *, 0x64);
        M2C_FIELD(arg0, u16 *, 0x64) = 0U;
        func_02052c44(temp_r0);
        M2C_FIELD(arg0, u16 *, 0x66) = 0U;
        if ((s32) temp_r4 >= 0x1E) {
            return 0;
        }
    }
    return 1;
}
