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

#ifndef LIST_LIST_SELECTMAX_H
#define LIST_LIST_SELECTMAX_H

// 从起始于位置p的n个元素中选出最大者
template <typename T> ListNode<T> * List<T>::selectMax(ListNode<T> *p, int n) {
    ListNodePosi(T) max = p;
    for (ListNodePosi(T) cur = p; 1 < n; n--) {
        if( !lt((cur = cur->succ)->data, max->data) ) //less than
            max = cur;
    }
    return max; //返回最大节点位置
}
#endif //LIST_LIST_SELECTMAX_H
