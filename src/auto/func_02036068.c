#include "m2c.h"

M2C_UNK func_02001260(M2C_UNK);                     /* extern */
M2C_UNK func_020013b0(M2C_UNK);                     /* extern */
M2C_UNK func_0201313c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0208df18;

void func_02036068(void *arg0, u32 arg1) {
    func_02001260(0x1E);
    func_020013b0(0x1E);
    switch (arg1) {
        default:
            break;
        case 1:
            M2C_FIELD(arg0, s8 *, 0xE) = 4;
            break;
        case 2:
            M2C_FIELD(arg0, s8 *, 0xE) = 5;
            break;
        case 3:
            M2C_FIELD(arg0, s8 *, 0xE) = 6;
            break;
        case 4:
            M2C_FIELD(arg0, s8 *, 0xE) = 7;
            break;
        case 5:
            M2C_FIELD(arg0, s8 *, 0xE) = 8;
            break;
    }
    M2C_FIELD(arg0, s8 *, 0x22) = 3;
    func_0201313c(&data_0208df18, 4, 0x88);
}
