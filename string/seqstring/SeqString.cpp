/*
 * 顺序串
 * Created by chokeberry on 2022/8/2.
 */

#include "SeqString.h"

bool init(SString &S) {
    S.length = 0;
    return false;
}

bool subString(SString &sub, SString S, int pos, int len) {
    if (pos + len - 1 > S.length) {
        return false
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