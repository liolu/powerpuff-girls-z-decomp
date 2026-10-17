#include "m2c.h"

M2C_UNK func_02007230(s32, void *, s32, M2C_UNK);   /* extern */
M2C_UNK func_02052fd0(s32, void *, u16, M2C_UNK);   /* extern */
extern s32 data_0207eec0;
extern s32 data_0208ca10;

void func_020183a4(void *arg0) {
    func_02052fd0(data_0207eec0, arg0 + 0x10, M2C_FIELD(arg0, u16 *, 8), 0x600);
    func_02007230(data_0208ca10, arg0 + 0x10, M2C_FIELD(arg0, s32 *, 4), 0x300);
    M2C_FIELD(arg0, s32 *, 0) = -1;
}
