#include <iostream>

/*
 * 顺序表
 * @helwor
 */
#include "linear-list/seqlist/SeqList.h"

int main() {
    // 顺序表
    SeqList L;
    init(L);
    fullList(L, 2, 10);
    listInsert(L, 1, 5);
    listInsert(L, 2, 3);
    listInsert(L, 1, 6);
    listInsert(L, 1, 8);
    listDelete(L, 2);
    printfList(L);
    int i = locateElem(L, 5);
    printf("\nlength: %d", L.length);
    printf("\nlocate: %d", i);
    destroy(&L);
    return 0;
}
