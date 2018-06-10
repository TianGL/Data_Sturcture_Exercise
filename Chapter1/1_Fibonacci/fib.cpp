//
// Created by TGL on 2017/11/23.
/** 计算Fibonacci数列的第n项(三种方法) */
//

#include <cfloat>

long long fibI( int n){//迭代法：O(n)
    long long g = 0, f = 1;//初始化fib(-1)和fib(0)
    while (0 < n--){
        g = g + f;
        f = g - f;
    }
    return g;
}

long long fib(int n){//二分递归：O(2^n)
    return (2 > n) ? (long long)n : fib(n - 1) + fib (n - 2);
}

long long fib(int n, long long &prev){//线性递归
    //入口形式fib(n, prev)
    if (0 == n)//若达到递归基
    {prev = 1; return 0;}//直接取值：fib(-1) = 1; fib(0) = 0;
    else {
        long long  prevPrev; prev = fib(n - 1, prevPrev);//递归计算前两项
        return prevPrev + prev; //其和为正解
    }
}//用辅助变量记录前两项，返回数列的当前项， O(n)