## 树 *Tree*

- 结点数 = 总度数 + 1  

- 度为m的树与m叉树的区别  

| 度为m的树 | m叉树 |
|:------:|:-----:|
| 任意结点的度<=m(最多m个孩子) | 任意结点的度<=m(最多m个孩子) |
| 至少有一个结点度=m | 允许所有结点的度都<m |
| 一定是非空树，至少有m+1个结点| 可以是空树 |

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