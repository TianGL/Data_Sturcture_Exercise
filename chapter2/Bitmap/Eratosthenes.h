/***********************************************************************************************************
 * Created by TGL on 2018/1/5. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
************************************************************************************************************/
/******************************************************************************************
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/


#ifndef BITMAP_ERATOSTHENES_H
#define BITMAP_ERATOSTHENES_H

#include "bitmap.h"
#include "algorithm"
/******************************************************************************************
 * 筛法求素数
 * 计算出不大于n的所有素数
 * 不计内循环，外循环自身每次仅一次加法、两次判断，累计O(n)
 * 内循环每趟迭代O(n/i)步，由素数定理至多n/ln(n)趟，累计耗时不过
 *       n/2 + n/3 + n/5 + n/7 + n/11 + ...
 *    <  n/2 + n/3 + n/4 + n/6 + n/7 + ... + n/(n/ln(n))
 *    =  O(n(ln(n/ln(n)) - 1))
 *    =  O(nln(n) - nln(ln(n)) - 1)
 *    =  O(nlog(n))
 * 如下实现做了进一步优化，内循环从i * i而非i + i开始，迭代步数由O(n / i)降至O(max(1, n / i - i))
 ******************************************************************************************/

void Eratosthenes(int n, char* file){
    Bitmap B(n); B.set(0); B.set(1); //0和1都不是素数
    for (int i = 2 ; i < n; ++i) {
        if(!B.test(i))
            for (int j = std::min(i, 46340) * std::min(i, 46340); j < n; ++j) { //以i为间隔
                B.set(j);//将下一个数标记为合数
            }
    }
    B.dump(file); //将所有整数的筛选标记同意存入指定文件，一遍日后直接导入
}

#endif //BITMAP_ERATOSTHENES_H
