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
 * 初始化一个二叉树
 */
bool init(LBiTree &LT);
