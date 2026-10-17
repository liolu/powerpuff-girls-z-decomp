#include "m2c.h"

M2C_UNK func_020011e4();                            /* extern */
M2C_UNK func_02001c1c(void *);                      /* extern */
M2C_UNK func_02006214(s32);                         /* extern */
s32 func_0200644c(s32, s32);                        /* extern */
M2C_UNK func_02006558(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200657c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02010300(void *);                      /* extern */
M2C_UNK func_02010530(void *);                      /* extern */
M2C_UNK func_02010e48(void *);                      /* extern */
M2C_UNK func_0201313c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_02013794(s32, s8, M2C_UNK);                /* extern */
M2C_UNK func_02017d84();                            /* extern */
M2C_UNK func_02070740(s32);                         /* extern */
extern M2C_UNK data_0208cb40;
extern void *data_0208def8;
extern s32 data_0208df04;
extern M2C_UNK data_0208df18;

void func_0201176c(void *arg0) {
    void *temp_r5;

    func_02017d84();
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_02006214(M2C_FIELD(arg0, s32 *, 0x24));
    if (M2C_FIELD(arg0, u8 *, 0x66) != 0) {
        func_02070740(M2C_FIELD(arg0, s32 *, 0x28));
    }
    M2C_FIELD(arg0, s8 *, 0x58) = 1;
    func_02006558(M2C_FIELD(arg0, s32 *, 0x24), 0);
    M2C_FIELD(&data_0208cb40, s8 *, 0)    = 0;
    M2C_FIELD(&data_0208cb40, s8 *, 0x38) = 0x13;
    M2C_FIELD(&data_0208cb40, s8 *, 0x46) = 0x14;
    M2C_FIELD(&data_0208cb40, s8 *, 0x4C) = 0x15;
    M2C_FIELD(&data_0208cb40, s8 *, 0x52) = 0x16;
    M2C_FIELD(&data_0208cb40, s8 *, 0x58) = 0x17;
    M2C_FIELD(&data_0208cb40, s8 *, 0x20) = 5;
    M2C_FIELD(&data_0208cb40, s8 *, 0x26) = 6;
    M2C_FIELD(&data_0208cb40, s8 *, 0x2C) = 7;
    func_0200657c(M2C_FIELD(arg0, s32 *, 0x24), 1);
    if (func_0200644c(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x1C)) == 0) {
        return;
    }
    func_02010e48(arg0);
    func_02010300(arg0);
    func_02010530(arg0);
    temp_r5 = data_0208def8;
    func_02001c1c(temp_r5 + 0x1C);
    M2C_FIELD(temp_r5, s8 *, 0x168) = 1;
    func_0201313c(&data_0208df18, 3, 0x88);
    if (func_02013794(data_0208df04, M2C_FIELD(arg0, s8 *, 0x65), -1) != 0) {
        func_020011e4();
    }
    M2C_FIELD(arg0, s8 *, 0x5B) = -1;
}
