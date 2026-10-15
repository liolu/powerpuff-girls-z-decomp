/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* WMi_SendCommand from projets/blue-dragon-awakened-shadow/src/auto/WMi_SendCommand.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkMessageQueue {
    u32 unk_00[8];
} UnkMessageQueue;
extern BOOL func_02051bfc(UnkMessageQueue *queue, void *msg, s32 flags);
extern void func_02052010(void *ptr, u32 size);
extern s32 func_02054990(u32 tag, u32 data, BOOL err);
typedef char *va_list;
extern u32 *func_02059a64(void);
extern u32 func_02059abc(u16 id, u16 paramNum, ...);
extern UnkMessageQueue data_02090a88;
extern u32 *func_02059a64(void);
u32 func_02059abc(u16 id, u16 paramNum, ...) {
    va_list args;
    s32 i;
    s32 result;
    u32 *buf = func_02059a64();

    if (buf == 0) {
        return 8;
    }
    *(u16 *) buf = id;

    ((args) = ((va_list) ((char *) ((unsigned int) (&paramNum) & ~3U) + ((((unsigned int) (sizeof(paramNum))) + 3U) & ~3U))));
    for (i = 0; i < paramNum; i++) {
        buf[i + 1] = (*(u32 *) ((args += ((((unsigned int) (sizeof(u32))) + 3U) & ~3U)) -
                                ((((unsigned int) (sizeof(u32))) + 3U) & ~3U)));
    }
    ((void) 0);

    func_02052010(buf, 0x100);
    result = func_02054990(10, (u32) buf, 0);
    func_02051bfc(&data_02090a88, buf, 1);
    if (result < 0) {
        return 8;
    }
    return 2;
}
