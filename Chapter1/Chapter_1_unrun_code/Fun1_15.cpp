/********************************************************************************************************************
 * Created by Geliang Tian on 2017/11/21. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/
/** 二分递归求数组最大值 */
//

#include <stdlib.h>
#include <w32api/ntdef.h>


int MaxR(int A[], int lo, int hi){//计算数组区间A[lo, hi）的最大值（二分递归）
    if (lo + 1 == hi) //如遇递归积（区间长度已降至1），则
        return A[lo]; //直接返回该元素
    else { //否则（一般lo+1<hi），则
        int mi = (lo + hi) >> 1; //以中位单元为界，将原区间一分为二：A[lo,mi), A[mi,hi)
        return max(MaxR(A, lo, mi), MaxR(A, mi, hi)); //递归的计算子区间的最大值，在从中取大者
    }
} //O(hi - lo),线性正比于区间长度