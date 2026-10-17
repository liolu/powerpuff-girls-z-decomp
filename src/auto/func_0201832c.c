#include "m2c.h"

M2C_UNK func_02052fd0(s32, void *, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_0207eec0;

void *func_0201832c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s16 *, 8) = 0;
    func_02052fd0(data_0207eec0, arg0 + 0x10, 0, 0x600);
    return arg0;
}
