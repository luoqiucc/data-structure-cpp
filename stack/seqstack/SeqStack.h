/*
 * 顺序栈
 */

#include <iostream>

#define MAX_SIZE 10

/*
 * 顺序栈结构
 */
typedef struct stack {
    int data[MAX_SIZE];
    int top;
} SeqStack;

/*
 * 初始化栈
 */
bool init(SeqStack &S);

/*
 * 判断栈是否为空
 */
bool isEmpty(SeqStack S);

/*
 * 判断栈是否已满
 */
bool isFull(SeqStack S);

/*
 * 返回栈顶数据
 */
int getTop(SeqStack S);

/*
 * 为这个栈填充一点数据
 * ! 使用这个方法会把整个栈先清空
 */
bool fullStack(SeqStack &S, int count);

/*
 * 打印栈中的所有数据
 * 增强型
 */
void printfStack(SeqStack S);

/*
 * 数据入栈
 */
bool push(SeqStack &S, int e);

/*
 * 数据出栈
 */
bool pop(SeqStack &S, int &e);