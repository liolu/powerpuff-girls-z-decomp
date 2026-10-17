#include "m2c.h"

M2C_UNK func_02045870(void *);                      /* extern */
M2C_UNK func_020458a0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02077818;

void *func_020118b8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02077818;
    M2C_FIELD(arg0, s8 *, 0x234)   = 0;
    M2C_FIELD(arg0, s32 *, 0x238)  = 0;
    M2C_FIELD(arg0, s32 *, 0x23C)  = 0x400;
    func_02045870(arg0 + 0x10);
    func_020458a0(arg0 + 0x10, 0, 0, 0);
    M2C_FIELD(arg0, s8 *, 0x235) = 0;
    return arg0;
}
