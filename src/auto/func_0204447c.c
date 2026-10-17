#include "m2c.h"

s32 func_020511d8();                                /* extern */
M2C_UNK func_02052eb4();                            /* extern */
s32 func_0205865c();                                /* extern */
M2C_UNK func_020586a8(u16);                         /* extern */
M2C_UNK func_020586b8(u16);                         /* extern */
s32 func_02058c24(s32);                             /* extern */

s32 func_0204447c(void *arg0) {
    s32 temp_r0;

    temp_r0                   = func_020511d8();
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    if (temp_r0 == -3) {
        func_02052eb4();
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
    func_020586a8((u16) M2C_FIELD(arg0, s32 *, 0));
    if (func_02058c24(0x901) == 0) {
        M2C_FIELD(arg0, s32 *, 4) = func_0205865c();
    }
    func_020586b8((u16) M2C_FIELD(arg0, s32 *, 0));
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return 1;
    }
    return 0;
}
