/********************************************************************************************************************
 * Created by Geliang Tian on 2017/11/23. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/


void swap (int &a, int &b){//a,b数值交换
    a ^= b;
    b ^= a;
    a ^= b;
}

void reverse(int* A, int lo, int hi){//数组元素倒置
    next:
    while (lo < hi){
        swap(A[lo], A[hi]);
        lo++; hi--;
        goto next;
    }

}

int shift2( int* A, int n, int k){//将数组左循环k位
    k %= n;
    reverse(A,0,k);//
    reverse(A, k, n - k);
    reverse(A, 0, n);
    return 3 * n;//返回累计操作数
}