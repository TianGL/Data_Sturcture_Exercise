/***********************************************************************************************************
 * Created by TGL on 2018/1/8. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
************************************************************************************************************/

#ifndef LIST_LIST_CONSTRUCTOR_BY_COPYING_H
#define LIST_LIST_CONSTRUCTOR_BY_COPYING_H


template <typename T> List<T>::List(ListNode<T> *p, int n) { // 复制列表中自位置p起的n项
    copyNodes(p, n);
}

template <typename T> List<T>::List(List<T> const & L) { // 整体复制列表L
    copyNodes(L.first(), L._size);
}

template <typename T> List<T>::List(List<T> const & L, Rank r, int n) { // 复制L中自第r项起的n项（assert: r+n <= L._size）
    copyNodes(L[r], n);
}

#endif //LIST_LIST_CONSTRUCTOR_BY_COPYING_H
