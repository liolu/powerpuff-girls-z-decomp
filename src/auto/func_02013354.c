#include "m2c.h"

M2C_UNK func_02000e40();                            /* extern */
M2C_UNK func_02001aa8();                            /* extern */
M2C_UNK func_02001f94();                            /* extern */
M2C_UNK func_02002600();                            /* extern */
M2C_UNK func_02005da0();                            /* extern */
M2C_UNK func_02069214();                            /* extern */
M2C_UNK func_020701a0();                            /* extern */
extern M2C_UNK data_0208dee8;

void func_02013354(void) {
    if (M2C_FIELD(&data_0208dee8, s32 *, 0x1C) != 0) {
        if (M2C_FIELD(&data_0208dee8, s32 *, 0x1C) != 0) {
            func_02069214();
        }
        M2C_FIELD(&data_0208dee8, s32 *, 0x1C) = 0;
    }
    func_020701a0();
    func_02002600();
    func_02005da0();
    func_02000e40();
    func_02001f94();
    func_02001aa8();
}
