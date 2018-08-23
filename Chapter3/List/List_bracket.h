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

#ifndef LIST_LIST_BRACKET_H
#define LIST_LIST_BRACKET_H

template <typename T> //操作符重载寻秩访问（低效率 O(n) ）
T& List<T>::operator[](Rank r) const {
    ListNodePosi(T) p = first();
    while (0 < r--) p = p->succ;
    return p->data; //返回数据
}
#endif //LIST_LIST_BRACKET_H
