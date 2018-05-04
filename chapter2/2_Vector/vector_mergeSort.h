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
#ifndef INC_2_VECTOR_VECTOR_MERGESORT_H
#define INC_2_VECTOR_VECTOR_MERGESORT_H

#pragma once

#pragma once

template <typename T> //向量归并排序
void Vector<T>::mergeSort ( Rank lo, Rank hi ) { //0 <= lo < hi <= size
   /*DSA*/printf ( "\tMERGEsort [%3d, %3d)\n", lo , hi );
   if ( hi - lo < 2 ) return; //单元素区间自然有序，否则...
   int mi = ( lo + hi ) / 2; //以中点为界
   mergeSort ( lo, mi ); mergeSort ( mi, hi ); //分别排序
   //merge ( lo, mi, hi ); //归并
   if(_elem[mi-1] < _elem[mi]) merge(lo, mi, hi); //改进，对已经有序的序列，减少merge调用
}

#endif //INC_2_VECTOR_VECTOR_MERGESORT_H
