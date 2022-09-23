/*
 * 括号匹配
 * 使用栈
 */

#include <iostream>

#define MAX_SIZE 10

typedef struct CSeqStack {
    char data[MAX_SIZE];
    int top;
} CSeqStack;

/*
 * 初始化栈
 */
bool init(CSeqStack &S);

/*
 * 判断栈是否为空
 */
bool isEmpty(CSeqStack S);

/*
 * 判断栈是否已满
 */
bool isFull(CSeqStack S);

/*
 * 数据出栈
 */
bool pop(CSeqStack &S, char &e);

/*
 * 数据入栈
 */
bool push(CSeqStack &S, char e);

/*
 * 括号检查
 * str[] 表示要检查的内容
 * length 表示这串内容的长度
 */
bool check(char str[], int length);


