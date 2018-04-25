/********************************************************************************************************************
 * Created by Geliang Tian on 2017/11/23. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

class Fib{
private:
    int f,g;//f = fib(k - 1), g = fib(k)。均为int型，很快就会数值溢出/
public:
    Fib(int n) //初始化为不小于n的最小Fibonacci项（如，Fib(6) = 8）, O(log_phi(n))时间/
    { f = 1; g = 0; while (g < n) next();}
    int get(){ return g;}//获取当前Fibonacci项（如，若当前为8，则返回8），O(1)时间/
    int next(){g += f; f = g - f;
        return g;}//转至下一Fibonacci项 （如，当前为8，则转至13），O(1)时间/
    int prev(){ //转至上一Fibonacci项（如当前为8，则转至5），O(1)时间/
        f = g - f; g -= f;
        return g;
    }
};