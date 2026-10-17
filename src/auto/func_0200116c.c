#include "m2c.h"

s32 func_020655f4(s8, s32);                         /* extern */
s32 func_02066084(void *, s16);                     /* extern */
extern M2C_UNK data_020771c3;
extern void *data_0208c580;

s32 func_0200116c(s32 arg0) {
    if (data_0208c580 != NULL) {
        M2C_FIELD(data_0208c580, s16 *, 0x800A4) = (s16) * ((s8 *) ((s8 *) &data_020771c3 + (arg0 * 2)));
        if (func_020655f4(M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020771c3 + (arg0 * 2))), s8 *, 1),
                          M2C_FIELD(data_0208c580, s32 *, 0x80090)) != 0) {
            return func_02066084(data_0208c580 + 0x80094, M2C_FIELD(data_0208c580, s16 *, 0x800A4));
        }
    }
    return 0;
}
