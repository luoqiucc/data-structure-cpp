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
    insertList(L, 1, 5);
    insertList(L, 2, 3);
    insertList(L, 1, 6);
    insertList(L, 1, 8);
    deleteList(L, 2);
    printfList(L);
    int i = locateElem(L, 5);
    printf("\nlength: %d", L.length);
    printf("\nlocate: %d", i);
    return 0;
}
