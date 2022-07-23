/*
 * Created by chokeberry on 2022/7/23.
 */
#include <iostream>

/*
 * 双链表结构
 */
typedef struct DLNode {
    int data;
    struct DLNode *prior, *next;
} DLNode, *DLinkedList;
