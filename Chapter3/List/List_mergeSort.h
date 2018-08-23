/***********************************************************************************************************
 * Created by TGL on 2018/1/9. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
************************************************************************************************************/

#ifndef LIST_LIST_MERGESORT_H
#define LIST_LIST_MERGESORT_H

// 归并排序
template <typename T> void List<T>::mergeSort(ListNode<T> *& p, int n) {
    if( n < 2) return;
    int m = n >> 1;
    ListNodePosi(T) mid = p;
    for (int i = 0; i < m; ++i) { //中点指针
        mid = mid->succ;
    }
    mergeSort(p, m); mergeSort(mid, n - m); //对前、后子列表分别排序
    merge(p, m, *this, mid, n - m); //归并
}
#endif //LIST_LIST_MERGESORT_H
