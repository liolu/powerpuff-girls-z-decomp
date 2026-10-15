/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_FlushCommand from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/SND_FlushCommand.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr data_0208e460;
extern SNDCommand *data_0208e484[8];
extern SNDCommand data_0208e740[0x100];
extern int func_02052c30(void);
extern void func_02052c44(int state);
extern void func_0205202c(void *address, unsigned int size);
extern SNDCommand *func_02053be0(int block);
extern int func_02054990(int channel, unsigned int data, int err);
extern void func_0205416c(void);
int func_02053db0(unsigned int flags) {
    int state = func_02052c30();

    if (data_0208e460.reservedHead == 0) {
        func_02052c44(state);
        return 1;
    }

    if (data_0208e460.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            func_02052c44(state);
            return 0;
        }
        do {
            func_02053be0(1);
        } while (data_0208e460.sentBlockCount >= 8);
        if (data_0208e460.reservedHead == 0) {
            func_02052c44(state);
            return 1;
        }
    }

    func_0205202c(data_0208e740, sizeof(data_0208e740));

    if (func_02054990(7, (unsigned int) data_0208e460.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            func_02052c44(state);
            return 0;
        }
        while (data_0208e460.sentBlockCount >= 8 || func_02054990(7, (unsigned int) data_0208e460.reservedHead, 0) < 0) {
            func_02052c44(state);
            func_02053be0(0);
            state = func_02052c30();
            func_0205202c(data_0208e740, sizeof(data_0208e740));
            if (data_0208e460.reservedHead == 0) {
                func_02052c44(state);
                return 1;
            }
        }
    }

    data_0208e484[data_0208e460.sentRingIndex] = data_0208e460.reservedHead;
    data_0208e460.sentRingIndex++;
    if (data_0208e460.sentRingIndex > 8) {
        data_0208e460.sentRingIndex = 0;
    }
    data_0208e460.reservedHead = 0;
    data_0208e460.reservedTail = 0;
    data_0208e460.sentBlockCount++;
    data_0208e460.nextTag++;
    func_02052c44(state);

    if ((flags & 2) != 0) {
        func_0205416c();
    }
    return 1;
}
