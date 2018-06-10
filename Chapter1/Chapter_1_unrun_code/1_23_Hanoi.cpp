/********************************************************************************************************************
 * Created by Geliang Tian on 2017/11/23. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/


//按照Hanoi规则2，将柱子Sx上的n只盘子，借助柱子Sy中转，转移到Sz上

void hanoi(int n, Stack<Disk>& Sx, Stack<Disk>& Sy, Stack<Disk>& Sz){
    if (n>0){//没有盘子剩余，不再递归
        hanoi(n-1,Sx,Sz,Sy);//递归：将Sx上的n-1只盘子，借助Sz，转移到Sy
        move（Sx, Sz）;//直接将Sx最后一只盘子转移到Sz
        hanoi(n-1, Sy, Sx, Sz);//将Sy上n-1只盘子，借助Sx，转移到Sz上
    }
}

/** O(2^n)*/