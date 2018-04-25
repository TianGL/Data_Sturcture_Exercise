/********************************************************************************************************************
 * Created by Geliang Tian on 2017/11/21. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

# include <ctime>
#include <iostream>

using namespace std;

#include "Fib.h"
#include <w32api/sqltypes.h>

__int64 fibI( int n);//迭代
__int64 fib( int n);//二分递归
__int64 fib( int n, __int64 &f);//线性递归

int main(){
    int n;
    cout<<"输入Fibonacci项数n = ";
    n = cin.get();
    if (2 > n) { printf("n is too small\n"); }
    printf ( "\n------------- class Fib -------------\n" );
    Fib f(0);
    for (int i = 0; i < n; i++, f.next()) {
        printf( "fib(%2d) = %d\n", i,f.get());
    }
    for (int i = 0; i < n; ++i) {
        __int64 f0;
        cout<<"fib("<<i<<') = '<< fibI ( i )<<endl;
    }
};