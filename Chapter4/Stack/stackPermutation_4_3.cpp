/********************************************************************************************************************
 * Created by Geliang Tian on 2018/2/3. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *********************************************************************************************************************/

#include "Stack.h"

void stackPermutation(int* B, int n){ //B[]为带甄别的序列
    Stack<int> S;
    int i = 1;
    int k;
    for (k = 1; k<n; k++){
        while (S.empty() || B[k] != S.top())
            S.push(i++);
        S.pop();
    }
}