/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_02071e44[];
extern u8 data_02071e68[];
extern u8 data_02071e8c[];
extern u8 data_02071eb0[];
extern u8 data_02071ed4[];
extern u8 data_02071ef8[];
extern u8 data_02071f1c[];
extern u8 data_02071ff8[];
extern u8 data_02072024[];
extern u8 data_02072050[];
extern u8 data_0207207c[];

u32 data_02077834[2]  = {(u32) ((u8 *) &data_0207207c + 0x16), (u32) ((u8 *) &data_02071f1c + 0xd1)};
u32 data_0207783c[22] = {(u32) ((u8 *) &data_02071f1c + 0xbd), (u32) ((u8 *) &data_02071f1c + 0x1d),
                         (u32) ((u8 *) &data_02071f1c + 0x31), (u32) ((u8 *) &data_02071f1c + 0x27),
                         (u32) ((u8 *) &data_02071f1c + 0xa9), (u32) ((u8 *) &data_02071f1c + 0x9f),
                         (u32) ((u8 *) &data_02071f1c + 0xb3), (u32) ((u8 *) &data_02071f1c + 0xc7),
                         (u32) ((u8 *) &data_02071f1c + 0x3b), (u32) &data_0207207c,
                         (u32) ((u8 *) &data_02072050 + 0x16), (u32) ((u8 *) &data_0207207c + 0xb),
                         (u32) ((u8 *) &data_02072050 + 0x21), (u32) ((u8 *) &data_02071f1c + 0x45),
                         (u32) ((u8 *) &data_02071f1c + 0x4f), (u32) ((u8 *) &data_02071f1c + 0x59),
                         (u32) ((u8 *) &data_02071f1c + 0x63), (u32) ((u8 *) &data_02071f1c + 0x6d),
                         (u32) ((u8 *) &data_02071f1c + 0x77), (u32) ((u8 *) &data_02071f1c + 0x95),
                         (u32) ((u8 *) &data_02071f1c + 0x81), (u32) ((u8 *) &data_02071f1c + 0x8b)};
u32 data_02077894[62] = {(u32) ((u8 *) &data_02071f1c + 0x9),
                         (u32) ((u8 *) &data_0207207c + 0x135),
                         (u32) ((u8 *) &data_0207207c + 0x14f),
                         (u32) ((u8 *) &data_02071f1c + 0x13),
                         (u32) ((u8 *) &data_02071e68 + 0x9),
                         (u32) ((u8 *) &data_02071ed4 + 0x1b),
                         (u32) ((u8 *) &data_02071e68 + 0x12),
                         (u32) ((u8 *) &data_02071e44 + 0x9),
                         (u32) &data_02071ff8,
                         (u32) ((u8 *) &data_02071ff8 + 0xb),
                         (u32) ((u8 *) &data_02071ff8 + 0x16),
                         (u32) ((u8 *) &data_02071ff8 + 0x21),
                         (u32) &data_02072024,
                         (u32) ((u8 *) &data_02072024 + 0xb),
                         (u32) ((u8 *) &data_02072024 + 0x16),
                         (u32) ((u8 *) &data_02072024 + 0x21),
                         (u32) &data_02072050,
                         (u32) ((u8 *) &data_02072050 + 0xb),
                         (u32) ((u8 *) &data_02071ed4 + 0x9),
                         (u32) ((u8 *) &data_02071e8c + 0x9),
                         (u32) &data_02071e44,
                         (u32) ((u8 *) &data_02071ef8 + 0x9),
                         (u32) ((u8 *) &data_02071e8c + 0x12),
                         (u32) &data_02071eb0,
                         (u32) ((u8 *) &data_02071ef8 + 0x12),
                         (u32) ((u8 *) &data_02071ed4 + 0x12),
                         (u32) &data_02071ed4,
                         (u32) ((u8 *) &data_02071ef8 + 0x1b),
                         (u32) ((u8 *) &data_02071eb0 + 0x1b),
                         (u32) ((u8 *) &data_02071e44 + 0x1b),
                         (u32) &data_02071f1c,
                         (u32) &data_02071e68,
                         (u32) &data_02071e8c,
                         (u32) ((u8 *) &data_02071e68 + 0x1b),
                         (u32) &data_02071ef8,
                         (u32) ((u8 *) &data_02071e44 + 0x12),
                         (u32) ((u8 *) &data_02071eb0 + 0x9),
                         (u32) ((u8 *) &data_02071e8c + 0x1b),
                         (u32) ((u8 *) &data_02071eb0 + 0x12),
                         (u32) ((u8 *) &data_0207207c + 0x75),
                         (u32) ((u8 *) &data_0207207c + 0x8d),
                         (u32) ((u8 *) &data_0207207c + 0x99),
                         (u32) ((u8 *) &data_0207207c + 0xbd),
                         (u32) ((u8 *) &data_0207207c + 0xc9),
                         (u32) ((u8 *) &data_0207207c + 0xf9),
                         (u32) ((u8 *) &data_0207207c + 0x129),
                         (u32) ((u8 *) &data_0207207c + 0x21),
                         (u32) ((u8 *) &data_0207207c + 0x39),
                         (u32) ((u8 *) &data_0207207c + 0x51),
                         (u32) ((u8 *) &data_0207207c + 0x5d),
                         (u32) ((u8 *) &data_0207207c + 0x81),
                         (u32) ((u8 *) &data_0207207c + 0xa5),
                         (u32) ((u8 *) &data_0207207c + 0xd5),
                         (u32) ((u8 *) &data_0207207c + 0xed),
                         (u32) ((u8 *) &data_0207207c + 0x45),
                         (u32) ((u8 *) &data_0207207c + 0x69),
                         (u32) ((u8 *) &data_0207207c + 0xb1),
                         (u32) ((u8 *) &data_0207207c + 0xe1),
                         (u32) ((u8 *) &data_0207207c + 0x2d),
                         (u32) ((u8 *) &data_0207207c + 0x105),
                         0x00000000,
                         0x00000000};
