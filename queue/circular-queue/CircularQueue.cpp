/*
 * 循环队列
 */

#include "CircularQueue.h"

bool init(CQueue &Q) {
    Q.front = Q.rear = 0;
    return true;
}

void printfQueue(CQueue Q){
    printf("\n");
    for (int i : Q.data) {
        printf("-> [%d]", i);
    }
    printf("\n");
}

bool isEmpty(CQueue Q) {
    return Q.front == Q.rear;
}

bool isFull(CQueue Q) {
    return (Q.rear + MAX_SIZE - Q.front) % MAX_SIZE == MAX_SIZE;
}

bool inputQueue(CQueue &Q, int e) {
    if (isFull(Q)) {
        return false;
    }

    Q.data[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MAX_SIZE;

    return true;
}

bool outputQueue(CQueue &Q, int &e) {
    if (isEmpty(Q)) {
        return false;
    }

    e = Q.data[Q.front];
    Q.front = (Q.front + 1) % MAX_SIZE;

    return true;
}

bool getHead(CQueue &Q, int &e) {
    if (isEmpty(Q)) {
        return false;
    }

    e = Q.data[Q.front];

    return true;
}
