#include "m2c.h"

M2C_UNK func_020027d4();                      /* extern */
M2C_UNK func_02069214();                      /* extern */
M2C_UNK func_0206f748();                            /* extern */
M2C_UNK func_020705f4();                            /* extern */
M2C_UNK func_02070740();                            /* extern */
extern M2C_UNK data_0207d154;
extern void *data_0208c590;
extern M2C_UNK data_0208c5bc;
extern s16 data_0208deea;

void *func_0203f298(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0207d154;
    if (data_0208deea != 5) {
        func_020705f4();
        func_0206f748();
        M2C_FIELD(data_0208c590, s32 *, 0x18) = 0;
        M2C_FIELD(data_0208c590, s32 *, 0x14) = 0;
        func_020027d4(data_0208c590);
        M2C_FIELD(&data_0208c5bc, s8 *, 4) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x20) != 0) {
        func_02070740();
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_02069214();
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_02069214(arg0);
    return arg0;
}
