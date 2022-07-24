/*
 * 循环链表
 * Created by chokeberry on 2022/7/24.
 */
#include <iostream>

typedef struct CLNode {
    int data;
    struct CLNode *next;
} CLNode, *CLinkedList;

/*
 * 初始化循环链表
 */
bool init(CLinkedList &L);

/*
 * 判断循环链表是否为空
 */
bool isEmpty(CLinkedList L);

/*
 * 判断该节点是否是该循环链表的表尾节点
 */
bool isTail(CLinkedList L, CLNode *p);