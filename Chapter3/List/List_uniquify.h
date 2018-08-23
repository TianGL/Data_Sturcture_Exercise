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

#ifndef LIST_LIST_UNIQUIFY_H
#define LIST_LIST_UNIQUIFY_H

//有序列表去重
template <typename T> int List<T>::uniquify() {
    if (_size < 2) return 0;
    int oldSize = _size;
    ListNodePosi(T) p = first(); ListNodePosi(T) q;
    while ( trailer != (q = p->succ)){
        if (p->data != q->data) p = q;
        else remove(q);
    }
    return oldSize - _size;
}

#endif //LIST_LIST_UNIQUIFY_H
