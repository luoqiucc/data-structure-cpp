/*
 * Created by chokeberry on 2022/5/2.
 */
#include "SinglyLinkList.h"

bool init(LinkList &L) {
    L = (LNode *) malloc(sizeof(LNode));
    if (L == nullptr) {
        return false;
    }
    L->next = nullptr;
    return true;
}

void printfList(LinkList &L) {
    // 这里将头节点直接忽略
    while (L->next != nullptr) {
        L = L->next;
        printf(">%d ", L->data);
    }
}

bool listInsert(LinkList &L, int i, int e) {
    if (i < 1) {
        return false;
    }

    LNode *p;
    int j = 0;
    p = L;
    while (p != nullptr && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == nullptr) {
        return false;
    }

    auto *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;

    return true;
}

bool insertNextNode(LNode *p, int e) {
    if (p == nullptr) {
        return false;
    }

    auto *s = (LNode *) malloc(sizeof(LNode));
    if (s == nullptr) {
        return false;
    }

    s->data = e;
    s->next = p->next;
    p->next = s;

    return true;
}

bool insertPriorNode(LNode *p, int e) {
    if (p == nullptr) {
        return false;
    }

    auto *s = (LNode *) malloc(sizeof(LNode));
    if (s == nullptr) {
        return false;
    }

    s->next = p->next;
    p->next = s;
    s->data = p->data;
    p->data = e;

    return true;
}

bool listDelete(LinkList &L, int i, int &e) {

}

bool deleteNode(LNode *p) {

}

bool deleteNodePlus(LNode *p) {

}