#include "m2c.h"

M2C_UNK func_02001260(M2C_UNK);                     /* extern */
M2C_UNK func_020012a8(M2C_UNK);                     /* extern */
M2C_UNK func_02007230(s32, void *, s32, M2C_UNK);   /* extern */
M2C_UNK func_020184e0(void *, s32);                 /* extern */
M2C_UNK func_02052fd0(s32, void *, u16, M2C_UNK);   /* extern */
extern M2C_UNK data_02072228;
extern M2C_UNK data_02072240;
extern M2C_UNK data_0207224c;
extern s32 data_0207eec0;
extern s32 data_0208ca10;
extern void *data_0208df28;

void func_020183f0(void *arg0, s32 arg1) {
    void *temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0) == arg1) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    func_02052fd0(data_0207eec0, arg0 + 0x10, M2C_FIELD(arg0, u16 *, 8), 0x600);
    func_020184e0(arg0, (arg1 * 6) + (s32) &data_02072228);
    if (arg1 == 5) {
        func_020184e0(arg0, (s32) &data_02072240);
    } else if (arg1 != 4) {
        func_020184e0(arg0, (s32) &data_0207224c);
    }
    func_02007230(data_0208ca10, arg0 + 0x10, M2C_FIELD(arg0, s32 *, 4), 0x300);
    temp_r4 = data_0208df28;
    if (M2C_FIELD(temp_r4, u8 *, 0x60) != 0) {
        return;
    }
    if (M2C_FIELD(temp_r4, s8 *, 0xA) == M2C_FIELD(temp_r4, s8 *, 9)) {
        func_02001260(0x1E);
        func_020012a8(0x2C);
    } else {
        func_020012a8(0x2D);
    }
    M2C_FIELD(temp_r4, s8 *, 0x60) = 1;
}
