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

#ifndef LIST_LIST_INSERTIONSORT_H
#define LIST_LIST_INSERTIONSORT_H

// 列表的插入排序算法：对起始于位置p的n个元素排序
template <typename T> void List<T>::insertionSort(ListNode<T> *p, int n) {
    for (int r = 0; r < n; ++r) {
        insertSucc(search(p->data, r, p), p->data); //插入
        p = p->succ;
        remove(p->pred);
    }
}
#endif //LIST_LIST_INSERTIONSORT_H
