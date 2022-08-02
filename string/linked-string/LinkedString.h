/*
 * 链式串
 * Created by chokeberry on 2022/8/2.
 */
#include <iostream>

/*
 * 链式串结构
 */
typedef struct StringNode {
    char ch[4];
    struct StringNode *next;
} StringNode, *LinkedString;
