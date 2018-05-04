//
// Created by TGL on 2017/12/16.
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
#ifndef INC_2_VECTOR_VECTOR_DEDUPLICATE_H
#define INC_2_VECTOR_VECTOR_DEDUPLICATE_H
#pragma once

template <typename T> int Vector<T>::deduplicate() { //删除无序向量重复元
    int oldSize = _size; //记录原规模
    Rank i = 1; //从_elem[1]开始
    while ( i < _size ) //自前向后逐一考查各元素_elem[i]
        ( find ( _elem[i], 0, i ) < 0 ) ? //在其前缀中寻找与之雷同者（至多一个）
        i++ : remove ( i ); //若无雷同则继续考查其后继，否则删除雷同者
    return oldSize - _size; //向量规模变化量，即被删除元素总数
}

template <typename T> int Vector<T>::deduplicateB() { //删除无序向量重复元
    Rank i = 0; Rank j = 0;//互异元素秩
    while (i < _size)
        while (++j < _size)
            (_elem[i] == _elem[j]) ?
                swap(_elem[j--] , _elem[--_size]) : i++;

}

template <typename T> int Vector<T>::deduplicate( Rank lo, Rank hi) { //删除无序向量重复元素O(nlogn)
    if ( hi - lo < 2 ) return 0; //单元素区间自然有序，否则...
    int mi = ( lo + hi ) / 2; //以中点为界
    mergeSort ( lo, mi ); mergeSort ( mi, hi ); //分别排序
    mergeUniquify ( lo, mi, hi ); //去重归并
}
#endif //INC_2_VECTOR_VECTOR_DEDUPLICATE_H
