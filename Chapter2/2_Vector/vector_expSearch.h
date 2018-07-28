/********************************************************************************************************************
* Created by Geliang Tian on 2017/12/27. tglasd@163.com, gltian@bit.edu.cn
* Copyright (c) 2017. All rights reserved.
*********************************************************************************************************************/

#ifndef INC_2_VECTOR_VECTOR_EXPSEARCH_H
#define INC_2_VECTOR_VECTOR_EXPSEARCH_H


template <typename T> Rank Vector<T>::expSearch(T const& e, Rank lo, Rank hi ) const {
    if( lo == 0 ){
        if (_elem[0] == e) return lo;
        else lo++;
    }
    else if( lo == 1) {
        if ( _elem[1] == e) return lo;
        else lo << 1;
    }
    Rank k_1;//k+1
    while (lo < hi){
        k_1 = lo * lo;
        if (hi - 1 < k_1) k_1 = hi-1;
        if (_elem[lo++] <= e && e <= _elem[hi] ) return lo;
    }
    return -1;

}


#endif //INC_2_VECTOR_VECTOR_EXPSEARCH_H
