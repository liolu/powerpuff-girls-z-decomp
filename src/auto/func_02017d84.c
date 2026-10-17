#include "m2c.h"

extern void **data_0208df28;

void func_02017d84(void) {
    if (data_0208df28 == NULL) {
        return;
    }
    if (data_0208df28 != NULL) {
        M2C_FIELD(*data_0208df28, M2C_UNK(**)(), 0x20)(data_0208df28);
    }
    data_0208df28 = NULL;
}
