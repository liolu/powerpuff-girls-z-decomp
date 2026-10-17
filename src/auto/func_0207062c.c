#include "m2c.h"

M2C_UNK func_02069ed4(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK data_0208c564;

void *func_0207062c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0208c564;
    func_02069ed4(arg0 + 4, 0, 0x5A);
    M2C_FIELD(arg0, s16 *, 0x5E) = 0;
    M2C_FIELD(arg0, s8 *, 0x60)  = 0;
    M2C_FIELD(arg0, s8 *, 0x61)  = 0;
    M2C_FIELD(arg0, s8 *, 0x62)  = 0;
    M2C_FIELD(arg0, s8 *, 0x63)  = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s16 *, 0x74) = 0;
    M2C_FIELD(arg0, s16 *, 0x76) = 0;
    M2C_FIELD(arg0, s16 *, 0x78) = 0;
    M2C_FIELD(arg0, s16 *, 0x7A) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s16 *, 0x80) = 0;
    func_02069ed4(arg0 + 0x82, 0, 0x100);
    return arg0;
}
