//
// Created by 29928 on 2022/5/1.
//
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

