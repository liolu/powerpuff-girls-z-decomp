#include "m2c.h"

M2C_UNK func_0200130c(M2C_UNK);                     /* extern */
M2C_UNK func_0201ec70(void *);                      /* extern */
M2C_UNK func_0201ee40(void *, s32, M2C_UNK);        /* extern */

s32 func_0202d7fc(void *arg0, s32 arg1) {
    s32 temp_r1;
    void *temp_ip;
    void *temp_r2;
    void *temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x48);
    M2C_FIELD(temp_r4, s16 *, 0xE6) =
        (s16) (s8) M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x9F8) * 0x54) + (s32) arg0), s32 *, 0xA34);
    func_0201ec70(arg0 + 0x9FC);
    temp_r1                       = M2C_FIELD(arg0, s32 *, 0x9DC) + arg1;
    M2C_FIELD(arg0, s32 *, 0x9DC) = temp_r1;
    if (temp_r1 < 0x999) {
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0x9DC)   = 0;
    temp_r2                         = M2C_FIELD(arg0, void **, 0x48);
    M2C_FIELD(temp_r4, s16 *, 0xE6) = 0xA;
    temp_r3                         = temp_r2 + 0x2D4;
    M2C_FIELD(temp_r3, s16 *, 6)    = 0xE;
    temp_ip                         = temp_r2 + 0xF4;
    M2C_FIELD(temp_r4, u8 *, 0xE3)  = (u8) (M2C_FIELD(temp_r4, u8 *, 0xE3) | 0x40);
    M2C_FIELD(temp_ip, u8 *, 3)     = (u8) (M2C_FIELD(temp_ip, u8 *, 3) & ~0x40);
    M2C_FIELD(temp_ip, s16 *, 0x10) = (s16) M2C_FIELD(temp_r3, s16 *, 0x10);
    M2C_FIELD(temp_ip, s16 *, 0x12) = 0x98;
    func_0201ee40(arg0 + 0x9FC, M2C_FIELD(arg0, s32 *, 0x9F4), 1);
    func_0201ee40(arg0 + 0x9FC, M2C_FIELD(arg0, s32 *, 0x9F8), 1);
    M2C_FIELD(arg0, s32 *, 0x9D4) = 0;
    func_0200130c(0x2A);
    return 2;
}
