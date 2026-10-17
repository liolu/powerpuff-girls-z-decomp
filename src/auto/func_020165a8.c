#include "m2c.h"

s32 func_02003754(s32, s32, s32, s32);              /* extern */
extern s32 data_0208def8;

void func_020165a8(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) =
        func_02003754(data_0208def8, M2C_FIELD(arg1, s32 *, -0xC), M2C_FIELD(arg1, s32 *, -8), M2C_FIELD(arg1, s32 *, -4));
}
