//
// Created by TGL on 2017/12/15.
//
/******************************************************************************************
 * Geliang Tian, Gltian@bit.edu.cn
 * Copyright (c) 2017.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 ******************************************************************************************/

#ifndef INC_2_VECTOR_VECTOR_H
#define INC_2_VECTOR_VECTOR_H

#pragma once

#include <type_traits>

typedef int Rank; //秩
#define DEFAULT_CAPACITY 3 //默认初始容量

template <typename T> class Vector { //向量模版类
protected:
    Rank _size;
    int _capacity;
    T *_elem;//规模、容量、数据
    void copyFrom(T const *A, Rank lo, Rank hi); //复制数组区间A[lo,hi]
    void expand(); //空间不足时扩容
    void shrink(); //填装因子过小时压缩
    bool bubble(Rank lo, Rank hi); //扫描交换
    void bubbleSort(Rank lo, Rank hi); //气泡排序算法
    Rank bubbleB( Rank lo, Rank hi);//改进 2-25
    void bubbleSortB(Rank lo, Rank hi); //改进冒泡排序 2-25
    Rank bubbleC( Rank lo, Rank hi);//改进 2-25
    void bubbleSortC(Rank lo, Rank hi); //改进冒泡排序 2-25
    Rank max(Rank lo, Rank hi); //选取最大值
    void selectionSort(Rank lo, Rank hi); //选择排序算法
    void merge(Rank lo, Rank mi, Rank hi); //归并算法
    void mergeUniquify(Rank lo, Rank mi, Rank hi); //归并去重算法
    void mergeSort(Rank lo, Rank hi); //归并排序算法
    Rank partition(Rank lo, Rank hi); //轴点构造算法
    void quickSort(Rank lo, Rank hi); //快速排序算法
    //void heapSort(Rank lo, Rank hi); //堆排序

public:
//构造函数
    Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0) //容量为c、规模为s、所有元素初始为v
    {
        _elem = new T[_capacity = c];
        for (_size = 0; _size < s; _elem[_size++] = v);
    } //s<=c
    Vector(T const *A, Rank n) { copyFrom(A, 0, n); } //数组整体复制
    Vector(T const *A, Rank lo, Rank hi) { copyFrom(A, lo, hi); } //区间复制
    Vector(Vector<T> const &V) { copyFrom(V._elem, 0, V._size); } //向量整体复制
    Vector(Vector<T> const &V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); } //区间

//析构函数
    ~Vector() { delete[] _elem; } //释放内部空间

//只读访问接口
    Rank size() const { return _size; } //规模
    bool empty() const { return !_size; } //判空
    int disordered() const; //判断向量是否以排序
    Rank find(T const &e) const { return find(e, 0, _size); } //无需向量整体查找
    Rank find(T const &e, Rank lo, Rank hi) const; //无序向量区间查找
    Rank search(T const &e) const //有序向量整体查找
    { return (_size <= 0) ? -1 : search(e, 0, _size); }

    Rank search(T const &e, Rank lo, Rank hi) const; //有序向量区间查找
    Rank expSearch(T const &e, Rank lo, Rank hi) const; //指数查找习题
    Rank intpSearch(T const &e, Rank lo, Rank hi) const; //差值查找2-24

// 可写访问接口
    T &operator[](Rank r) const;//重新下载操作符，转为类似数组操作
    Vector<T> &operator=(Vector<T> const &); //重载赋值操作符，便于直接克隆向量
    T remove ( Rank r); //删除秩为r的元素
    int remove ( Rank lo, Rank hi); //删除秩在区间[lo, hi)内的元素
    Rank insert ( Rank r, T const& e ); //插入元素
    Rank insert ( T const& e) { return insert( _size, e); } //默认作为末元素插入
    void sort ( Rank r, Rank hi ); //[lo, hi)排序
    void sort (){ sort (0, _size);} //整体排序
    void unsort ( Rank lo, Rank hi); //[lo, hi)置乱
    void unsort () { unsort( 0, _size);} //整体置乱
    int deduplicate (); //无序去重
    int deduplicateB (); //无序去重改进 GL Tian
    int deduplicate (Rank lo, Rank hi); //无序去重改进 GL Tian
    int uniquify(); //有序去重
 // 遍历
    void traverse ( void (* ) ( T& ) ); //遍历（使用函数指针，只读或局部修改）
    template <typename VST> void traverse ( const VST& ); //遍历（使用函数对象，可全局修改）

    //比较操作（字符串）
//    friend bool operator<(string const&, string const&);
//    friend bool &operator >(T const& e1, T const& e2) const;
//    friend bool &operator ==(T const& e1, T const& e2) const;
};//Vector

#include "Vector_implementatiom.h"

#endif //INC_2_VECTOR_VECTOR_H
