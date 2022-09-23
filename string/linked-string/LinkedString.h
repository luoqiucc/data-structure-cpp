/*
 * 链式串
 */
#include <iostream>

/*
 * 链式串结构
 */
typedef struct StringNode {
    char ch[4];
    struct StringNode *next;
} StringNode, *LinkedString;
