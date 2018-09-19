/********************************************************************************************************************
 * Created by Geliang Tian on 2018/1/23. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

#ifndef RPN_RPN_H
#define RPN_RPN_H

#pragma warning(disable : 4996)

#include "cstdio"
#include "cstdlib"
#include "cstring"
#include "cmath"

#include "../Stack/Stack.h" // 栈
#include "priority.h"

long long facI ( int n) { // 阶乘运算
  int ans = 1;
  for ( int i = 1; i < n; i ++ ) {
    ans *= i;
  }
  return ans;
}
float calcu (float a, char op, float b );
float calcu (char op, float b );
void displayProgress ( char*, char*, Stack<float>&, Stack<char>&, char* );
void readNumber ( char*&, Stack<float>& );
Operator optr2Rank (char);
char orderBetween (char, char);
void append (char*&, float); // 重载
void append (char*&, char ); // 重载
float evaluate (char* expr, char*& rpn);
#endif //RPN_RPN_H
