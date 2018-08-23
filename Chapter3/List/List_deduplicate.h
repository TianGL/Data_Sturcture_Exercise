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

#ifndef LIST_LIST_DEDUPLICATE_H
#define LIST_LIST_DEDUPLICATE_H

template <typename T> int List<T>::deduplicate() {
    if (_size < 2) return 0;
    int oldSize = _size;
    ListNodePosi(T) p = header; Rank r = 0;
    while (trailer != (p = p->succ)) {
        ListNodePosi(T) q = find(p->data, r, p); //在p的r个（真）前驱中查找雷同者
        q ? remove(p) : r++; //若的确存在，则删除之；否则秩加一
    }
    return oldSize - _size;
}
#endif //LIST_LIST_DEDUPLICATE_H
