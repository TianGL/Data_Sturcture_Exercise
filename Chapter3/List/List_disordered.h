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

#ifndef LIST_LIST_DISORDERED_H
#define LIST_LIST_DISORDERED_H

// 统计逆序相邻元素对的总数
template <typename T> int List<T>::disordered() const {
    int n = 0; ListNodePosi(T) p = first();
    for (int i = 0; i < _size - 1; p = p->succ, ++i) {
        if (p->data > p->succ->data) n++;
        }
    return n;
}
#endif //LIST_LIST_DISORDERED_H
