/***********************************************************************************************************
 * Created by TGL on 2018/1/9. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
************************************************************************************************************/

#ifndef LIST_LIST_REMOVE_H
#define LIST_LIST_REMOVE_H

// 删除合法节点p，返回其数值
template <typename T> T List<T>::remove(ListNode<T> *p) {
    T e = p->data; //假设T类可以直接赋值
    p->pred->succ = p->succ; //后继
    p->succ->pred = p->pred; //前驱
    delete p;
    _size--;
    return e;
}
#endif //LIST_LIST_REMOVE_H
