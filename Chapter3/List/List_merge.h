/***********************************************************************************************************
 * Created by TGL on 2018/1/9. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
************************************************************************************************************/

#ifndef LIST_LIST_MERGE_H
#define LIST_LIST_MERGE_H

// 链表归并（p, q）
template <typename T> void List<T>::merge(ListNode<T> *& p, int n, List<T> & L, ListNode<T> * q, int m) {
    // assert:  this.valid(p) && rank(p) + n <= size && this.sorted(p, n)
    //          L.valid(q) && rank(q) + m <= L._size && L.sorted(q, m)
    // 注意：在归并排序之类的场合，有可能 this == L && rank(p) + n = rank(q)
    ListNodePosi(T) pp = p->pred; //借助前驱（可能是header），以便返回前 ...
    while (0 < m){ //在q尚未移出区间之前
        if ((0 < n) && (p->data <= q->data)){ //若p仍在区间内且v(p) <= v(q)，则
            if (q == (p = p->succ)) //p归入合并的列表，并替换为其直接后继
                break;
            n--;
        } else { //若p已超出右界或v(q) < v(p)，则
            insertPred(p, L.remove((q = q->succ)->pred) ); //将q转移至p之前
            m--;
        }
    }
    p = pp->succ; //确定归并后区间的（新）起点
}
#endif //LIST_LIST_MERGE_H
