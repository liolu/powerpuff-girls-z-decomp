/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_PushCommand from projets/blue-dragon-awakened-shadow/src/auto/SND_PushCommand.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern int func_02052c30(void);
extern void func_02052c44(int state);
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
void func_02053d78(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = func_02052c30();
    tail  = data_0208e460.reservedTail;

    if (tail == 0) {
        data_0208e460.reservedHead = command;
        data_0208e460.reservedTail = command;
    } else {
        tail->next                 = command;
        data_0208e460.reservedTail = command;
    }
    command->next = 0;
    func_02052c44(state);
}
