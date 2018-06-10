/********************************************************************************************************************
 * Created by Geliang Tian on 2017/11/23. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *********************************************************************************************************************/
///计算Ackermann函数值，必然终止（超限数学归纳法 transfinite induction）
//

#include <cfloat>

long long Ackermann(long long m, long long n){
    if (m == 0) return n+1;
    else if ( m > 0 && n == 0) return Ackermann( m - 1, 1);
    else if ( m > 0 && n > 0) return Ackermann(m - 1, Ackermann(m, n-1));
    else return 0;
}