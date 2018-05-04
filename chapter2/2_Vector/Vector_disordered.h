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
#ifndef INC_2_VECTOR_VECTOR_DISORDERED_H
#define INC_2_VECTOR_VECTOR_DISORDERED_H

#pragma once

template <typename T> int Vector<T>::disordered() const { //返回向量中逆序相邻元素对的总数
   int n = 0; //计数器
   for ( int i = 1; i < _size; i++ ) //逐一检查_size - 1对相邻元素
      if ( _elem[i - 1] > _elem[i] ) n++; //逆序则计数
   return n; //向量有序当且仅当n = 0
}


#endif //INC_2_VECTOR_VECTOR_DISORDERED_H
