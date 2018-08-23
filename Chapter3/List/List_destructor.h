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

#ifndef LIST_LIST_DESTRUCTOR_H
#define LIST_LIST_DESTRUCTOR_H

template <typename T> List<T>::~List() {
    clear(); //清空列表
    delete header;
    delete trailer;
}
#endif //LIST_LIST_DESTRUCTOR_H
