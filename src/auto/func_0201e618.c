#include "m2c.h"

M2C_UNK func_02007408(s32, M2C_UNK, M2C_UNK, void *, s32); /* extern */
M2C_UNK func_02007514(s32);                         /* extern */
M2C_UNK func_020185ac(void *);                      /* extern */
M2C_UNK func_020185fc(s32);                         /* extern */

void func_0201e618(void *arg0) {
    s32 temp_r2_2;
    s32 var_r0;
    s32 var_r1;
    u16 temp_r2;
    u16 temp_r2_3;
    void *temp_r5;
    void *temp_r6;

    func_020185fc(arg0 + 0xD04);
    M2C_FIELD(arg0, s8 *, 0xCED) = (s8) (M2C_FIELD(arg0, s8 *, 0xCED) + 1);
    if ((s32) M2C_FIELD(arg0, s8 *, 0xCED) < 0x78) {
        return;
    }
    temp_r2 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, s8 *, 0xCE8) * 2)), u16 *, 0xCC0);
    switch ((s32) temp_r2) {                        /* switch 1; irregular */
        case 0x1C3F:                                    /* switch 1 */
            var_r1 = 0;
            break;
        case 0x7C1D:                                    /* switch 1 */
            var_r1 = 1;
            break;
        case 0x4CA3:                                    /* switch 1 */
            var_r1 = 2;
            break;
        case 0xAC0:                                     /* switch 1 */
            var_r1 = 3;
            break;
        case 0x3FF:                                     /* switch 1 */
            var_r1 = 4;
            break;
        default:                                        /* switch 1 */
            var_r1 = -1;
            break;
    }
    temp_r2_2                     = ((var_r1 + 0x11) * 0x14) + (M2C_FIELD(arg0, s32 *, 0x48) + 0x54);
    M2C_FIELD(temp_r2_2, u8 *, 3) = (u8) (M2C_FIELD(temp_r2_2, u8 *, 3) & ~6);
    temp_r5                       = M2C_FIELD(arg0, void **, 0xD00);
    M2C_FIELD(temp_r5, u8 *, 3)   = (u8) (M2C_FIELD(temp_r5, u8 *, 3) | 0x40);
    temp_r6                       = M2C_FIELD(arg0, void **, 0xD00);
    M2C_FIELD(temp_r6, u8 *, 3)   = (u8) (M2C_FIELD(temp_r6, u8 *, 3) & ~6);
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s8 *, 0xCE9) * 2)), s16 *, 0xCA0) = 0x7FFF;
    func_02007408(M2C_FIELD(arg0, s32 *, 0x48), 0, 2, arg0 + 0xCA0, 1);
    func_02007514(M2C_FIELD(arg0, s32 *, 0x48));
    temp_r2_3 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, s8 *, 0xCE8) * 2)), u16 *, 0xCC0);
    switch ((s32) temp_r2_3) {                      /* switch 2; irregular */
        case 0x1C3F:                                    /* switch 2 */
            var_r0 = 0;
            break;
        case 0x7C1D:                                    /* switch 2 */
            var_r0 = 1;
            break;
        case 0x4CA3:                                    /* switch 2 */
            var_r0 = 2;
            break;
        case 0xAC0:                                     /* switch 2 */
            var_r0 = 3;
            break;
        case 0x3FF:                                     /* switch 2 */
            var_r0 = 4;
            break;
        default:                                        /* switch 2 */
            var_r0 = -1;
            break;
    }
    M2C_FIELD((((var_r0 + 0x11) * 0x14) + M2C_FIELD(arg0, s32 *, 0x48)), s8 *, 0x56) = 0;
    M2C_FIELD(arg0, s8 *, 0xCE8)                                                     = 0;
    M2C_FIELD(arg0, s8 *, 0xCEC)                                                     = 0;
    M2C_FIELD(arg0, s8 *, 0xCED)                                                     = 0;
    func_020185ac(arg0 + 0xD04);
    M2C_FIELD(arg0, void **, 0xD00) = NULL;
}
