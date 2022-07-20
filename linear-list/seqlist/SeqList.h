//
// Created by 29928 on 2022/5/1.
//
#include <iostream>

#define MAX_SIZE 20

/*
 * 顺序表结构
 * @helwor
 */
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
 * 啊~~ 被灌的满满的了
 * @helwor
 */
bool fullList(SeqList &L, int value, int length);

/*
 * 打印顺序表的全部元素
 * @helwor
 */
void printfList(SeqList L);

/*
 * 在指定位置插入值
 * @helwor
 */
bool listInsert(SeqList &L, int i, int e);

/*
 * 按位序删除一个元素
 * @helwor
 */
bool listDelete(SeqList &L, int i);

/*
 * 按值查找
 * @helwor
 */
int locateElem(SeqList L, int e);

/*
 * 销毁顺序表
 * @helwor
 */
void destroy(SeqList *L);