/********************************************************************************************************************
 * Created by Geliang Tian on 2018/1/22. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

#ifndef STACK_STACK_VECTOR_H
#define STACK_STACK_VECTOR_H


#include "../../Chapter2/2_Vector/Vector.h" // 以向量为基类，派生出的栈
template <typename T> class Stack: public Vector<T>{ // 将向量的首/末端作为栈底/顶
public:
    void push (T const& e) { (this)->insert((this)->size(), e); } // 入栈
    T pop() { return (this)->remove( (this)->size()-1); } // 出栈
    T& top() { return (*this)[ (this)->size() - 1];} // 取顶
};
#endif //STACK_STACK_VECTOR_H
