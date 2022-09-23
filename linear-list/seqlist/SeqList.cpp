/*
 * 顺序表
 */
#include "SeqList.h"

void init(SeqList &L) {
    L.length = 0;
    for (int i = 0; i < MAX_SIZE; ++i) {
        L.data[i] = 0;
    }
}

bool fullList(SeqList &L, int value, int length) {
    if (length > MAX_SIZE) {
        return false;
    }

    for (int i = 0; i < length; ++i) {
        L.data[i] = value;
    }

    L.length = length;
    return true;
}

void printfList(SeqList L) {
    for (int i = 0; i < L.length; ++i) {
        printf("[%d]=%d ", i, L.data[i]);
    }
}

bool listInsert(SeqList &L, int i, int e) {
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    if (L.length >= MAX_SIZE) {
        return false;
    }

    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }

    L.data[i - 1] = e;
    L.length++;
    return true;
}

bool listDelete(SeqList &L, int i) {
    if (i < 1 || i > L.length) {
        return false;
    }

    for (int j = i; j < L.length; j++) {
        L.data[j - 1] = L.data[j];
    }

    L.length--;
    return true;
}

int locateElem(SeqList L, int e) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e) {
            return i + 1;
        }
    }
    return -1;
}

void destroy(SeqList *L){
    free(L);
}