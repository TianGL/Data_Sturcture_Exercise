/********************************************************************************************************************
* Created by Geliang Tian on 2017/12/27. tglasd@163.com, gltian@bit.edu.cn
* Copyright (c) 2017. All rights reserved.
 * 差值查找
*********************************************************************************************************************/

#ifndef INC_2_VECTOR_VECTOR_INTPSEARCH_H
#define INC_2_VECTOR_VECTOR_INTPSEARCH_H


template <typename T> Rank Vector<T>::intpSearch(T const &e, Rank lo, Rank hi) const {
    Rank mi;
    while (lo < hi - 1){
        mi = lo + ( hi - lo) * (e - _elem[lo]) / (_elem[hi-1] - _elem[lo]);
        (e < _elem[mi]) ? hi = mi : lo = mi + 1;
    }
    return --lo;
}
#endif //INC_2_VECTOR_VECTOR_INTPSEARCH_H
