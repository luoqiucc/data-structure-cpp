/*
 * Created by chokeberry on 2022/5/1.
 */
#include <iostream>

#define MAX_SIZE 20

/*
 * 顺序表结构
 */
typedef struct {
    int data[MAX_SIZE];
    int length;
} SeqList;

/*
 * 初始化顺序表
 */
void init(SeqList &L);

/*
 * 使用指定的值填充这个顺序表
 * 啊~~ 被灌的满满的了
 */
bool fullList(SeqList &L, int value, int length);

/*
 * 打印顺序表的全部元素
 */
void printfList(SeqList L);

/*
 * 在指定位置插入值
 */
bool listInsert(SeqList &L, int i, int e);

/*
 * 按位序删除一个元素
 */
bool listDelete(SeqList &L, int i);

/*
 * 按值查找
 */
int locateElem(SeqList L, int e);

/*
 * 销毁顺序表
 */
void destroy(SeqList *L);