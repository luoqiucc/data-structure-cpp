## 二叉树的顺序存储


## 二叉树的链式存储
链式存储时查找父结点的问题
```c++
// 直接在结构体中新增一个指向父节点的指针
typedef struct LBiTNode {
    int data;
    struct LBiTNode *LChild, *RChild;
    struct LBiTNode *parent;
} LBiTNode, *LBiTree;
```