/***********************************************************************************************************
 * Created by TGL on 2017/12/29. tglasd@163.com, gltian@bit.edu.cn
 * Copyright (c) 2017. All rights reserved.
 *
 * Data Structures in C++
 * ISBN: 7-302-33064-6 & 7-302-33065-3 & 7-302-29652-2 & 7-302-26883-3
 * Junhui DENG, deng@tsinghua.edu.cn
 * Computer Science & Technology, Tsinghua University
 * Copyright (c) 2006-2013. All rights reserved.
************************************************************************************************************/

#ifndef BITMAP_BITMAP_H
#define BITMAP_BITMAP_H

#pragma once

#pragma warning(disable : 4496 4800)

#include "cstdlib"
#include "cstdio"
#include "memory.h"
#include "../../_share/release.h"

class Bitmap{ //位图Bitmap类
private:
    char* M; int N; //比特图存放的空间M[], 容量为N*sizeof(char)*8 bit
protected:
    void init (int n) { M = new char[N = (n + 7) /8 ]; memset(M, 0, N); }

public:
    Bitmap( int n = 8 ) { init(n); } //按指定规模创建比特图
    Bitmap (char* file, int n = 8 ){ //按指定或默认规模，从指定文件中读取比特图
        init( n ); FILE * fp = fopen( file, "r");
        fread( M, sizeof( char ), N, fp );
        fclose(fp);
    }
    ~Bitmap() { delete [] M; M = NULL; } //析构时释放比特图空间

    //将第i位设为true
    void set   ( int k ) { expand ( k );        M[k >> 3] |=   ( 0x80 >> ( k & 0x07 ) ); }
    //将第i位设为false
    void clear ( int k ) { expand ( k );        M[k >> 3] &= ~ ( 0x80 >> ( k & 0x07 ) ); }
    //测试第i位是否为true
    bool test  ( int k ) { expand ( k ); return M[k >> 3] &    ( 0x80 >> ( k & 0x07 ) ); }

    void dump (char* file) { //将位图整体导出至指定文件，以后便于对新位图批量初始化
        FILE* fp = fopen (file, "w");
        fwrite(M, sizeof(char), N, fp);
        fclose(fp);
    }
    char* bit2string (int n) {//将前n位转换为字符串
        expand (n - 1); //此时可能被访问的最高位为bitmap[n-1]
        char* s = new char[n + 1]; s[n] = '\0'; //字符串所占用空间，有上层调用者负责释放
        for ( int i = 0; i < n; i++)
            s[i] = test(i) ? '1' : '0';
        return s;
    }
    void expand( int k){ //若被访问的[k]出界，则扩容
        if (k < 8*N ) return;
        int oldN = N; char* oldM = M;
        init( 2* k ); //加倍策略扩容
        memcpy( M, oldM, oldN ); delete [] oldM; //原数据转移至新空间
    }
    /*DSA*/
    /*DSA*/   void print ( int n ) //逐位打印以检验位图内容，非必需接口
    /*DSA*/   {  expand ( n ); for ( int i = 0; i < n; i++ ) printf ( test ( i ) ? "1" : "0" );  }
};
#endif //BITMAP_BITMAP_H
