#include <iostream>

/*
 * 顺序表
 * @helwor
 */
#include "linear-list/seqlist/SeqList.h"

int main() {
    SeqList L;
    init(L);
    fullList(L, 3, 10);
    printfList(L);
    return 0;
}
