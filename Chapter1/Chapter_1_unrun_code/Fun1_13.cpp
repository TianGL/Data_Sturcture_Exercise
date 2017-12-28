//
/**幂函数2^n算法（蛮力递归版本）*/
// Created by TGL on 2017/11/21.
//

#include <cfloat>

__int64 power2BF(int n){//幂函数2^n算法（蛮力递归版本）， n>=0
    return (1 > n) ? 1: power2BF(n - 1) << 1;//递归
}//O(n) = O(2^r), r为输入指数n的比特数