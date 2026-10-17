#include "engine.h"
#include "m2c.h"

void func_0204742c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020037a4(s32 arg0, s32 arg1) {
    s32 temp_r1;
    s32 temp_r1_10;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 temp_r1_6;
    s32 temp_r1_7;
    s32 temp_r1_8;
    s32 temp_r1_9;
    s32 var_r4;
    u8 temp_r0;

    var_r4 = arg1;
    do {
        temp_r0 = M2C_FIELD(var_r4, u8 *, 0x16);
        switch (temp_r0) {                          /* irregular */
            case 8:
                break;
            case 2:
                temp_r1 = M2C_FIELD(var_r4, s32 *, 8);
                if (temp_r1 != 0) {
                    func_020037a4(var_r4, temp_r1);
                }
                temp_r1_2 = M2C_FIELD(var_r4, s32 *, 0x20);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x20) > temp_r1_2) {
                    M2C_FIELD(arg0, s32 *, 0x20) = temp_r1_2;
                }
                temp_r1_3 = M2C_FIELD(var_r4, s32 *, 0x24);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x24) > temp_r1_3) {
                    M2C_FIELD(arg0, s32 *, 0x24) = temp_r1_3;
                }
                temp_r1_4 = M2C_FIELD(var_r4, s32 *, 0x28);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > temp_r1_4) {
                    M2C_FIELD(arg0, s32 *, 0x28) = temp_r1_4;
                }
                temp_r1_5 = M2C_FIELD(var_r4, s32 *, 0x2C);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) < temp_r1_5) {
                    M2C_FIELD(arg0, s32 *, 0x2C) = temp_r1_5;
                }
                temp_r1_6 = M2C_FIELD(var_r4, s32 *, 0x30);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x30) < temp_r1_6) {
                    M2C_FIELD(arg0, s32 *, 0x30) = temp_r1_6;
                }
                temp_r1_7 = M2C_FIELD(var_r4, s32 *, 0x34);
                if ((s32) M2C_FIELD(arg0, s32 *, 0x34) < temp_r1_7) {
                    M2C_FIELD(arg0, s32 *, 0x34) = temp_r1_7;
                }
                temp_r1_8 = M2C_FIELD(var_r4, s32 *, 0x10) & 0x800100;
                if (temp_r1_8 != 0) {
                    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) | temp_r1_8);
                }
                break;
            default:
            case 3:
                if (!(M2C_FIELD(var_r4, s32 *, 0x10) & 0x20200040)) {
                    func_0204742c(var_r4, arg0 + 0x20, arg0 + 0x2C);
                }
                temp_r1_9 = M2C_FIELD(var_r4, s32 *, 8);
                if (temp_r1_9 != 0) {
                    func_020037a4(var_r4, temp_r1_9);
                }
                temp_r1_10 = M2C_FIELD(var_r4, s32 *, 0x10) & 0x800100;
                if (temp_r1_10 != 0) {
                    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) | temp_r1_10);
                }
                break;
        }
        var_r4 = M2C_FIELD(var_r4, s32 *, 4);
    } while (var_r4 != 0);
}
