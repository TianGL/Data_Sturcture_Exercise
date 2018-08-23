/***********************************************************************************************************
 * Created by TGL on 2018/1/9. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
************************************************************************************************************/

#ifndef LIST_LIST_SEARCH_H
#define LIST_LIST_SEARCH_H

// 在有序列表内节点p（可能是trailer）的n个（真）前驱中，找到不大于e的最后者
template <typename T> ListNode<T> * List<T>::search(T const &e, int n, ListNode<T> *p) const {
    while (0 <= n--){
        if ( (p = p->pred)->data <= e) break;
    }
    return p;// assert: 至此位置p必符合输出语义约定——尽管此前最后一次关键码比较可能没有意义（等效于与-inf比较）
} //失败时，返回区间左边界的前驱（可能是header）——调用者可通过valid()判断成功与否

#endif //LIST_LIST_SEARCH_H
