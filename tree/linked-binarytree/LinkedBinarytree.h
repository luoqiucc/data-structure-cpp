/*
 * 二叉树的链式存储
 * Created by chokeberry on 2022/8/7.
 */
#include <iostream>

/*
 * 二叉树结点
 */
typedef struct LBiTNode {
    int data;
    struct LBiTNode *LChild, *RChild;
} LBiTNode, *LBiTree;


