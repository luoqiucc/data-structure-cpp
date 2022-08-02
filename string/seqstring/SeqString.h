/*
 * 顺序串
 * Created by chokeberry on 2022/8/2.
 */
#include <iostream>

#define MAX_SIZE 20

/*
 * 顺序串结构
 * ! ch[0]会被弃用，使字符的位序与下标相同。
 */
typedef struct SString {
    char ch[MAX_SIZE];
    int length;
} SString;

bool init(SString &S);

/*
 * 求子串
 */
bool subString(SString &sub, SString S, int pos, int len);

/*
 * 比较两个字符串的大小
 * S>T, 返回值>0
 * S=T, 返回值=0
 * S<T, 返回值<0
 */
int strCompare(SString S, SString T);

/*
 * 定位S中与T相同的子串
 */
int index(SString S, SString T);
