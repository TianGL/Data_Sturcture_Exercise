/********************************************************************************************************************
 * Created by Geliang Tian on 2018/2/3. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *********************************************************************************************************************/


#include "Stack.h"

bool paren(const char exp[], int lo, int hi) { //表达式括号匹配检测
    Stack<char> S;
    for (int i = 0; exp[i]; ++i) {
        switch (exp[i]) { //左括号直接进栈
            case '(':
            case '[':
            case '{':
                S.push(exp[i]);
                break;
            case ')':
                if ((S.empty() || ('(' != S.pop()))) return false; break;
            case ']':
                if ((S.empty() || ('[' != S.pop()))) return false; break;
            case '}':
                if ((S.empty() || ('{' != S.pop()))) return false; break;
            default: break;
        }
    }
    return S.empty();
}