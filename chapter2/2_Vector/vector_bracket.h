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

#ifndef INC_2_VECTOR_VECTOR_BRACKET_H
#define INC_2_VECTOR_VECTOR_BRACKET_H

template <typename T> T& Vector<T>::operator [] ( Rank r ) const //重载下标操作符
{ return _elem[r]; } // assert: 0 <= r < _size

#endif //INC_2_VECTOR_VECTOR_BRACKET_H
