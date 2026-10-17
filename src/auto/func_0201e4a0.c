#include "m2c.h"

M2C_UNK func_0200130c(M2C_UNK);                     /* extern */
M2C_UNK func_02018584(void *, void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02018598(void *);                      /* extern */
M2C_UNK func_020185fc(void *, M2C_UNK);             /* extern */

void func_0201e4a0(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    u16 temp_r2_2;
    void *temp_r0;
    void *temp_r2;

    temp_r0 = arg0 + (M2C_FIELD(arg0, s8 *, 0xCE8) * 2);
    if (M2C_FIELD(temp_r0, u16 *, 0xCC0) == M2C_FIELD(temp_r0, u16 *, 0xCA0)) {
        M2C_FIELD(arg0, s8 *, 0xCEC)    = 2;
        M2C_FIELD(arg0, void **, 0xD00) = (void *) (M2C_FIELD(arg0, s32 *, 0x48) + 0x158);
        func_0200130c(0x24);
    } else {
        M2C_FIELD(arg0, s8 *, 0xCEC)    = 3;
        M2C_FIELD(arg0, void **, 0xD00) = (void *) (M2C_FIELD(arg0, s32 *, 0x48) + 0x16C);
        func_0200130c(0x26);
    }
    func_02018584(arg0 + 0xD04, M2C_FIELD(arg0, void **, 0xD00), 0x1000, 0x1800, 0x800);
    temp_r2                     = M2C_FIELD(arg0, void **, 0xD00);
    M2C_FIELD(temp_r2, u8 *, 3) = (u8) (M2C_FIELD(temp_r2, u8 *, 3) & ~0x40);
    func_02018598(arg0 + 0xD04);
    func_020185fc(arg0 + 0xD04, arg1);
    temp_r2_2 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, s8 *, 0xCE8) * 2)), u16 *, 0xCC0);
    switch ((s32) temp_r2_2) {                      /* irregular */
        case 0x1C3F:
            var_r0 = 0;
            break;
        case 0x7C1D:
            var_r0 = 1;
            break;
        case 0x4CA3:
            var_r0 = 2;
            break;
        case 0xAC0:
            var_r0 = 3;
            break;
        case 0x3FF:
            var_r0 = 4;
            break;
        default:
            var_r0 = -1;
            break;
    }
    M2C_FIELD((((var_r0 + 0x11) * 0x14) + M2C_FIELD(arg0, s32 *, 0x48)), s8 *, 0x56) = 2;
    M2C_FIELD(arg0, s8 *, 0xCED)                                                     = 0;
}
