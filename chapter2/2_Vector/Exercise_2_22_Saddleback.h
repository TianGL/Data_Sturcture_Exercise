/********************************************************************************************************************
* Created by Geliang Tian on 2017/12/27. tglasd@163.com, gltian@bit.edu.cn
* Copyright (c) 2017. All rights reserved.
*********************************************************************************************************************/

#ifndef INC_2_VECTOR_EXERCISE_2_22_SADDLEBACK_H
#define INC_2_VECTOR_EXERCISE_2_22_SADDLEBACK_H

// saddleback search 马鞍查找(伪代码)
saddleback(int A[n][n], int x){
    int i = 0; //不变性：有效超找范围始终为左上角子矩阵A[i, n)[0,j)
    int j = binSearch(A[0][], x);//借助二分查找，在O(logn)时间内，从A癿第0行中不大于X的最大者
    while ((i < n) && (-1 < j)) { //以下，反复根据A[i][j]的比较结果，不断收缩查找范围A[i, n)[0, j)
        if (A[i][j] < x) i++; //矩形区域底边上移
        else if (x < A[i][j]) j--; //矩形区域的右边左移
        else { report(A[i][j]); i++; j--; } //报告当前命中元素，矩形底边上移、右边左移
    }
}
}
#endif //INC_2_VECTOR_EXERCISE_2_22_SADDLEBACK_H
