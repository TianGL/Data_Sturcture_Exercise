//
// Created by TGL on 2017/11/21.
/** 二分递归求数组最大值 */
//

#include <stdlib.h>

int MaxR(int A[], int lo, int hi){//计算数组区间A[lo, hi）的最大值（二分递归）
    if (lo + 1 == hi) //如遇递归积（区间长度已降至1），则
        return A[LO]; //直接返回该元素
    else { //否则（一般lo+1<hi），则
        int mi = (lo + hi) >> 1; //以中位单元为界，将原区间一分为二：A[lo,mi), A[mi,hi)
        return __max(MaxR(A, lo, mi), MaxR(A, mi, hi)); //递归的计算子区间的最大值，在从中取大者
    }
} //O(hi - lo),线性正比于区间长度