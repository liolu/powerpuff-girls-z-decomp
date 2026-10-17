#include "m2c.h"

M2C_UNK func_0204ef60(s32, s32);                    /* extern */

void func_02013260(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r4;

    if ((arg2 == 0) && (M2C_FIELD(arg0, s8 *, 4) == 0)) {
        return;
    }
    var_r4 = (s32) (M2C_FIELD(arg0, s32 *, 8) * 0x10) >> 0xC;
    if (var_r4 > 0x10) {
        var_r4 = 0x10;
    } else if (var_r4 < -0x10) {
        var_r4 = -0x10;
    }
    if (arg1 & 1) {
        func_0204ef60(0x0400006C, var_r4);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_0204ef60(0x0400106C, var_r4);
}
