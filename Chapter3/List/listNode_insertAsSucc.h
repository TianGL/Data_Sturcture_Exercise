/***********************************************************************************************************
 * Created by TGL on 2018/1/8. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.

 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
************************************************************************************************************/

#ifndef LIST_LISTNODE_INSERTASSUCC_H
#define LIST_LISTNODE_INSERTASSUCC_H

template <typename T> //将e紧随节点之后插入于当前节点所属列表（设有哨兵尾节点trailer）
ListNodePosi(T) ListNode<T> ::insertAsSucc(T const &e) {
    ListNodePosi(T) x = new ListNode (e, this, succ); //创建新节点
    succ->pred = x; succ = x; //设置逆向链接
    return x;
}
#endif //LIST_LISTNODE_INSERTASSUCC_H
