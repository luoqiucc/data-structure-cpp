/*
 * 二叉树的链式存储
 */

#include "LinkedBinarytree.h"

bool init(LBiTree &LT, int e) {
    LT->data = e;
    LT->LChild = nullptr;
    LT->RChild = nullptr;
    return true;
}