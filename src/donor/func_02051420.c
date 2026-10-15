/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_RescheduleThread from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_RescheduleThread.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_02051b24(OSContext *context);
extern void func_02051b70(OSContext *context);
extern int func_02052c94(void);
extern void *func_0205191c(void);
struct Globals {
    OSSwitchThreadCallback systemCallback;
    unsigned int rescheduleCount;
    void ***currentThreadPtr;
    char _pad[0x18];
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
struct ThreadInfo2 {
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
extern struct ThreadInfo2 data_0208e0e4;
extern struct Globals data_0208e0c0;
void func_02051420(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_0208e0c0.rescheduleCount != 0) {
        return;
    }

    info = &data_0208e0e4;
    if (data_0208e0c0.irqDepth != 0 || func_02052c94() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_0208e0c0.currentThreadPtr;
    cur    = *curPtr;
    next   = func_0205191c();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_02051b24((OSContext *) cur)) {
            return;
        }
    }

    cb = data_0208e0c0.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_0208e0c0.currentThread = next;
    func_02051b70((OSContext *) next);
}
