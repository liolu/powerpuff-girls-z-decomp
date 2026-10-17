#include "m2c.h"

M2C_UNK func_020458a0(s32, s32, s32, s32);          /* extern */
extern s32 *data_0208def8;

void func_02016c5c(s32 arg0, void *arg1) {
    s32 var_r0;

    var_r0 = *data_0208def8;
    if (var_r0 != 0) {
        var_r0 += 0x10;
    }
    func_020458a0(var_r0, M2C_FIELD(arg1, s32 *, -0xC), M2C_FIELD(arg1, s32 *, -8), M2C_FIELD(arg1, s32 *, -4));
}
