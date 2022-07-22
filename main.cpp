#include <iostream>

/*
 * 顺序表
 */
//#include "linear-list/seqlist/SeqList.h"

/*
 * 单链表
 */
#include "linear-list/singly-link-list/SinglyLinkList.h"

int main() {
    // 顺序表
//    SeqList L;
//    init(L);
//    fullList(L, 2, 10);
//    listInsert(L, 1, 5);
//    listInsert(L, 2, 3)；
//    listDelete(L, 2);
//    printfList(L);
//    int i = locateElem(L, 5);
//    printf("\nlength: %d", L.length);
//    printf("\nlocate: %d", i);
//    destroy(&L);
//    return 0;

    // 单链表
    LinkList L;
    init(L);

    for (int i = 0; i < 5; i++) {
        listInsert(L, 1, i);
    }

    printfList(L);
}
