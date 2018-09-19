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

#ifndef QUEEN_STACK_QUEEN_STACK_H
#define QUEEN_STACK_QUEEN_STACK_H

#include <iostream>
using namespace std;

#include <cstring>
#include <cstdio>
#include <cstdlib>
#include "../Stack/Stack.h"
#include "queen.h"  //引入皇后类

typedef enum {Continous, Step} RunMode;

extern RunMode runMode; //运行模式
extern int nSolu; //解的总数
extern int nCheck; //尝试解的总次数

void placeQueens(int );
void displayRow(Queen& q);
void displayProgress (Stack<Queen>& S, int);

#endif //QUEEN_STACK_QUEEN_STACK_H
