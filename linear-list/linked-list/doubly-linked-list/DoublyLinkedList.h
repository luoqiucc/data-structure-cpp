/*
 * 双链表
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

/*
 * 初始化双链表
 */
bool init(DLinkedList &L);

/*
 * 判断链表是否为空
 */
bool isEmpty(DLinkedList L);

/*
 * 遍历整个链表
 */
void printfList(DLinkedList L);

/*
 * 在p节点之后插入s节点
 */
bool insertNextDLNode(DLNode *p, DLNode *s);

/*
 * 删除p节点的后继节点
 */
bool deleteNextDLNode(DLNode *p);

/*
 * 销毁整个双链表
 */
bool destroyDLinkedList(DLinkedList &L);