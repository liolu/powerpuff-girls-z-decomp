#include "engine.h"
#include "m2c.h"

void func_020709c8(M2C_UNK, M2C_UNK);

s32 func_02070a84(s32 arg0) {
    s16 temp_r0;
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x74);
    if ((s32) temp_r1 >= (s32) M2C_FIELD(arg0, s16 *, 0x76)) {
        return -1;
    }
    func_020709c8(arg0, (s32) temp_r1);
    temp_r0                      = M2C_FIELD(arg0, s16 *, 0x74);
    M2C_FIELD(arg0, s16 *, 0x74) = (s16) (temp_r0 + 1);
    return (s32) temp_r0;
}
