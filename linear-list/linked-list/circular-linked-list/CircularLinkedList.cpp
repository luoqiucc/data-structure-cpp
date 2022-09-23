/*
 * 循环链表
 */

#include "CircularLinkedList.h"

bool init(CLinkedList &L) {
    L = (CLNode *) malloc(sizeof(CLNode));
    if (L == nullptr) {
        return false;
    }

    L->next = L;
    return true;
}

bool isEmpty(CLinkedList L) {
    return L->next == L;
}

bool isTail(CLinkedList L, CLNode *p) {
    return p->next == L;
}