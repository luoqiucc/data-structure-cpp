/*
 * Created by chokeberry on 2022/5/2.
 */
#include "SinglyLinkedList.h"

bool init(LinkedList &L) {
    L = (LNode *) malloc(sizeof(LNode));
    if (L == nullptr) {
        return false;
    }
    L->next = nullptr;
    return true;
}

void fullList(LinkedList &L) {
    for (int i = 0; i < 5; i++) {
        listInsert(L, 1, i);
    }
}

void printfList(LinkedList L) {
    // 这里将头节点直接忽略
    while (L->next != nullptr) {
        L = L->next;
        printf(">%d ", L->data);
    }
    printf("\n");
}

LNode *getElem(LinkedList L, int i) {
    if (i < 0) {
        return nullptr;
    }

    LNode *p;
    int j = 0;
    p = L;
    while (p != nullptr && j < i) {
        p = p->next;
        j++;
    }

    return p;
}

LNode *getElemByValue(LinkedList L, int e) {
    LNode *p = L->next;
    while (p != nullptr && p->data != e) {
        p = p->next;
    }

    return p;
}

bool listInsert(LinkedList &L, int i, int e) {
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
    if (s == nullptr) {
        return false;
    }
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

bool listDelete(LinkedList &L, int i, int &e) {
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
    if (p->next == nullptr) {
        return false;
    }

    LNode *q = p->next;
    e = q->data;
    p->next = q->next;
    free(q);
    return true;
}

bool deleteNode(LNode *p) {
    if (p == nullptr) {
        return false;
    }

    LNode *q = p->next;
    p->data = p->next->data;
    p->next = q->next;
    free(q);
    return true;
}

bool deleteNodePlus(LNode *p) {
    return true;
}