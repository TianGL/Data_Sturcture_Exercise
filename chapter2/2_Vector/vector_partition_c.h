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
#ifndef INC_2_VECTOR_VECTOR_PARTITION_C_H
#define INC_2_VECTOR_VECTOR_PARTITION_C_H


template <typename T> //轴点构造算法：通过调整元素位置构造区间[lo, hi]的轴点，并返回其秩
Rank Vector<T>::partition ( Rank lo, Rank hi ) { //版本C
   swap ( _elem[lo], _elem[lo + rand() % ( hi - lo + 1 ) ] ); //任选一个元素与首元素交换
   T pivot = _elem[lo]; //以首元素为候选轴点——经以上交换，等效于随机选取
   int mi = lo;
   //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   //   [ ---- < [lo] ----- ] [ ----- [lo] <= --- ] [ ----- unknown ----- ]
   // X x . . . . . . . . . x . . . . . . . . . . . x . . . . . . . . . . x
   // |                     |                       |                     |
   // lo (pivot)            mi                      k                     hi
   //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   for ( int k = lo + 1; k <= hi; k++ ) //自左向右扫描
      if ( _elem[k] < pivot ) //若当前元素_elem[k]小于pivot，则
         swap ( _elem[++mi], _elem[k] ); //将_elem[k]交换至原mi之后，使L子序列向右扩展
   //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   //   [ --------- < [lo] ---------- ] [ ----------- [lo] <= ----------- ]
   // X x . . . . . . . . . . . . . . x . . . . . . . . . . . . . . . . . x
   // |                               |                                   |
   // lo                              mi                                  hi
   //++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   swap ( _elem[lo], _elem[mi] ); //候选轴点归位
   return mi; //返回轴点的秩
}

#endif //INC_2_VECTOR_VECTOR_PARTITION_C_H
