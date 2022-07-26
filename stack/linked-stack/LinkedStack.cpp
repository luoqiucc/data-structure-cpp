/*
 * 链栈
 * no-head
 * Created by chokeberry on 2022/7/26.
 */

#include "LinkedStack.h"

bool init(LinkedStack &S) {
    S = nullptr;
    return true;
}

bool isEmpty(LinkedStack S) {
    return S == nullptr;
}

void printfStack(LinkedStack S) {
    int j = 0;
    printf("\n======Stack top======\n");
    while (S != nullptr) {
        printf("| %d -> [%d]\n", j, S->data);
        S = S->next;
        j++;
    }
    printf("====Stack bottom=====\n");
}

bool push(LinkedStack &S, int e) {
    auto *t = (LinkedStack) malloc(sizeof(LSNode));
    if (t == nullptr) {
        return false;
    }

    t->data = e;
    t->next = S;
    S = t;

    return true;
}

bool pop(LinkedStack &S, int &e) {
    if (isEmpty(S)) {
        return false;
    }

    LSNode *d = S;
    e = S->data;
    S = S->next;
    free(d);
    return true;
}

