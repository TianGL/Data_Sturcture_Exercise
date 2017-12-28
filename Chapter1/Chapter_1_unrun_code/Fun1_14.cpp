//
/**幂函数2^n算法（迭代版）*/
// Created by TGL on 2017/11/21.
//

#include <cfloat>

__int64 power2_I(int n){//幂函数2^n算法（优化迭代版本），n>=0
    __int64 pow = 1; //O(1):累积器初始化为2^0
    __int64 p = 2; //O(1):累乘项初始化为2
    while (0 < n){ //O(logn):迭代log(n)轮
        if( n & 1){ //O(1): 根据当前比特是否为1，决定是否
            pow *= p; //O(1): 将当前累乘项计入累积器
        }
        n >> 1; //O(1):指数减半
        p *= p; //O(1)：累乘项自乘
    }
    return pow; //O(1):返回累积器
}//O(longn) = O(r),r为输入比特长度