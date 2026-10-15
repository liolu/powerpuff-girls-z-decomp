/* compiler: 2.0/sp1p5  */
/* G3X_Init from projets/blue-dragon-awakened-shadow/src/auto/G3X_Init.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02050340();
extern M2C_UNK func_02050368();
extern M2C_UNK func_020504b8();
void func_020501c8(void) {
    func_02050340();
    (*(volatile s32 *) ((s8 *) ((void *) 0x04000504) + (0))) = 0;
    do {

    } while ((*(volatile s32 *) ((s8 *) ((void *) 0x04000504) + (0xFC))) & 0x08000000);
    (*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0)))     = 0U;
    (*(volatile s32 *) ((s8 *) ((void *) 0x04000504) + (0xFC)))  = 0;
    (*(volatile s32 *) ((s8 *) ((void *) 0x04000060) + (-0x50))) = 0;
    (*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0))) =
        (u16) ((*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0))) | 0x2000);
    (*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0))) =
        (u16) ((*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0))) | 0x1000);
    (*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0))) =
        (u16) ((*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0))) & 0xFFFFCFFD);
    (*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0))) =
        (u16) (((*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0))) & ~0x3000) | 0x10);
    (*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0))) =
        (u16) ((*(volatile u16 *) ((s8 *) ((void *) 0x04000060) + (0))) & 0xCFFB);
    (*(volatile s32 *) ((s8 *) ((void *) 0x04000504) + (0xFC))) =
        (s32) ((*(volatile s32 *) ((s8 *) ((void *) 0x04000504) + (0xFC))) | 0x8000);
    (*(volatile s32 *) ((s8 *) ((void *) 0x04000504) + (0xFC))) =
        (s32) (((*(volatile s32 *) ((s8 *) ((void *) 0x04000504) + (0xFC))) & ~0xC0000000) | 0x80000000);
    func_02050368();
    (*(volatile s32 *) ((s8 *) ((void *) 0x04000350) + (0)))   = 0;
    (*(volatile s16 *) ((s8 *) ((void *) 0x04000350) + (4)))   = 0x7FFF;
    (*(volatile s16 *) ((s8 *) ((void *) 0x04000350) + (6)))   = 0;
    (*(volatile s32 *) ((s8 *) ((void *) 0x04000350) + (8)))   = 0;
    (*(volatile s16 *) ((s8 *) ((void *) 0x04000350) + (0xC))) = 0;
    *(u16 *) 0x04000008 &= ~3;
    func_020504b8();
    (*(volatile s32 *) ((s8 *) ((void *) 0x040004A4) + (0))) = 0x1F0080;
    (*(volatile s32 *) ((s8 *) ((void *) 0x040004A4) + (4))) = 0;
    (*(volatile s32 *) ((s8 *) ((void *) 0x040004A4) + (8))) = 0;
}
