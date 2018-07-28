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
#ifndef INC_2_VECTOR_VECTOR_SHRINK_H
#define INC_2_VECTOR_VECTOR_SHRINK_H


template <typename T> void Vector<T>::shrink() { //装填因子过小时压缩向量所占空间
   if ( _capacity < DEFAULT_CAPACITY << 1 ) return; //不致收缩到DEFAULT_CAPACITY以下
   if ( _size << 2 > _capacity ) return; //以25%为界
   T* oldElem = _elem;  _elem = new T[_capacity >>= 1]; //容量减半
   for ( int i = 0; i < _size; i++ ) _elem[i] = oldElem[i]; //复制原向量内容
   delete [] oldElem; //释放原空间
}
#endif //INC_2_VECTOR_VECTOR_SHRINK_H
