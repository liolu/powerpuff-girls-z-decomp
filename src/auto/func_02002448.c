#include "m2c.h"

M2C_UNK func_02002a5c(void *);                      /* extern */
s32 func_0205aa44(M2C_UNK *);                       /* extern */
extern void *data_0208c58c;
extern M2C_UNK func_020024ec;

void func_02002448(void *arg0) {
    s32 var_r0;
    s8 temp_r0;
    void *temp_r4;

    temp_r4 = data_0208c58c;
    if (M2C_FIELD(arg0, u16 *, 2) == 0) {
        temp_r0 = M2C_FIELD(temp_r4, s8 *, 1);
        switch (temp_r0) {                          /* irregular */
            case 0:
                func_02002a5c(temp_r4);
                return;
            case 3:
                if (func_0205aa44(&func_020024ec) == 2) {
                    var_r0 = 1;
                } else {
                    var_r0 = 0;
                }
                if (var_r0 != 0) {
                    return;
                }
                M2C_FIELD(temp_r4, s8 *, 1) = 0;
                func_02002a5c(temp_r4);
                return;
            case 4:
                M2C_FIELD(temp_r4, s8 *, 1) = 4;
                func_02002a5c(temp_r4);
                return;
        }
    } else {
        M2C_FIELD(temp_r4, s8 *, 1) = 0;
        func_02002a5c(temp_r4);
    }
}
