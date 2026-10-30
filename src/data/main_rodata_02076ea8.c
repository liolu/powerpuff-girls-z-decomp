/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_02061fc8[];
extern u8 func_020623c0[];
extern u8 func_02062440[];
extern u8 func_020633a4[];
extern u8 func_020633b8[];
extern u8 func_02063434[];
extern u8 func_02063488[];

const u32 data_02076ea8[6]  = {0x00100008, 0x00400020, 0x00200010, 0x00400020, 0x00080008, 0x00200010};
const u32 data_02076ec0[10] = {(u32) &func_020633b8, (u32) &func_020633a4, (u32) &func_02063434, (u32) &func_02063488,
                               0xFFFFFFFF,           0xFFFFFFFF,           0xFFFFFFFF,           (u32) &func_02061fc8,
                               (u32) &func_020623c0, (u32) &func_02062440};
