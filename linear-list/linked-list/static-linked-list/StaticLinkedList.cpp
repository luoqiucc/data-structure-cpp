/*
 * 静态链表
 * Created by chokeberry on 2022/7/25.
 */

#include "StaticLinkedList.h"

bool init(SLinkedList &L) {
    L[0].data = 114;
    L[0].next = -1;
    for (int i = 1; i < MAX_SIZE; i++) {
        L[i].next = -2;
    }

    return true;
}

void printfEmptyNode(SLinkedList L) {
    printf("empty: ");
    for (int i = 0; i < MAX_SIZE; i++) {
        if (L[i].next == -2) {
            printf("[%d]", i);
        }
    }
}

// 待补充
void fullList(SLinkedList &L){

}