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

#include "rpn.h"

float calcu(float a, char op, float b) { // 二元运算
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if (0 == b) exit(-1); // 注意：如此判浮点数为零可能不安全
            return a / b;
        case '^':
            return pow(a, b);
    }
}

float calcu (char op, float b) {  // 一元运算（阶乘）
    switch (op){
        case '!':
            return (float) facI((int) b);
        default:exit(-1);
    }
}