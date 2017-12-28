//
// Created by TGL on 2017/11/23.
///计算Ackermann函数值，必然终止（超限数学归纳法 transfinite induction）
//

#include <cfloat>

__int64 Ackermann(int m, int n){
    if (m == 0) return n+1;
    else if ( m > 0 && n == 0) return Ackermann( m - 1, 1);
    else if ( m > 0 && n > 0) return Ackermann(m - 1, Ackermann(m, n-1));
    else return 0;
}