#include "m2c.h"

M2C_UNK func_02006594(void *);                      /* extern */
M2C_UNK func_02032608(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_02052010(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_0208cee0;

void func_0202291c(void *arg0) {
    s32 temp_r0_3;
    s8 temp_r0_2;
    void *temp_r0;
    void *temp_r0_4;
    void *temp_r1;
    void *temp_r1_2;

    func_02006594(M2C_FIELD(arg0, void **, 0x48));
    temp_r1 = M2C_FIELD(arg0, void **, 0x48);
    if (M2C_FIELD(temp_r1, u8 *, 0x10B) & 6) {
        func_02032608(temp_r1 + 0x108, arg0 + 0xD4, 0);
    }
    temp_r0 = M2C_FIELD(arg0, void **, 0x100);
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, u8 *, 3) & 6)) {
        func_02032608(temp_r0, arg0 + 0xE4, 0);
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 0x48);
    if (M2C_FIELD(temp_r1_2, u8 *, 0x11F) & 6) {
        temp_r0_2 = M2C_FIELD(arg0, s8 *, 0x4C);
        if (temp_r0_2 == 1) {
            func_02032608(temp_r1_2 + 0x11C, arg0 + 0x140, 0);
        } else if (temp_r0_2 == 2) {
            func_02032608(temp_r1_2 + 0x11C, arg0 + 0x164, 0);
        }
    }
    temp_r0_3 = ((M2C_FIELD(arg0, s32 *, 0xA4) + 0x1A) * 0x14) + (s32) (M2C_FIELD(arg0, void **, 0x48) + 0x54);
    if (M2C_FIELD(temp_r0_3, u8 *, 3) & 6) {
        func_02032608((void *) temp_r0_3, arg0 + 0x118, 0);
    }
    temp_r0_4 = M2C_FIELD(arg0, void **, 0xFC);
    if (temp_r0_4 != NULL) {
        func_02032608(temp_r0_4, arg0 + 0x190, 0);
    }
    func_02052010(&data_0208cee0, 0x800);
}
