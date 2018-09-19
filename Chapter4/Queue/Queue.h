/********************************************************************************************************************
 * Created by Geliang Tian on 2018/1/23. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include "../../Chapter3/List/List.h"

template <typename T> class Queue: public List<T> {
public:
    void enqueue(T const& e) { (this)->insertAsLast( e ); } // 入队：尾部插入
    T dequeue() { return (this)->remove((this)->first()); } // 出队：首部删除
    T & front() { return this->first()->data; } // 队首
};

#include "Queue_implementation.h"
#endif //QUEUE_QUEUE_H
