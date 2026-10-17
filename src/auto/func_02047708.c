#include "m2c.h"

extern void **data_0208e018;

void func_02047708(void *arg0, void *arg1) {
    void *temp_r1;
    void *var_r1;
    void *var_r1_2;
    void *var_r2;
    void *var_r2_2;

    if (arg1 == NULL) {
        M2C_FIELD(arg0, s32 *, 4)   = 0;
        M2C_FIELD(arg0, void **, 0) = NULL;
        if (data_0208e018 == NULL) {
            return;
        }
        temp_r1 = *data_0208e018;
        if (temp_r1 == NULL) {
            *data_0208e018 = arg0;
            return;
        }
        M2C_FIELD(arg0, void **, 0) = temp_r1;
        var_r2                      = M2C_FIELD(temp_r1, void **, 8);
        if (var_r2 != NULL) {
            var_r1 = M2C_FIELD(var_r2, void **, 4);
            if (var_r1 != NULL) {
                do {
                    var_r2 = var_r1;
                    var_r1 = M2C_FIELD(var_r1, void **, 4);
                } while (var_r1 != NULL);
            }
            M2C_FIELD(var_r2, void **, 4) = arg0;
            return;
        }
        M2C_FIELD(temp_r1, void **, 8) = arg0;
        return;
    }
    M2C_FIELD(arg0, void **, 0) = arg1;
    var_r2_2                    = M2C_FIELD(arg1, void **, 8);
    if (var_r2_2 != NULL) {
        var_r1_2 = M2C_FIELD(var_r2_2, void **, 4);
        if (var_r1_2 != NULL) {
            do {
                var_r2_2 = var_r1_2;
                var_r1_2 = M2C_FIELD(var_r1_2, void **, 4);
            } while (var_r1_2 != NULL);
        }
        M2C_FIELD(var_r2_2, void **, 4) = arg0;
        return;
    }
    M2C_FIELD(arg1, void **, 8) = arg0;
}
