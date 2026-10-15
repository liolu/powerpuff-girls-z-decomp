/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_FndPrependListObject from projets/blue-dragon-awakened-shadow/src/auto/NNS_FndPrependListObject.c (same code in another
 * game of this workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;
extern void func_020634b4(UnkFndList *list, void *obj);
void func_02063534(UnkFndList *list, void *obj) {
    if (list->unk_00 == 0) {
        func_020634b4(list, obj);
    } else {
        UnkFndLink *link = ((UnkFndLink *) ((u32) (obj) + (list)->unk_0a));

        link->unk_00                                                     = 0;
        link->unk_04                                                     = list->unk_00;
        ((UnkFndLink *) ((u32) (list->unk_00) + (list)->unk_0a))->unk_00 = obj;
        list->unk_00                                                     = obj;
        list->unk_08++;
    }
}
