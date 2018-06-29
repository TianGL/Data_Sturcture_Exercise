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
#ifndef INC_2_VECTOR_VECTOR_BUBBLESORT_H
#define INC_2_VECTOR_VECTOR_BUBBLESORT_H

template <typename T> //向量的起泡排序
void Vector<T>::bubbleSort ( Rank lo, Rank hi ) //assert: 0 <= lo < hi <= size
{ while ( !bubble ( lo, hi-- ) ); } //逐趟做扫描交换，直至全序

template <typename T> //起泡排序改进2-25左侧移动
void Vector<T>::bubbleSortB( Rank lo, Rank hi){
    while (lo < (hi = bubbleB(lo, hi)));
}

template <typename T> //起泡排序改进2-25双侧交替移动
void Vector<T>::bubbleSortC( Rank lo, Rank hi){
    while ((lo = bubbleC(lo, hi)) < (hi = bubbleB(lo, hi)));
}
#endif //INC_2_VECTOR_VECTOR_BUBBLESORT_H
