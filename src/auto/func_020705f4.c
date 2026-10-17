#include "m2c.h"

extern void **data_0209be7c;

void func_020705f4(void) {
    if (data_0209be7c == NULL) {
        return;
    }
    if (data_0209be7c != NULL) {
        M2C_FIELD(*data_0209be7c, M2C_UNK(**)(), 4)(data_0209be7c);
    }
    data_0209be7c = NULL;
}
