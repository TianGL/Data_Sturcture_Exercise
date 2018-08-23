/***********************************************************************************************************
 * Created by TGL on 2018/1/9. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
************************************************************************************************************/

#ifndef LIST_LIST_INSERT_H
#define LIST_LIST_INSERT_H

#pragma once

template <typename T> ListNode<T> * List<T>::insertAsFirst(T const &e){
    _size++;
    return header->insertAsSucc(e); // e当作首节点插入
}

template <typename T> ListNode<T> * List<T>::insertAsLast(T const &e) {
    _size++;
    return trailer->insertAsPred(e); // e当作末节点插入
}

template <typename T> ListNode<T> * List<T>::insertPred(ListNode<T> *p, T const &e) {
    _size++;
    return p->insertAsPred(e); // e当作p的后继插入
}

template <typename T> ListNode<T> * List<T>::insertSucc(ListNode<T> *p, T const &e) {
    _size++;
    return p->insertAsSucc(e); // e当作p的后继插入
}
#endif //LIST_LIST_INSERT_H
