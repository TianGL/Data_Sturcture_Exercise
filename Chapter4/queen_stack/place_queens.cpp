/********************************************************************************************************************
 * Created by Geliang Tian on 2018/3/3. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

#include "queen_stack.h"

void placeQueens (int N) { // N皇后算法（迭代版）：采用试探/回溯的策略，借助栈记录查找的结果
    Stack<Queen> solu;  // 存放（部分）解的栈
    Queen q(0, 0); // 从原点位置触发
    do {
        if ( N <= solu.size() || N <= q.y) { // 若已出界，则
            q = solu.pop(); q.y++; // 回溯一行，并继续试探下一列
        } else {
            while ( (q.y < N) && ( 0 <= solu.find(q))) { // 通过与已有皇后的比对
                q.y++; nCheck++; // 尝试找到可摆放下一皇后的列
            }
            /*DSA*///while ((q.y < N) && (solu.find(q))) //（若基于List实现Stack，则find()返回值的语义有所不同）
            if ( N > q.y ) {
                solu.push( q );
                if ( N <= solu.size() ) nSolu++;
                q.x++; q.y = 0;  // 转入下一行，从第0列开始，试探下一皇后
            }
        }

    }while ( ( 0 < q.x) || ( q.y < N) ); //所有分支均已或穷举或剪枝之后，算法结束

}