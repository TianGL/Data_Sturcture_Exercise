/***********************************************************************************************************
 * Created by TGL on 2018/1/9. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
************************************************************************************************************/

#ifndef LIST_LIST_REVERSE1_H
#define LIST_LIST_REVERSE1_H

// 前后倒置 1
template <typename T> void List<T>::reverse() {
    ListNodePosi(T) p = header; ListNodePosi(T) q= trailer;
    for (int i = 1; i < _size; i += 2) {
        swap((p = p->succ)->data, (q = q->pred)->data);
    }
}
#endif //LIST_LIST_REVERSE1_H
