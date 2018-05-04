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
#ifndef INC_2_VECTOR_VECTOR_MERGE_H
#define INC_2_VECTOR_VECTOR_MERGE_H

#pragma once

template <typename T> //有序向量的归并
void Vector<T>::merge ( Rank lo, Rank mi, Rank hi ) { //各自有序的子向量[lo, mi)和[mi, hi)
   T* A = _elem + lo; //合并后的向量A[0, hi - lo) = _elem[lo, hi)
   int lb = mi - lo; T* B = new T[lb]; //前子向量B[0, lb) = _elem[lo, mi)
   for ( Rank i = 0; i < lb; B[i] = A[i++] ); //复制前子向量
   int lc = hi - mi; T* C = _elem + mi; //后子向量C[0, lc) = _elem[mi, hi)
//   for ( Rank i = 0, j = 0, k = 0; ( j < lb ) || ( k < lc ); ) { //B[j]和C[k]中的小者续至A末尾
//      if ( ( j < lb ) && ( ! ( k < lc ) || ( B[j] <= C[k] ) ) ) A[i++] = B[j++];
//      if ( ( k < lc ) && ( ! ( j < lb ) || ( C[k] <  B[j] ) ) ) A[i++] = C[k++];
   for (Rank i = 0, j = 0, k =0; j < lb;) {
      if ( (k < lc) && C[k]<B[j]) A[i++] = C[k++];
      if ( (lc <= k) || B[j] <= C[k]) A[i++] = B[k++];
   }
   delete [] B; //释放临时空间B
} //归并后得到完整的有序向量[lo, hi)

template <typename T> //归并去重
void Vector<T>::mergeUniquify(Rank lo, Rank mi, Rank hi){ //各自有序的子向量[lo, mi)和[mi, hi)
   T* A = _elem + lo; //合并后的向量A[0, hi - lo) = _elem[lo, hi)
   int lb = mi - lo; T* B = new T[lb]; //前子向量B[0, lb) = _elem[lo, mi)
   for ( Rank i = 0; i < lb; B[i] = A[i++] ); //复制前子向量
   int lc = hi - mi; T* C = _elem + mi; //后子向量C[0, lc) = _elem[mi, hi)
   for ( Rank i = 0, j = 0, k = 0; ( j < lb ) || ( k < lc ); ) { //B[j]和C[k]中的小者续至A末尾
      if ( ( j < lb ) && ( ( lc <= k ) || ( B[j] <= C[k] ) ) ) A[i] == B[j++] ? _size-- : A[i++] = B[j];
      if ( ( k < lc ) && ( ( lb <= j ) || ( C[k] <  B[j] ) ) ) A[i] == C[k++] ? _size-- : A[i++] = C[k];
   }
   delete [] B; //释放临时空间B
} //归并后得到完整的有序向量[lo, hi)

#endif //INC_2_VECTOR_VECTOR_MERGE_H
