/*
 * ! 这个玩意有个很奇怪的问题，如果定义了很多顺序串，那么只有第一个定义的可以正常使用，之后
 *   定义的会无法打印具体内容，长度信息可正常打印。debug模式下串中的内容也是正确的，唯独使
 *   用打印函数例如printf()这些是会无法打印出串中的内容，长度信息正常打印。
 *
 * 顺序串
 * Created by chokeberry on 2022/8/2.
 */
#include <iostream>
#include <cstring>

#define MAX_SIZE 20

/*
 * 顺序串结构
 * ! ch[0]会被弃用，使字符的位序与下标相同。
 */
typedef struct SString {
    char ch[MAX_SIZE];
    int length;
} SString;

/*
 * 初始化串
 */
bool init(SString &S);

/*
 * 初始化串，且可以初始化一些内容。
 *
 * ! 在代码的具体实现中我为了方便将strlen()的返回值直接返回给了一个int类型的变量，这里会有一个数据
 *   类型变窄的问题，实际返回值的大小有超过int型变量最大表示范围的可能。
 *   Clang-Tidy: Narrowing conversion from 'size_t' (aka 'unsigned long long')
 *   to signed type 'int' is implementation-defined
 */
bool init(SString &S, char *str);

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