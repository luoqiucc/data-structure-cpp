//
// Created by 29928 on 2022/5/1.
//

#include <iostream>

#define MAX_SIZE 20

typedef struct {
    int data[MAX_SIZE];
    int length;
} SeqList;

/*
 * 初始化顺序表
 * @helwor
 */
void init(SeqList &L);

/*
 * 使用指定的值填充这个顺序表
 * @helwor
 */
bool fullList(SeqList &L,int value, int Length);

/*
 * 打印顺序表的全部元素
 * @helwor
 */
void printfList(SeqList L);

/*
 * 在指定位置插入值
 * @helwor
 */
bool insertList(SeqList &L, int i, int e);

