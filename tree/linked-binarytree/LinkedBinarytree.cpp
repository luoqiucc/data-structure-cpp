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

bool addNode(LBiTree &LT, int e){
    return true;
}

void preOrder(LBiTree T){
    if (T != nullptr){
        printf("%d", T->data);
        preOrder(T->LChild);
        preOrder(T->RChild);
    }
}