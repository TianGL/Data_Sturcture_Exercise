/********************************************************************************************************************
 * Created by Geliang Tian on 2018/2/3. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

#include "convert.h"

void convert(Stack<char>& S, __int64 n, int base) {
    static char digit[] //0 < n, 1 < base <= 16，新进制下的数位符号，可视base取值范围适当扩充
    = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    while (n > 0) {
        int remainder = (int)(n % base); S.push(digit[remainder]);
        n /= base;
        ( "%20I64d * %d + %d\n", n, base, remainder );
        print( S );
        getchar();
    }
}