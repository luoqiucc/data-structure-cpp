#include <iostream>
#include "utils/Utils.h"

/*
 * [instance]
 * 括号匹配
 */
#include "instance/brackets-check/BracketsCheck.h"

/*
 * 顺序表
 */
//#include "linear-list/seqlist/SeqList.h"

/*
 * 单链表
 */
//#include "linear-list/linked-list/singly-linked-list/SinglyLinkedList.h"

/*
 * 双链表
 */
//#include "linear-list/linked-list/doubly-linked-list/DoublyLinkedList.h"

/*
 * 循环链表
 */
//#include "linear-list/linked-list/circular-linked-list/CircularLinkedList.h"

/*
 * 静态链表
 */
//#include "linear-list/linked-list/static-linked-list/StaticLinkedList.h"

/*
 * 顺序栈
 */
//#include "stack/seqstack/SeqStack.h"

/*
 * 链栈
 */
//#include "stack/linked-stack/LinkedStack.h"

/*
 * 循环队列
 */
//#include "queue/circular-queue/CircularQueue.h"

/*
 * 链式队列
 */
//#include "queue/linked-queue/LinkedQueue.h"

int main() {
    // 括号匹配
    char brackets[4] = "()(";
    formatBool(check(brackets, sizeof(brackets) - 1));
    return 0;

    // 顺序表
//    SeqList L;
//    init(L);

    // 单链表
//    LinkedList L;
//    init(L);

    //双链表
//    DLinkedList L;
//    init(L);

    // 静态链表
//    SLinkedList L;
//    init(L);

    // 顺序栈
//    SeqStack S;
//    fullStack(S, 5);

    // 链栈
//    LinkedStack S;
//    init(S);

    // 循环队列
//    CQueue Q;
//    init(Q);

    // 链式队列
//    LQueue Q;
//    init(Q);

}
