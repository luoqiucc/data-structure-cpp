/*
 * 循环链表
 * Created by chokeberry on 2022/7/24.
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