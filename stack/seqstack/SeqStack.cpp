/*
 * 顺序栈
 * Created by chokeberry on 2022/7/26.
 */

#include "SeqStack.h"

bool init(SeqStack &S) {
    S.top = -1;
    return true;
}

bool isEmpty(SeqStack S) {
    return S.top == -1;
}

bool isFull(SeqStack S) {
    return S.top == MAX_SIZE - 1;
}

int getTop(SeqStack S) {
    if (isEmpty(S)) {
        return false;
    }

    return S.data[S.top];
}

bool fullStack(SeqStack &S, int count) {
    if (count > MAX_SIZE) {
        return false;
    }

    S.top = -1;
    for (int i = 1; i < count + 1; i++) {
        push(S, i);
    }
    return true;
}

bool push(SeqStack &S, int e) {
    if (isFull(S)) {
        return false;
    }

    S.data[++S.top] = e;
    return true;
}

bool pop(SeqStack &S, int &e) {
    if (isEmpty(S)) {
        return false;
    }

    e = S.data[S.top--];
    return true;
}

void printfStack(SeqStack S) {
    printf("\n======Stack top======\n");
    for (int i = MAX_SIZE - 1; i > -1; i--) {
        if (i == S.top) {
            printf("| %d -> [%d] <-current StackTop\n", i, S.data[i]);
            continue;
        }
        printf("| %d -> [%d]\n", i, S.data[i]);
    }
    printf("====Stack bottom=====\n");
}
