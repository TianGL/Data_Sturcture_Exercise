/********************************************************************************************************************
 * Created by Geliang Tian on 2018/1/7. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

#ifndef LIST_LIST_H
#define LIST_LIST_H

#include "listNode.h" //节点类

template <typename T> class List{ //列表向量类

private:
    int _size; ListNodePosi(T) header; ListNodePosi(T) trailer; //规模、头尾哨兵

protected:
    void init(); //列表创建初始化
    int clear(); //清除所有节点
    void copyNodes(ListNodePosi(T), int); //复制列表中各置位置p起第二n项
    void merge(ListNodePosi(T)&, int, List<T>&, ListNodePosi(T), int); //归并
    void mergeSort(ListNodePosi(T)&, int); //对从P开始连续n个节点归并排序
    void selectionSort(ListNodePosi(T), int); //...选择排序
    void selectionSortB(ListNodePosi(T), int); //...选择排序改进3-13
    void insertionSort(ListNodePosi(T), int); //...插入排序

public:
    //构造函数
    List() { init(); }
    List(List<T> const& L); //复制列表L
    List(List<T> const& L, Rank r, int n); //复制L从r起的n项
    List(ListNodePosi(T) p, int n); //复制列表中位置p起的n项

    //析构函数
    ~List(); //释放（含头尾哨兵）所有节点

    //只读访问接口
    Rank size() const { return _size; } //规模
    bool empty() const { return _size <= 0; } //判空
    T& operator[] (Rank r) const; //重载寻秩访问（低效率）
    ListNodePosi(T) first() const { return header->succ; } //首节点
    ListNodePosi(T) last() const { return trailer->pred; } //末节点
    bool valid ( ListNodePosi(T) p ) { //判断P位置是否合法
        return p && (trailer != p) && (header != p);
    }
    int disordered() const ; //判断是否已排序
    ListNodePosi(T) find(T const& e) const{ //无序列表查找
        return find(e, _size, trailer);
    }
    ListNodePosi(T) find(T const& e, int n, ListNodePosi(T) p) const ; //无序区间查找
    ListNodePosi(T) search(T const& e) const{ //有序列表查找
        return search(e, _size, trailer);
    }
    ListNodePosi(T) search(T const& e, int n, ListNodePosi(T) p) const; //有序区间查找
    ListNodePosi(T) selectMax(ListNodePosi(T) p, int n ); //p及其n-1后续节点中最大者
    ListNodePosi(T) selectMax() { return selectMax( header->succ, _size); } //列表最大者

    //可写访问接口
    ListNodePosi(T) insertAsFirst(T const& e); //将e当作首节点插入
    ListNodePosi(T) insertAsLast(T const& e); //...末节点..
    ListNodePosi(T) insertSucc(ListNodePosi(T) p, T const& e); //将e当作p的后继
    ListNodePosi(T) insertPred(ListNodePosi(T) p, T const& e); //将e当作p的前驱插入
    T remove(ListNodePosi(T) p ); //删除合法位置p处的节点,返回被删除节点
    void merge(List<T>& L) { merge( header->succ, size(), L, L.first(), L._size) ; } //全列表归并
    void sort(ListNodePosi(T) p, int n ); //列表区间排序
    void sort() { sort(first(), _size); } //列表整体排序
    int deduplicate(); //无序去重
    int uniquify(); //有序去重
    void reverse(); //前后倒置

    //遍历
    void traverse(void(* ) (T& ) ); //遍历，依次实施visit操作（函数指针，只读或局部性修改
    template <typename VST> //操作器
    void traverse (const VST& ); //遍历，依次实施visit操作（函数对象，可全局性修改）

};

#include "List_implementation.h"
#endif //LIST_LIST_H
