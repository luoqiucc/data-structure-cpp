/*
 * 链栈
 * no-head
 * Created by chokeberry on 2022/7/26.
 */

#include <iostream>

typedef struct LSNode {
    int data;
    struct LSNode *next;
} LSNode, *LinkedStack;

/*
 * 初始化链栈
 */
bool init(LinkedStack &S);

/*
 * 打印栈内容
 */
void printfStack(LinkedStack S);

/*
 * 判断栈是否为空
 */
bool isEmpty(LinkedStack S);

/*
 * 数据入栈
 */
bool push(LinkedStack &S, int e);

/*
 * 数据出栈
 */
bool pop(LinkedStack &S, int &e);
