//
// Created by TGL on 2017/12/26.
//
/******************************************************************************************
 * Geliang Tian, tglasd@163.com
 * Copyright (c) 2017. All rights reserved.
 ******************************************************************************************/

#ifndef INC_2_VECTOR_VECTOR_DOUBLE_H
#define INC_2_VECTOR_VECTOR_DOUBLE_H


template <typename T> struct Double{
    virtual void operator ()( T & e) { e *= 2;}
};

template <typename T> void _double(Vector<T> & V){
    V.traverse(Double<T>());
}
#endif //INC_2_VECTOR_VECTOR_DOUBLE_H
