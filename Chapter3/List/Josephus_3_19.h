/***********************************************************************************************************
 * Created by TGL on 2018/1/16. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
************************************************************************************************************/

#ifndef LIST_JOSEPHUS_3_19_H
#define LIST_JOSEPHUS_3_19_H

//#include "List.h"

int josephus(int n, int k){
    ListNodePosi(int) p = new ListNode<int> (0);
    ListNodePosi(int) _head = new ListNode<int>;
    ListNodePosi(int) _trailer = new ListNode<int>;
    ListNodePosi(int) p0 = p;//记录首节点
    ListNodePosi(int) p_remove; //待删除节点
    int count = k;

    //列表初始化
    _head->succ = p; p->pred = _head;
    _trailer->pred = p; p->succ = _trailer;
    for (int i = 1; i < n; ++i) {
        p = p->insertAsSucc(i);
    }

    //构建循环列表
    p->succ = _head->succ;
    _head->succ->pred = _trailer->pred;
    p = p->succ;

    //循环计算
    while(1 < n--) {
        while(1 < count--){
            p = p->succ;
        }
        p_remove = p->succ;
        p->succ = (p->succ)->succ;
        (p->succ)->pred = p;
        delete p_remove;
    }
    return p->data;
}

//int josephus(int n, int k){ //列表法，析构出错
//    List<int> L;
//    ListNodePosi(int) p;//记录首节点
//    ListNodePosi(int) p_remove; //待删除的节点
//    int count = k;
//    for (int i = 0; i < n; ++i) { //列表初始化
//        L.insertAsLast(i);
//    }
//    p = L.first();
//    L.last()->succ = L.first();
//    L.first()->pred = L.last();
//    while(1 < n--) {
//        while(1 < count--){
//            p = p->succ;
//        }
//        count = k;
//        p_remove = p->succ;
//        p->succ = (p->succ)->succ;
//        p->succ->pred = p;
//        delete p_remove;
//    }
//    return p->data;
//}
#endif //LIST_JOSEPHUS_3_19_H
