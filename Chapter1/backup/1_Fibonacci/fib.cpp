//
// Created by TGL on 2017/11/23.
/** 计算Fibonacci数列的第n项(三种方法) */
//

#include <cfloat>

__int64 fibI( int n){//迭代法：O(n)
    __int64 g = 0, f = 1;//初始化fib(-1)和fib(0)
    while (0 < n--){
        g = g + f;
        f = g - f;
    }
    return g;
}

__int64 fib(int n){//二分递归：O(2^n)
    return (2 > n) ? (__int64)n : fib(n - 1) + fib (n - 2);
}

__int64 fib(int n, __int64 &prev){//线性递归
    //入口形式fib(n, prev)
    if (0 == n)//若达到递归基
    {prev = 1; return 0;}//直接取值：fib(-1) = 1; fib(0) = 0;
    else {
        __int64  prevPrev; prev = fib(n - 1, prevPrev);//递归计算前两项
        return prevPrev + prev; //其和为正解
    }
}//用辅助变量记录前两项，返回数列的当前项， O(n)