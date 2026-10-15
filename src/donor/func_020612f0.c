/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200d8fc from projets/livly-garden/src/donor/func_0200d8fc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef struct NNSG2dUserExCellAttr {
    u32 *pAttr;
} NNSG2dUserExCellAttr;
typedef struct NNSG2dUserExCellAttrBank {
    u16 numCells;
    u16 numAttribute;
    NNSG2dUserExCellAttr *pCellAttrArray;
} NNSG2dUserExCellAttrBank;
void func_020612f0(NNSG2dUserExCellAttrBank *pCellAttrBank) {
    u16 i;

    pCellAttrBank->pCellAttrArray = (pCellAttrBank->pCellAttrArray) =
        (void *) ((u32) (pCellAttrBank->pCellAttrArray) + (u32) pCellAttrBank);
    for (i = 0; i < pCellAttrBank->numCells; i++) {
        pCellAttrBank->pCellAttrArray[i].pAttr = (pCellAttrBank->pCellAttrArray[i].pAttr) =
            (void *) ((u32) (pCellAttrBank->pCellAttrArray[i].pAttr) + (u32) pCellAttrBank);
    }
}
