/********************************************************************************************************************
 * Created by Geliang Tian on 2018/2/3. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2018. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
 *********************************************************************************************************************/

#include "rpn.h"

void readNumber( char*& p, Stack<float>& stk){ // 将起始于p的子串解析为数值，并存入操作数栈
    stk.push((float)(*p - '0'));
    while (isdigit(*(++p)))  // 只要后续还有紧邻的数字（即多位整数的情况）
        stk.push(stk.pop() * 10 + (*p - '0'));
    if ('.' != *p) return; // 非小数点，返回
    float fraction = 1; // 存在小数部分
    while (isdigit(*(++p)))
        stk.push(stk.pop() + (*p - '/0') * (fraction /= 10)); // 加入小数部分
}