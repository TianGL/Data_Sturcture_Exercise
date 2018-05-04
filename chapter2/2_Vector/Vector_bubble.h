//
// Created by TGL on 2017/12/16.
//

#ifndef INC_2_VECTOR_VECTOR_BUBBLE_H
#define INC_2_VECTOR_VECTOR_BUBBLE_H

#pragma once

template <typename T> bool Vector<T>::bubble ( Rank lo, Rank hi ) { //一趟扫描交换
   bool sorted = true; //整体有序标志
   while ( ++lo < hi ) //自左向右，逐一检查各对相邻元素
      if ( _elem[lo - 1] > _elem[lo] ) { //若逆序，则
         sorted = false; //意味着尚未整体有序，并需要
         swap ( _elem[lo - 1], _elem[lo] ); //通过交换使局部有序
      }
   return sorted; //返回有序标志
}

template <typename T> Rank Vector<T>::bubbleB ( Rank lo, Rank hi) {
    Rank last = lo;
    while( ++lo < hi)
        if (_elem[lo - 1] > _elem[lo]) {
            last = lo; //记录向右最后一个逆序元素
            swap( _elem[lo -1], _elem[lo]);
        }
    return last;
}

template <typename T> Rank Vector<T>::bubbleC ( Rank lo, Rank hi) {
    Rank last = hi;
    while( lo < --hi)
        if (_elem[hi- 1] > _elem[hi]) {
            last = hi-1; //记录向左最后一个逆序元素
            swap( _elem[hi -1], _elem[hi]);
        }
    return last;
}

#endif //INC_2_VECTOR_VECTOR_BUBBLE_H
