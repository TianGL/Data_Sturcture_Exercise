# 数据结构练习

***未完待续***

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

* [Vector](chapter2/2_Vector)数据结构极其相关方法
  * [main.cpp](/Chapter2/2_Vector/): 测试程序 **(iussues unsolved)**
  * [Vector.h](/Chapter2/2_Vector/Vector.h): vector模板类
  * [Vector_implementatiom.h](/Chapter2/2_Vector/Vector_implementatiom.h):  引入vector各方法的实现头文件
  * [vector_bracket.h](/Chapter2/2_Vector/vector_bracket.h):  
    * `T &operator[](Rank r) const`//重载下标操作符`[]`，可以通过`vecotr[]`访问向量中的元素
  * [vector_assignment.h](/Chapter2/2_Vector/vector_assignment.h):  `Vector<T> & operator = ( Vector<T> const& )`//重载下标操作符`=`，可以通过`vecotr[]`访问向量中的元素
  * [vector_constructor_by_copying.h](/Chapter2/2_Vector/vector_constructor_by_copying.h)
    * `void copyFrom(T const *A, Rank lo, Rank hi)`//复制数组区间`A[lo,hi]`
  * [vector_expand.h](/Chapter2/2_Vector/vector_expand.h)
    - `void expand() //空间不足时扩容(翻倍)
  * [vector_shrink.h](/Chapter2/2_Vector/vector_shrink.h)
    - `void shrink()` //填装因子过小时压缩(减半)
  * [Vector_insert.h](/Chapter/2_Vector/Vector_insert.h)
    - `Rank insert ( Rank r, T const& e )` //插入元素
  * [vector_remove.h](/Chapter/2_Vector/vector_remove.h)
    -  `T remove ( Rank r)` //删除秩为`r`的元素
  * [vector_removeInterval.h](/Chapter/2_Vector/vector_removeInterval.h)
    - `Rank insert ( Rank r, T const& e )` //插入元素
  * [vector_removeInterval.h](/Chapter/2_Vector/vector_removeInterval.h)
    - `int remove ( Rank lo, Rank hi)` //删除秩在区间`[lo, hi)`内的元素
  * [Vector_disordered.h](/Chapter/2_Vector/Vector_disordered.h)
    - `int disordered() const` //判断向量是否以排序，返回向量中逆序相邻元素对的总数
  * [Vector_find.h](/Chapter/2_Vector/Vector_find.h)
    - `Rank find(T const &e, Rank lo, Rank hi) const` //无序向量区间查找
  * [Vector_search_binary_A.h](/Chapter/2_Vector/Vector_search_binary_A.h)
    - `Rank binSearch ( T* A, T const& e, Rank lo, Rank hi )` //二分查找算法（版本A）：在有序向量的区间`[lo, hi)`内查找元素`e`，`0 <= lo <= hi <= _size`，3个判断条件`e=V[mid], e.g.`
  * [Vector_search_binary_B.h](/Chapter/2_Vector/Vector_search_binary_B.h)
    - `Rank binSearch ( T* A, T const& e, Rank lo, Rank hi )` //二分查找算法（版本B），2个判断条件`e<V[mid], e.g.`
  * [Vector_search_binary_C.h](/Chapter/2_Vector/Vector_search_binary_C.h)
    - `Rank binSearch ( T* A, T const& e, Rank lo, Rank hi )` //二分查找算法（版本A）：2个判断条件`e<V[mid], e.g.`，有多个命中元素时，总能保证返回秩最大者
  * [Vector_search_fibonaccian_A.h](/Chapter/2_Vector/Vector_search_binary_C.h)
    - `Rank fibSearch ( T* A, T const& e, Rank lo, Rank hi )` //Fibonacci查找算法（版本A）：在有序向量的区间`[lo, hi)`内查找元素`e`，`0 <= lo <= hi <= _size`
  * [Vector_search_fibonaccian_A.h](/Chapter/2_Vector/Vector_search_binary_C.h)
    - `Rank fibSearch ( T* A, T const& e, Rank lo, Rank hi )` //Fibonacci查找算法（版本A）：在有序向量的区间`[lo, hi)`内查找元素`e`，`0 <= lo <= hi <= _size`，3个判断条件(包含等于)，利用fibonacci是的左右分支更为平衡
  * [Vector_search_fibonaccian_B.h](/Chapter/2_Vector/Vector_search_binary_C.h)
    - `Rank fibSearch ( T* A, T const& e, Rank lo, Rank hi )` //Fibonacci查找算法（版本A）：2个判断条件(不含等于)，利用fibonacci是的左右分支更为平衡
  * [Vector_search.h](/Chapter/2_Vector/Vector_search.h)
    - ` Rank search(T const &e, Rank lo, Rank hi) const` //随机选用binary search或者fibonacci search
  * [Vector_traverse.h](/Chapter/2_Vector/Vector_traverse.h)
    - ` void traverse ( void (* ) ( T& ) )` //遍历（使用函数指针，只读或局部修改）
    - `template <typename VST> void traverse ( const VST& )` //遍历（使用函数对象，可全局修改）
  * [Vector_unsort.h](/Chapter/2_Vector/Vector_unsort.h)
    - `void unsort ( Rank lo, Rank hi)` //等概率随机置乱区间[lo, hi)
  * [Vector_sort.h](/Chapter/2_Vector/Vector_sort.h)
    - `void unsort ( Rank lo, Rank hi)` //向量区间[lo, hi)排序，随机选取排序算法
  * [vector_bubble.h](/Chapter/2_Vector/vector_bubble.h)
    - `bool bubble ( Rank lo, Rank hi )` //冒泡排序一趟扫描，有序标志位
    - `Rank bubbleB ( Rank lo, Rank hi )` //冒泡排序一趟扫描改进(习题2-25)，记录向右最后一个逆序元素
    - `Rank bubbleC ( Rank lo, Rank hi )` //冒泡排序一趟扫描改进(习题2-25)，记录向左最后一个逆序元素(右向左扫描)
  * [vector_bubbleSort.h](/Chapter/2_Vector/vector_bubbleSort.h)
    - `void bubbleSort(Rank lo, Rank hi)` //冒泡排序
    - `void bubbleSortB(Rank lo, Rank hi)` //冒泡排序一趟扫描改进B(习题2-25)
    - `void bubbleSortC(Rank lo, Rank hi` //冒泡排序一趟扫描改进C(习题2-25)
  * [vector_selectionSort.h](/Chapter/2_Vector/vector_selectionSort.h)
    - `void selectionSort ( Rank lo, Rank hi )` //选择排序
  * [vector_merge.h](/Chapter/2_Vector/vector_merge.h)
    - `void merge(Rank lo, Rank mi, Rank hi)` //归并算法
    - `void mergeUniquify(Rank lo, Rank mi, Rank hi)` //归并去重算法
  * [vector_partition_a.h](/Chapter/2_Vector/vector_partition_a.h) //向量快速排序轴点构造算法a
  * [vector_partition_a1.h](/Chapter/2_Vector/vector_partition_a.h) //向量快速排序轴点构造算法a1，与a等价
  * [vector_partition_b.h](/Chapter/2_Vector/vector_partition_b.h) //向量快速排序轴点构造算法b，可优化处理多个关键码雷同的退化情况
  * [vector_partition_b2.h](/Chapter/2_Vector/vector_partition_b2.h) //向量快速排序轴点构造算法b1，等价b
  * [vector_partition_c.h](/Chapter/2_Vector/vector_partition_c.h) //向量快速排序轴点构造算法c，尽可能保持稳定
  * [vector_heapSort.h](/Chapter/2_Vector/vector_heapSort.h) //向量快速排序轴点构造算法c，尽可能保持稳定
  * [Vector_uniquify.h](/Chapter/2_Vector/Vector_uniquify.h) 
    * `int Vector<T>::uniquify() `  //有序向量重复元素剔除算法
  * [Vector_deduplicate.h](/Chapter/2_Vector/Vector_deduplicate.h) 
    - `int deduplicate() `  //删除无序向量重复元
    - `int deduplicateB() `  //删除无序向量重复元，算法B，按互异元素块
    - `int deduplicate( Rank lo, Rank hi) `   //删除无序向量重复元素O(nlogn)
  * [vector_increase.h](/Chapter/2_Vector/vector_increase.h) 
    - `void increase(Vector<T>& V) `  //元素+1，函数对象方法
  * [vector_decrease.h](/Chapter/2_Vector/vector_decrease.h) 
    - `void decrease(Vector<T>& V) `  //元素-1，函数对象方法
  * [vector_double.h](/Chapter/2_Vector/vector_decrease.h) 
    - `void _double(Vector<T> & V) `  //元素*2，函数对象方法
  * [vector_expSearch.h](/Chapter/2_Vector/vector_expSearch.h) 
    - `Rank expSearch(T const &e, Rank lo, Rank hi) const` //指数查找习题
  * [vector_expSearch.h](/Chapter/2_Vector/vector_expSearch.h) 
    - `Rank intpSearch(T const &e, Rank lo, Rank hi) const` //差值查找2-24
  * [Exercise_2_22_Saddleback.h](/Chapter/2_Vector/Exercise_2_22_Saddleback.h) 
    - `saddleback(int A[n][n], int x)` // saddleback search 马鞍查找(伪代码)

- [bitmap](/Chapter/Bitmap/)结构及方法
  - [bitmap.h](/Chapter2/Bitmap/bitmap.h) // 位图Bitmap类
  - [bitmap_o1_init_set_only.h ](/Chapter2/Bitmap/bitmap_o1_init_set_only.h)// 位图Bitmap类：以空间作为补偿，节省初始化时间（仅允许插入，不支持删除）
  - [bitmap_o1_init.h ](/Chapter2/Bitmap/[bitmap_o1_init.h) // 位图Bitmap类：以空间作为补偿，节省初始化时间（既允许插入，亦支持删除）
  - [Eratosthenes.h](/Chapter2/Bitmap/Eratosthenes.h) // 筛选法求素数

## 第十一章 字符串匹配

- [string pattern match](/Chpter11/string_pm/)测试程序(match函数未定义)
  - [string_pm_test.h](/Chpter11/string_pm/string_pm_test.h): 测试头文件
  - [string_pm_test.cpp](/Chpter11/string_pm/string_pm_test.cpp): 测试主函数
- [Brute-force](/Chpter11/string_pm/)算法：两种，复杂度相同
- [KMP](/Chpter11/pm_kmp/)算法
  - [pm_kmp.cpp](/Chpter11/pm_kmp/pm_kmp.cpp)
    - `int match ( char* P, char* T )` //kmp算法
  - [pm_kmp_next.cpp](/Chpter11/pm_kmp/pm_kmp_next.cpp)
    - `int* buildNext ( char* P )` //构造模式串P的next表
  - [pm_kmp_next_improved.cpp](/Chpter11/pm_kmp/pm_kmp_next_improved.cpp)
    - `int* buildNext ( char* P )` //改进next表，去重

		

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
