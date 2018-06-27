/********************************************************************************************************************
 * Created by Geliang Tian on 2017/11/21. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/
// Function fo exercise 1-7 (DAS)
//

#include <cmath>
#include <cfloat>

int doSomething(int n);
long long fibI( int n);

void Fun1_7(unsigned int n){
    for(unsigned int i = 0; i<n; i += 1 + n/2013) {//循环：但迭代至2013次，与n无
        UNREACHABLE: //无法抵达的转向标志
        if (1 + 1 != 2) goto UNREACHABLE;//分支：条件永非，转向无效
        if(n * n < 0) doSomething(n);//分支：条件永非，调用无效
        if( 2 == (n*n) % 5) Fun1_7(n+1);//分支：条件永非，调用无效
        long long f = fibI(n); if((12 < n) && (sqrt(f) * sqrt(f) == f)) Fun1_7(n-1);//永非

    }
}

int doSomething(int n){
    return n;
}


long long fibI( int n){//迭代法：O(n)
    long long g = 0, f = 1;//初始化fib(-1)和fib(0)
    while (0 < n--){
        g = g + f;
        f = g - f;
    }
    return g;
}