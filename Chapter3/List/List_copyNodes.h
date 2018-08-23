/***********************************************************************************************************
 * Created by TGL on 2018/1/8. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
************************************************************************************************************/

#ifndef LIST_LIST_COPYNODES_H
#define LIST_LIST_COPYNODES_H

template <typename T> //复制p起n项
void List<T>::copyNodes(ListNodePosi(T) p, int n) {
    init(); //初始化
    while ( 0 < n--) { insertAsLast(p->data); p = p->succ; } //依次作为末节点插入
}
#endif //LIST_LIST_COPYNODES_H
