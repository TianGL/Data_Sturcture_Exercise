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

#ifndef LIST_LISTNODE_INSERTASPRED_H
#define LIST_LISTNODE_INSERTASPRED_H

template <typename T> ListNodePosi(T) ListNode<T>::insertAsPred(T const &e) { //将e紧靠当前节点之前插入于当前节点所属列表（设有哨兵头节点header）
    ListNodePosi(T) x = new ListNode( e, pred, this);
    pred->succ = x; pred = x; //设置正向连接
    return x;
}

#endif //LIST_LISTNODE_INSERTASPRED_H
