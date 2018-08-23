/********************************************************************************************************************
 * Created by Geliang Tian on 2018/1/7. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

#ifndef LIST_LISTNODE_H
#define LIST_LISTNODE_H

typedef int Rank; //秩
#define ListNodePosi(T) ListNode<T>* //列表节点位置

template <typename T> struct ListNode { //列表节点模板类（双向链表形式实现）
    // 成员
    T data; ListNodePosi(T) pred; ListNodePosi(T) succ; //数值、前驱、后继
    //构造函数
    ListNode() {} //针对header和trailer
    ListNode( T e, ListNodePosi(T) p = NULL, ListNodePosi(T) s = NULL)
            : data( e ), pred( p ), succ( s ) {} //默认构造器
    //操作接口
    ListNodePosi(T) insertAsPred ( T const& e); //紧靠当前节点之前插入新节点
    ListNodePosi(T) insertAsSucc ( T const& e); //紧随当前节点之后的新节点
};

#include "listNode_implementation.h"

#endif //LIST_LISTNODE_H
