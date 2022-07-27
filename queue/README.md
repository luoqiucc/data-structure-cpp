## 循环队列

#### 计算循环队列中元素的个数

```
front: 队头位置/下标
rear: 队尾位置/下标

(rear + MAX_SIZE - front) % MAX_SIZE
```

> ! 在循环队列中会产生一个队列为空/满时头指针与尾指针状态相同的情况，也就是说当头指针与尾指针指向同一个位置时，该队列即有可能是空，也有可能是满。下面是几个该问题的解决方案。

#### 方案1
牺牲一个存储空间，队尾空着。

#### 方案2
在队列结构体中增加一个变量专门来记录当前队列的长度

```c++
// 循环队列结构
typedef struct queue {
    int data[MAX_SIZE];
    int front, rear;
    int size; //当前队列的长度
} CQueue;
```

#### 方案3
在队列结构体中增加一个变量专门来记录最近的一次操作是删除/插入，通过tag的值来判断队列为空/满

```c++
// 循环队列结构
typedef struct queue {
    int data[MAX_SIZE];
    int front, rear;
    int tag; //最近的一次操作是删除/插入,删除置0，插入置1
} CQueue;
```

#### 方案4
用上面提到的公式直接计算出队列中到底有多少元素，然后与队列的最大容量进行比较
```c++
//代码位置: /queue/circular-queue/CircularQueue.cpp:25:1
bool isFull(CQueue Q) {
    return (Q.rear + MAX_SIZE - Q.front) % MAX_SIZE == MAX_SIZE;
}
```