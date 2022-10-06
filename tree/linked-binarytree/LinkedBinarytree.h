/*
 * 二叉树的链式存储
 */
#include <iostream>

/*
 * 二叉树结点
 */
typedef struct LBiTNode {
    int data;
    struct LBiTNode *LChild, *RChild;
} LBiTNode, *LBiTree;

/*
 * 初始化一个二叉树吗
 * 参数e为根结点的值
 */
bool init(LBiTree &LT, int e);

/*
 * 写入新的元素
 * ! 不考虑元素具体位置，默认在最后添加
 */
bool addNode(LBiTree &LT, int e);

/*
 * 先序遍历
 */
void preOrder(LBiTree T);
