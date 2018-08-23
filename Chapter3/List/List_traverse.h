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

#ifndef LIST_LIST_TRAVERSE_H
#define LIST_LIST_TRAVERSE_H

template <typename T> void List<T>::traverse(void (*visit)(T &)) {
    for( ListNodePosi(T) p = header->succ; p != trailer; p = p->succ)
        visit(p->data);
}

template <typename T> template <typename VST> //元素类型、操作器
void List<T>::traverse(const VST & visit) { //借助函数对象机制遍历
    for( ListNodePosi(T) p = header->succ; p != trailer; p = p->succ)
        visit(p->data);
}

#endif //LIST_LIST_TRAVERSE_H
