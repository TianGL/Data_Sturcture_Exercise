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

#ifndef LIST_LIST_CLEAR_H
#define LIST_LIST_CLEAR_H

// 清空列表
template <typename T> int List<T>::clear() {
    int oldSize = _size;
    while (0<_size) remove(header->succ);
    return oldSize;
}
#endif //LIST_LIST_CLEAR_H
