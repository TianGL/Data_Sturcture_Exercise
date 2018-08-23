/********************************************************************************************************************
 * Created by Geliang Tian on 2018/1/10. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *********************************************************************************************************************/

#ifndef LIST_LIST_INCREASE_H
#define LIST_LIST_INCREASE_H

template <typename T> struct IncreaseList{
    virtual void operator()(T& e){ e++; }
};

template <typename T> void increase(List<T>& L){
    L.traverse(IncreaseList<T>());
}

#endif //LIST_LIST_INCREASE_H
