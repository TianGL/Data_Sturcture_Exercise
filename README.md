# 数据结构练习

$\textcolor{red}{未完待续} $ 

个人学习数据结构的一些代码（C++）教材和课程是根据清华大学邓俊辉老师的数据结构教程([课程链接](https://dsa.cs.tsinghua.edu.cn/~deng/ds/dsacpp/))，代码在[CLion](https://www.jetbrains.com/clion/)中编写（只是为了方便输入）。代码大部分是参考邓老师提供的源码和书上的代码，加强记忆自己敲了一边，也添加了一些自己对课后习题的解答。

代码中的很多算法和数据结构的构造十分经典，我也根据自己的学习从新归纳整理了下

```c++
//copyright and some information of Junhui DENG
/*********************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
***********************************************************************/
```

## 第一章 绪论

* [1_Fibonacci](/Chapter1/1_Fibonacci)

  * [Fibonacci sequence](/Chapter1/1_Fibonacci/Fib.h) 类：

    ​	`get()`: 获取当前Fib项;

    ​	`next()`: 转至下一个Fib项;

    ​	`prev()`: 转至前一个Fib项目

  * [三种计算fibonacci 的方法](/Chapter1/1_Fibonacci/fib.cpp)

    ​	迭代法`long long fibI( int n)`( $O(n)$ );

    ​	二分递归`long long fib(int n)`( $O(2^n)$ );

    ​	线性递归`long long fib(int n, long long &prev)`( $O(n)$ )

* [Chapter_1_unrun_code](/Chapter1/Chapter_1_unrun_code): 习题程序

  * [Fun1_7](/Chapter1/Chapter_1_unrun_code/Fun1_7.cpp): 包含循环、分支、子函数调用，甚至递归算法的样例程序

  * [Fun1_12](/Chapter1/Chapter_1_unrun_code/Fun1_12.cpp): 统计整数二进制展开中数位1的总数 (两种方法) (邓老师提供里测试代码countones)

  * [Fun1_13](/Chapter1/Chapter_1_unrun_code/Fun1_13.cpp): 幂函数$2^n$算法 (蛮力递归版本  $O(2^r)$ ) `//r为输入比特长度`

  * [Fun1_14](/Chapter1/Chapter_1_unrun_code/Fun1_14.cpp): 幂函数$2^n$算法(优化迭代版本) $O(r)$ `//r为输入比特长度`

  * [Fun1_15](/Chapter1/Chapter_1_unrun_code/Fun1_15.cpp): 计算数组区间A[lo, hi）的最大值 ( 二分递归 )

  * [1_23_Hanoi: Hanoi](/Chapter1/Chapter_1_unrun_code/1_23_Hanoi.cpp)问题

  * [1_25_gcdCN](/Chapter1/Chapter_1_unrun_code/1_25_gcdCN.cpp): 最大公约数为题

    ​	九章算术 “中华更相减损数”gcdCN: $O( log(a+b) )$ 

    ​	欧式算法gcd: $O( log(a*b) )$

  * [1_26_shift2](/Chapter1/Chapter_1_unrun_code/1_26_shift2.cpp): 将数组左循环k位

  * [1_27_Ackermann](/Chapter1/Chapter_1_unrun_code/1_27_Ackermann.cpp): 计算Ackermann函数值

  * [1_29_Hailstone](/Chapter1/Chapter_1_unrun_code/1_29_Hailstone.cpp): Hailstone 序列

## 第二章 向量

- Vector数据结构极其相关方法
- bitmap结构及方法



*_share和_unprint文件为邓老师的测试辅助文件，注释掉了部分内容，随着更新会逐步取消相关注释*

# Data Sturcture Exercise

***UNFINISHED!!!***

The code of [Data Structures in C++(Junhui Deng, tshinghua university)](https://dsa.cs.tsinghua.edu.cn/~deng/ds/dsacpp/)

The code are code are programed in [CLion](https://www.jetbrains.com/clion/). Not all the file were compiled.

This repo mainly for record the work I have done. Some codes provided by Prof. Deng is really clever and they could be good reference in future.

***Citation***

```c++
//copyright and some information of Junhui DENG
/*********************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
***********************************************************************/
```



## Chapter 1: Intorduction

- [1_Fibonacci](/Chapter1/1_Fibonacci)

  - [Fibonacci sequence](/Chapter1/1_Fibonacci/Fib.h) (class)：

    ​	`get()`: Get current fibonacci value;

    ​	`next()`: Get next fibonacci value;

    ​	`prev()`: Get previous fibonacci value

  - [三种计算fibonacci 的方法](/Chapter1/1_Fibonacci/fib.cpp)

    ​	Iteration `long long fibI( int n)`( $O(n)$ );

    ​	Binary Recursion `long long fib(int n)`( $O(2^n)$ );

    ​	Linear Recursion `long long fib(int n, long long &prev)`( $O(n)$ )

- [Chapter_1_unrun_code](/Chapter1/Chapter_1_unrun_code): exercise

  - [Fun1_7](/Chapter1/Chapter_1_unrun_code/Fun1_7.cpp): A program contains loop, branch, subfunction and recursion

  - [Fun1_12](/Chapter1/Chapter_1_unrun_code/Fun1_12.cpp): Count the total number of digits 1 in the binary expansion of an integer (Two methods) ( also contained in **countones** sourcecodes provided by Prof. Deng )

  - [Fun1_13](/Chapter1/Chapter_1_unrun_code/Fun1_13.cpp): Caculate power function $2^n$ ( brute force recursion  $O(2^r)$ ) `//r donates the bit length of input data`

  - [Fun1_14](/Chapter1/Chapter_1_unrun_code/Fun1_14.cpp): Caculate power function $2^n$ ( iteration $O(r)$ )`//r donates the bit length of input data`

  - [Fun1_15](/Chapter1/Chapter_1_unrun_code/Fun1_15.cpp): Caculate the max value in A[lo, hi）( binary recursion )

  - [1_23_Hanoi](/Chapter1/Chapter_1_unrun_code/1_23_Hanoi.cpp): Hanoi problem

  - [1_25_gcdCN](/Chapter1/Chapter_1_unrun_code/1_25_gcdCN.cpp): Greatest Common Divisor (GCD)

    ​	The Nine Chapters on the Mathematical Art “中华更相减损术” gcdCN: $O( log(a+b) )$ 

    ​	Euclid algorithm, gcd: $O( log(a*b) )$

  - [1_26_shift2](/Chapter1/Chapter_1_unrun_code/1_26_shift2.cpp): move k bits of an array from right to left

  - [1_27_Ackermann](/Chapter1/Chapter_1_unrun_code/1_27_Ackermann.cpp): Caculate Ackermann function

  - [1_29_Hailstone](/Chapter1/Chapter_1_unrun_code/1_29_Hailstone.cpp): Hailstone sequence