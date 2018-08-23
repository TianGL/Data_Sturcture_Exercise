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

#ifndef LIST_LIST_SORT_H
#define LIST_LIST_SORT_H

template <typename T> void List<T>::sort(ListNode<T> *p, int n) {
    switch ( rand() % 3){
        case 1: insertionSort(p, n);
            break;
        case 2: selectionSort(p, n);
            break;
        default: mergeSort(p, n);
            break;
    }
}
#endif //LIST_LIST_SORT_H
