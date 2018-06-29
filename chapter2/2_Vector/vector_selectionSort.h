//
// Created by TGL on 2017/12/16.
//
/******************************************************************************************
 * Geliang Tian, Gltian@bit.edu.cn
 * Copyright (c) 2017.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/
#ifndef INC_2_VECTOR_VECTOR_SELECTIONSORT_H
#define INC_2_VECTOR_VECTOR_SELECTIONSORT_H


template <typename T> //向量选择排序
void Vector<T>::selectionSort ( Rank lo, Rank hi ) { //assert: 0 < lo <= hi <= size
   /*DSA*/printf ( "\tSELECTIONsort [%3d, %3d)\n", lo, hi );
   while ( lo < --hi )
      swap ( _elem[max ( lo, hi ) ], _elem[hi] ); //将[hi]与[lo, hi]中的最大者交换
}

template <typename T>
Rank Vector<T>::max ( Rank lo, Rank hi ) { //在[lo, hi]内找出最大者
   Rank mx = hi;
   while ( lo < hi-- ) //逆向扫描
      if ( _elem[hi] > _elem[mx] ) //且严格比较
         mx = hi; //故能在max有多个时保证后者优先，进而保证selectionSort稳定
   return mx;
}

#endif //INC_2_VECTOR_VECTOR_SELECTIONSORT_H
