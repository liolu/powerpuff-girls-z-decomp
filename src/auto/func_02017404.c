#include "m2c.h"

M2C_UNK func_02011404(s32, s32, s32);               /* extern */
extern s32 data_0208defc;

void func_02017404(s32 arg0, void *arg1) {
    func_02011404(data_0208defc, M2C_FIELD(arg1, s32 *, -8) - 1, M2C_FIELD(arg1, s32 *, -4) - 1);
}
