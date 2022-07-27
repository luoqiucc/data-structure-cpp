/*
 * 循环队列
 * Created by chokeberry on 2022/7/27.
 */

#include <iostream>

#define MAX_SIZE 10

/*
 * 循环队列结构
 */
typedef struct queue {
    int data[MAX_SIZE];
    int front, rear;
} CQueue;

/*
 * 初始化这个顺序队列
 */
bool init(CQueue &Q);

/*
 * 打印队列中的内容
 *
 * ! 这个方法目前还很基础，他会将整个数组中的数据全读出来，不管
 *   有没有被使用。并且他也不会对队头队尾进行标记。
 */
void printfQueue(CQueue Q);

/*
 * 判断队列是否为空
 */
bool isEmpty(CQueue Q);

/*
 * 判断队列是否已满
 */
bool isFull(CQueue Q);

/*
 * 数据加入队列
 */
bool inputQueue(CQueue &Q, int e);

/*
 * 数据从队列中移除
 */
bool outputQueue(CQueue &Q, int &e);

/*
 * 查询队头元素
 */
bool getHead(CQueue &Q, int &e);
