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

#ifndef LIST_LIST_FIND_H
#define LIST_LIST_FIND_H

//在无序列表内节点p（可能是trailer）的n个（真）前驱中，找到等于e的最后者
template <typename T> ListNode<T> * List<T>::find(T const &e, int n, ListNode<T> *p) const {
    while (0 < n--)
        if (e == (p = p->pred)->data) return p;
    return NULL;
}
#endif //LIST_LIST_FIND_H
