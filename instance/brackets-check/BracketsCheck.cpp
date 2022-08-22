/*
 * 括号匹配
 * 使用栈
 * Created by chokeberry on 2022/7/30.
 */

#include "BracketsCheck.h"

bool init(CSeqStack &S) {
    S.top = -1;
    return true;
}

bool isEmpty(CSeqStack S) {
    return S.top == -1;
}

bool isFull(CSeqStack S) {
    return S.top == MAX_SIZE - 1;
}

bool pop(CSeqStack &S, char &e) {
    if (isEmpty(S)) {
        return false;
    }

    e = S.data[S.top--];
    return true;
}

bool push(CSeqStack &S, char e) {
    if (isFull(S)) {
        return false;
    }

    S.data[++S.top] = e;
    return true;
}

bool check(char str[], int length) {
    CSeqStack S;
    init(S);
    for (int i = 0; i < length; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            push(S, str[i]);
        } else {
            if (isEmpty(S)) {
                return false;
            }

            char popElem;
            pop(S, popElem);
            if (str[i] == ')' && popElem != '(') {
                return false;
            }
            if (str[i] == ']' && popElem != '[') {
                return false;
            }
            if (str[i] == '}' && popElem != '{') {
                return false;
            }
        }
    }

    return isEmpty(S);
}
