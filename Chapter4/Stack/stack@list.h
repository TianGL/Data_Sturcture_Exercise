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

#ifndef STACK_STACK_LIST_H
#define STACK_STACK_LIST_H

#include "../../Chapter3/List/List.h" // 以列表为基类，派生出栈模板类

template <typename T> class Stack: public List<T>{ // 将列表的首/末端作为栈顶/底
public:
    void push ( T const& e) { (this)->insertAsLast(e); } // 入栈：等效于将新元素作为列表的尾元素插入
    T pop() { return (this)->remove( (this)->last() );} // 出栈：等效于删除列表的尾元素
    T& top() { return (this)->last()->data; } // 取顶：直接返回列表的尾元素
};
#endif //STACK_STACK_LIST_H
