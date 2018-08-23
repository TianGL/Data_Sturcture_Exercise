/***********************************************************************************************************
 * Created by TGL on 2018/1/9. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
************************************************************************************************************/

#ifndef LIST_LIST_REVERSE2_H
#define LIST_LIST_REVERSE2_H

#include "listNode.h"
#include "List.h"

template <typename T> void List<T>::reverse() {
    if (_size < 2) return;
    for (ListNodePosi(T) p = header; p; p = p->pred) {
        swap(p->pred, p->succ);
    }
    swap(header, trailer);
}
#endif //LIST_LIST_REVERSE2_H
