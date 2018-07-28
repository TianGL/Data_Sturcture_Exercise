//
// Created by TGL on 2017/12/26.
//
/**
 * Geliang Tian (tglasd@163.com)
 * Copyright (c) 2017*
 * */
#ifndef INC_2_VECTOR_VECTOR_DECREASE_H
#define INC_2_VECTOR_VECTOR_DECREASE_H

template <typename T> struct Decrease{ //函数对象，递减一个T类
    virtual void operator () ( T& e ){e--;}
};

template <typename T> void decrease(Vector<T>& V){ //元素-1
    V.traverse(Decrease<T>());
}
#endif //INC_2_VECTOR_VECTOR_DECREASE_H
