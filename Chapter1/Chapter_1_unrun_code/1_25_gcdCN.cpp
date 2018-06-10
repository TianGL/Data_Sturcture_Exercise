/********************************************************************************************************************
 * Created by Geliang Tian on 2017/11/23. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/
///九章算术 “中华更相减损术”
//

#include <cfloat>
#include <cmath>


unsigned long long gcdCN (unsigned long long a, unsigned long long b){//assert :0 < min(a,b)
    unsigned int r = 0;//a和b的2^r形式的公因子
    while ( ! ( (a & unsigned int(1) ) || (b & unsigned int(1) ) ) ) {//若a和b都是偶数
        a >>= 1; b >>= 1; r++; //同时除2，公约数乘2
    }
    //a和b至多一个为偶数
    while ( true ) {
        while (!(a & unsigned int(1))) a >>= 1; //若a为偶数，则剔除a的所有因子
        while (!(b & unsigned int(1))) b >>= 1;
        (a > b) ? a -= b : b = a - b;//简化为 gcd(max(a,b) - min(a,b), min(a,b)
        if (0 == a) return a << r;//gcd(0,a) = a
        if (0 == b) return b << r;//gcd(0,a) = a
    }
}//O( log(a+b) )

unsigned long long gcd (unsigned long long a, unsigned long long b){//欧几里德算法
    if (b == 0) return a;
    else return (a > b) ? gcd(b, a % b) : gcd(a, b % a);
}//O( long(ab) )