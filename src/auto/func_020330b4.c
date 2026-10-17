#include "m2c.h"

M2C_UNK func_0200130c(M2C_UNK);                     /* extern */
M2C_UNK func_0201313c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_02017fe0(void *, void *);                  /* extern */
M2C_UNK func_02018134(void *);                      /* extern */
M2C_UNK func_020183a4(void *);                      /* extern */
M2C_UNK func_020183f0(void *, u32);                 /* extern */
M2C_UNK func_020188fc(void *, s32);                 /* extern */
M2C_UNK func_0201ec70(void *);                      /* extern */
M2C_UNK func_02020454(void *, s32);                 /* extern */
M2C_UNK func_020334a0(void *, void *);              /* extern */
s32 func_020347b4(void *);                          /* extern */
M2C_UNK func_0206f5c4(void *, M2C_UNK);             /* extern */
s32 func_0206f5f0();                                /* extern */
extern M2C_UNK data_0208df18;

s32 func_020330b4(void *arg0, s32 arg1, void *arg2) {
    s32 var_r4;
    s8 temp_r1;
    void *temp_r3;

    M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + arg1);
    temp_r1                      = M2C_FIELD(arg0, s8 *, 7);
    var_r4                       = -1;
    switch (temp_r1) {
        default:
            break;
        case 0:
            var_r4 = 0;
            if (M2C_FIELD(&data_0208df18, s8 *, 4) == 0) {
                func_0206f5c4(arg0, 5);
            }
            break;
        case 5:
            if (func_0206f5f0() != 0) {
                M2C_FIELD(arg0, s8 *, 0xA)   = -1;
                M2C_FIELD(arg0, s32 *, 0x68) = 0;
                M2C_FIELD(arg0, s16 *, 0x52) = 0;
                M2C_FIELD(arg0, s16 *, 0x50) = 0;
            }
            if (func_020347b4(arg0) != 0) {
                func_0206f5c4(arg0, 1);
            }
            break;
        case 1:
            var_r4 = func_02017fe0(arg0, arg2);
            break;
        case 2:
            var_r4 = 2;
            if (func_0206f5f0() != 0) {
                func_02018134(arg0);
                M2C_FIELD(arg2, s16 *, 6)     = 0;
                M2C_FIELD(arg0, s8 *, 0x4F)   = 0;
                M2C_FIELD(arg0, s8 *, 0xB320) = 0;
            }
            M2C_FIELD(arg0, s16 *, 0x50) = (s16) (M2C_FIELD(arg0, s16 *, 0x50) + 1);
            M2C_FIELD(arg0, s16 *, 0x52) = (s16) (M2C_FIELD(arg0, s16 *, 0x52) + 1);
            if ((s32) M2C_FIELD(arg0, s16 *, 0x52) < 0xE10) {
                func_020334a0(arg0, arg2);
                func_02020454(arg0 + 0xB1F8, arg1);
                func_020188fc(arg0 + 0xB2B8, arg1);
                func_0201ec70(arg0 + 0xACB4);
            }
            break;
        case 3:
        case 4:
            var_r4 = 3;
            if (func_0206f5f0() != 0) {
                temp_r3                        = M2C_FIELD(arg0, void **, 0x48);
                M2C_FIELD(temp_r3, u8 *, 0xBB) = (u8) (M2C_FIELD(temp_r3, u8 *, 0xBB) | 0x40);
                M2C_FIELD(arg0, s16 *, 0x50)   = 0;
                func_020183a4(arg0 + 0x9C);
                if (M2C_FIELD(arg0, s8 *, 7) == 3) {
                    func_020183f0(arg0 + 0x9C, 5U);
                } else {
                    func_020183f0(arg0 + 0x9C,
                                  (u32) (M2C_FIELD(((M2C_FIELD(arg0, s8 *, 0xA) * 0xC) + (s32) arg0), u8 *, 0x6C) << 0x1D) >>
                                      0x1D);
                    func_0200130c(0x29);
                }
            }
            M2C_FIELD(arg0, s16 *, 0x50) = (s16) (M2C_FIELD(arg0, s16 *, 0x50) + 1);
            if ((s32) M2C_FIELD(arg0, s16 *, 0x50) >= 0x12C) {
                func_0201313c(&data_0208df18, 4, 0x88);
                func_0206f5c4(arg0, 7);
            }
            break;
        case 7:
            var_r4 = 3;
            if (M2C_FIELD(&data_0208df18, s8 *, 4) == 0) {
                var_r4 = 4;
            }
            break;
    }
    return var_r4;
}
