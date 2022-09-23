/*
 * 顺序串
 */

#include "SeqString.h"

bool init(SString &S) {
    S.length = 0;
    return true;
}

/*
 * ! 在代码的具体实现中我为了方便将strlen()的返回值直接返回给了一个int类型的变量，这里会有一个数据
 *   类型变窄的问题，实际返回值的大小有超过int型变量最大表示范围的可能。
 *   Clang-Tidy: Narrowing conversion from 'size_t' (aka 'unsigned long long')
 *   to signed type 'int' is implementation-defined
 */
bool init(SString &S, char *str) {
    int length = strlen(str);
    for (int i = 1; i < length + 1; i++) {
        S.ch[i] = str[i - 1];
    }
    S.length = length;
    return true;
}

bool subString(SString &sub, SString S, int pos, int len) {
    if (pos + len - 1 > S.length) {
        return false;
    }
    for (int i = pos; i < pos + len; i++) {
        sub.ch[i - pos + 1] = S.ch[i];
    }
    sub.length = len;
    return true;
}

int strCompare(SString S, SString T) {
    for (int i = 1; i <= S.length && i <= T.length; i++) {
        if (S.ch[i] != T.ch[i]) {
            return S.ch[i] - T.ch[i];
        }
    }

    return S.length - T.length;
}

int index(SString S, SString T) {
    int i = 0;
    int n = S.length;
    int m = T.length;
    SString sub;

    while (i <= n - m + 1) {
        subString(sub, S, i, m);
        if (strCompare(sub, T) != 0) {
            i++;
        } else {
            return i;
        }
    }

    return 0;
}