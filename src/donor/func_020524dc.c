/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DLInsert from projets/blue-dragon-awakened-shadow/src/auto/DLInsert.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef int s32;
typedef struct UnkHeapCell UnkHeapCell;
struct UnkHeapCell {
    UnkHeapCell *prev;
    UnkHeapCell *next;
    s32 size;
};
UnkHeapCell *func_020524dc(UnkHeapCell *list, UnkHeapCell *cell) {
    UnkHeapCell *prev = 0;
    UnkHeapCell *next;

    for (next = list; next != 0; prev = next, next = next->next) {
        if (cell <= next) {
            break;
        }
    }

    cell->next = next;
    cell->prev = prev;

    if (next != 0) {
        next->prev = cell;
        if ((char *) cell + cell->size == (char *) next) {
            cell->size += next->size;
            next       = next->next;
            cell->next = next;
            if (next != 0) {
                next->prev = cell;
            }
        }
    }

    if (prev != 0) {
        prev->next = cell;
        if ((char *) prev + prev->size == (char *) cell) {
            prev->size += cell->size;
            prev->next = next;
            if (next != 0) {
                next->prev = prev;
            }
        }
        return list;
    } else {
        return cell;
    }
}
