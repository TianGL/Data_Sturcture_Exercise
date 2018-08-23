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

#ifndef LIST_LIST_SELECTIONSORT_H
#define LIST_LIST_SELECTIONSORT_H

// 列表的选择排序算法：对起始于位置p的n个元素排序
template <typename T> void List<T>::selectionSort(ListNode<T> * p, int n) {
    ListNodePosi(T) head = p->pred; ListNodePosi(T) tail = p;
    for (int i = 0; i < n; ++i) {
        tail = tail->succ;
    }
    while (1 < n--) {
        ListNodePosi(T) max = selectMax(head->succ, n);
        insertPred(tail, remove(max));
        tail = tail->pred; //从后向前，从大到小
    }
}

//选择排序改进，减少delete和remove 3-13
template <typename T>void List<T>::selectionSortB(ListNode<T> * p, int n) {
    ListNodePosi(T) head = p->pred; ListNodePosi(T) tail = p;
    for (int i = 0; i < n; ++i) {
        tail = tail->succ;
    }
    while (1 < n--){
        ListNodePosi(T) max = selectMax(head->succ, n);
        swap(max->data, (tail->pred)->data);
    }
}
#endif //LIST_LIST_SELECTIONSORT_H
