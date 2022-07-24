/*
 * 单链表
 * no_head 表示无头结点，如果没写则默认适用于有头节点链表的操作
 * Created by chokeberry on 2022/5/2.
 */
#include <iostream>

/*
 * 单链表结构
 */
typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *LinkedList;

/*
 * 初始化一个单链表
 */
bool init(LinkedList &L);

/*
 * 给这个表填充一些值
 */
void fullList(LinkedList &L);

/*
 * 遍历链表,打印链表的所有内容
 */
void printfList(LinkedList L);

/*
 * 按位查找
 */
LNode *getElem(LinkedList L, int i);

/*
 * 按值查找
 */
LNode *getElemByValue(LinkedList L, int e);

/*
 * 在第i个位置插入元素e
 */
bool listInsert(LinkedList &L, int i, int e);

/*
 * 在p节点之后插入一个新节点
 */
bool insertNextNode(LNode *p, int e);

/*
 * 在p节点之前插入一个新节点
 */
bool insertPriorNode(LNode *p, int e);

/*
 * 删除第i个位置的元素
 */
bool listDelete(LinkedList &L, int i, int &e);

/*
 * 删除指定节点p
 */
bool deleteNode(LNode *p);

/*
 * 删除指定节点p
 * 这是一个增强版本，解决p是最后一个节点的问题
 */
bool deleteNodePlus(LNode *p);