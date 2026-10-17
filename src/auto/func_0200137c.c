#include "m2c.h"

s32 func_02066554(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 data_0208c580;

s32 func_0200137c(M2C_UNK arg0) {
    if (data_0208c580 == 0) {
        return 0;
    }
    return func_02066554(data_0208c580 + 0x800A0, arg0, 0);
}
