/*
 * 链式队列
 * Created by chokeberry on 2022/7/28.
 */

#include "LinkedQueue.h"

bool init(LQueue &Q) {
    Q.front = Q.rear = (LQNode *) malloc(sizeof(LQNode));
    Q.front->next = nullptr;

    return true;
}

void printfQueue(LQueue Q) {
    printf("\nFRONT <-");
    LQNode *n = Q.front;
    while (n->next != nullptr) {
        n = n->next;
        printf(" [%d] ", n->data);
    }
    printf("<- REAR\n");
}

bool isEmpty(LQueue Q) {
    return Q.front == Q.rear;
}

bool inputQueue(LQueue &Q, int e) {
    auto *s = (LQNode *) malloc(sizeof(LQNode));
    if (s == nullptr) {
        return false;
    }

    s->data = e;
    s->next = nullptr;
    Q.rear->next = s;
    Q.rear = s;

    return true;
}

bool outputQueue(LQueue &Q, int &e) {
    if (isEmpty(Q)) {
        return false;
    }

    LQNode *d = Q.front->next;
    e = d->data;
    Q.front->next = d->next;
    if (Q.rear == d) {
        Q.rear = Q.front;
    }
    free(d);

    return true;
}

int getHead(LQueue Q) {
    if (isEmpty(Q)) {
        return -1;
    }

    return Q.front->next->data;
}


