#include "engine.h"
#include "m2c.h"

void func_020037a4(M2C_UNK, M2C_UNK);
M2C_UNK func_02046dcc(M2C_UNK, M2C_UNK);
M2C_UNK func_02047004(M2C_UNK, M2C_UNK);

void func_020099e4(s32 arg0) {
    s32 temp_r0_3;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r1;
    s32 var_r4;
    s32 var_r5;
    u8 temp_r0_2;
    void *temp_r0;
    void *temp_r0_4;

    var_r5 = 0;
    var_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8);
    if (var_r1 > 0) {
        do {
            temp_r0   = (void *) func_02047004((s32) M2C_FIELD(arg0, void **, 8), var_r5);
            temp_r0_2 = M2C_FIELD(temp_r0, u8 *, 0x16);
            if (temp_r0_2 != 2) {
                if (temp_r0_2 == 3) {
                    temp_r0_3 = func_02046dcc(M2C_FIELD(arg0, s32 *, 0xC), (s32) M2C_FIELD(temp_r0, s16 *, 0x14));
                    temp_r1   = M2C_FIELD(temp_r0, s32 *, 0x10);
                    if ((temp_r1 & 0x10) && !(temp_r1 & 3)) {
                        M2C_FIELD(temp_r0, u8 *, 0x16)  = 9U;
                        M2C_FIELD(temp_r0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x10) & 0xFF7FFEFF);
                    }
                    M2C_FIELD(temp_r0, s32 *, 0x20) = (s32) M2C_FIELD(temp_r0_3, s32 *, 0);
                    M2C_FIELD(temp_r0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r0_3, s32 *, 4);
                    M2C_FIELD(temp_r0, s32 *, 0x28) = (s32) M2C_FIELD(temp_r0_3, s32 *, 8);
                    M2C_FIELD(temp_r0, s32 *, 0x2C) = (s32) M2C_FIELD(temp_r0_3, s32 *, 0x10);
                    M2C_FIELD(temp_r0, s32 *, 0x30) = (s32) M2C_FIELD(temp_r0_3, s32 *, 0x14);
                    M2C_FIELD(temp_r0, s32 *, 0x34) = (s32) M2C_FIELD(temp_r0_3, s32 *, 0x18);
                }
            } else {
                M2C_FIELD(temp_r0, s32 *, 0x20) = 0x7FFFFFFF;
                M2C_FIELD(temp_r0, s32 *, 0x24) = 0x7FFFFFFF;
                M2C_FIELD(temp_r0, s32 *, 0x28) = 0x7FFFFFFF;
                M2C_FIELD(temp_r0, s32 *, 0x2C) = 0x80000000;
                M2C_FIELD(temp_r0, s32 *, 0x30) = 0x80000000;
                M2C_FIELD(temp_r0, s32 *, 0x34) = 0x80000000;
            }
            var_r5 += 1;
            var_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8);
        } while (var_r5 < var_r1);
    }
    var_r4 = 0;
    if (var_r1 <= 0) {
        return;
    }
    do {
        temp_r0_4 = (void *) func_02047004((s32) M2C_FIELD(arg0, void **, 8), var_r4);
        if ((M2C_FIELD(temp_r0_4, u8 *, 0x16) == 2) && (M2C_FIELD(temp_r0_4, s32 *, 0) == 0)) {
            temp_r1_2 = M2C_FIELD(temp_r0_4, s32 *, 8);
            if (temp_r1_2 != 0) {
                func_020037a4((s32) temp_r0_4, temp_r1_2);
            }
        }
        var_r4 += 1;
    } while (var_r4 < (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8));
}
