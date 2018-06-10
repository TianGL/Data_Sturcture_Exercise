//
/**幂函数2^n算法（蛮力递归版本）*/
/********************************************************************************************************************
 * Created by Geliang Tian on 2017/11/21. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

#include <cfloat>

long long power2BF(long long n){//幂函数2^n算法（蛮力递归版本）， n>=0
    return (1 > n) ? 1: power2BF(n - 1) << 1;//递归
}//O(n) = O(2^r), r为输入指数n的比特数