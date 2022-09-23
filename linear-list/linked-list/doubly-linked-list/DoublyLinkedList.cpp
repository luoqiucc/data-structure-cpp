/*
 * 双链表
 */
#include "DoublyLinkedList.h"

bool init(DLinkedList &L) {
    L = (DLNode *) malloc(sizeof(DLNode));
    if (L == nullptr) {
        return false;
    }

    L->prior = nullptr;
    L->next = nullptr;

    return true;
}

bool isEmpty(DLinkedList L) {
    return L->next == nullptr;
}

void printfList(DLinkedList L) {
    // 这里将头节点直接忽略
    while (L->next != nullptr) {
        L = L->next;
        printf(">%d ", L->data);
    }
    printf("\n");
}

bool insertNextDLNode(DLNode *p, DLNode *s) {
    if (p == nullptr || s == nullptr) {
        return false;
    }

    s->next = p->next;
    if (p->next != nullptr) {
        p->next->prior = s;
    }
    s->prior = p;
    p->next = s;

    return true;
}

bool deleteNextDLNode(DLNode *p) {
    if (p == nullptr) {
        return false;
    }

    DLNode *q = p->next;
    if (q == nullptr) {
        return false;
    }
    p->next = q->next;
    if (q->next != nullptr) {
        q->next->prior = p;
    }
    free(q);

    return true;
}

bool destroyDLinkedList(DLinkedList &L) {
    while (L->next != nullptr) {
        deleteNextDLNode(L);
    }
    free(L);
    L = nullptr;

    return true;
}