/*
 * 链式队列
 * Created by chokeberry on 2022/7/28.
 */

#include <iostream>

/*
 * 链式队列结构
 */
typedef struct LQNode {
    int data;
    struct LQNode *next;
} LQNode;

typedef struct {
    LQNode *front, *rear;
} LQueue;

/*
 * 初始化这个链式队列
 */
bool init(LQueue &Q);

/*
 * 打印这个队列的信息
 */
void printfQueue(LQueue Q);

/*
 * 判断队列是否为空
 */
bool isEmpty(LQueue Q);

/*
 * 数据加入队列
 */
bool inputQueue(LQueue &Q, int e);

/*
 * 数据移出队列
 */
bool outputQueue(LQueue &Q, int &e);

/*
 * 查询队头元素,如果队列为空则返回-1
 */
int getHead(LQueue Q);
