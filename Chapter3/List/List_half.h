/********************************************************************************************************************
 * Created by Geliang Tian on 2018/1/10. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *********************************************************************************************************************/

#ifndef LIST_LIST_HALF_H
#define LIST_LIST_HALF_H

template <typename T> struct Half //函数对象：减半一个T对象
{
    virtual void operator()(T& e){ e /= 2;}
};

template <typename T> void half(List<T> & L){ //统一减半列表中的各元素

}
#endif //LIST_LIST_HALF_H
