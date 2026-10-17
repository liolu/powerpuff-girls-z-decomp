#include "m2c.h"

M2C_UNK func_02063cbc(s32, s32, M2C_UNK);           /* extern */
extern s32 data_0208c580;

s32 func_02001344(s32 arg0, M2C_UNK arg1) {
    if (data_0208c580 == 0) {
        return 0;
    }
    func_02063cbc(arg0 >> 4, arg0 & 0xF, arg1);
    return 1;
}
