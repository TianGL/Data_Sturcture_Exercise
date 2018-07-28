//
// Created by Geliang on 2017/12/21.
//
/******************************************************************************************
 * Geliang Tian, Gltian@bit.edu.cn
 * Copyright (c) 2017.
 ******************************************************************************************/

#ifndef INC_2_VECTOR_VECTOR_INCREASE_H
#define INC_2_VECTOR_VECTOR_INCREASE_H

template <typename T> struct Increase //函数对象：递增一个T类对象
    { virtual void operator()(T& e) { e++; }};

template <typename T> void increase(Vector<T>& V) //元素+1
{ V.traverse(Increase<T>());}

#endif //INC_2_VECTOR_VECTOR_INCREASE_H
